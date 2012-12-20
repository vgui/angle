//
// Copyright (c) 2002-2012 The ANGLE Project Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
//

// Program.h: Defines the gl::Program class. Implements GL program objects
// and related functionality. [OpenGL ES 2.0.24] section 2.10.3 page 28.

#ifndef LIBGLESV2_PROGRAM_BINARY_H_
#define LIBGLESV2_PROGRAM_BINARY_H_

#define GL_APICALL
#include <GLES2/gl2.h>
#include <GLES2/gl2ext.h>

#include <string>
#include <vector>

#include "libGLESv2/Program.h"
#include "libGLESv2/Context.h"
#include "libGLESv2/mathutil.h"
#include "libGLESv2/Shader.h"

#include "libGLESv2/renderer/ShaderExecutable.h"

namespace gl
{
class FragmentShader;
class VertexShader;

// Helper struct representing a single shader uniform
struct Uniform
{
    Uniform(GLenum type, const std::string &_name, unsigned int arraySize);

    ~Uniform();

    bool isArray();

    const GLenum type;
    const std::string _name;   // Decorated name
    const std::string name;    // Undecorated name
    const unsigned int arraySize;

    unsigned char *data;
    bool dirty;

    struct RegisterInfo
    {
        RegisterInfo()
        {
            float4Index = -1;
            samplerIndex = -1;
            boolIndex = -1;
            registerCount = 0;
        }

        void set(const rx::D3DConstant *constant)
        {
            switch(constant->registerSet)
            {
              case rx::D3DConstant::RS_BOOL:    boolIndex = constant->registerIndex;    break;
              case rx::D3DConstant::RS_FLOAT4:  float4Index = constant->registerIndex;  break;
              case rx::D3DConstant::RS_SAMPLER: samplerIndex = constant->registerIndex; break;
              default: UNREACHABLE();
            }
            
            ASSERT(registerCount == 0 || registerCount == (int)constant->registerCount);
            registerCount = constant->registerCount;
        }

        int float4Index;
        int samplerIndex;
        int boolIndex;

        int registerCount;
    };

    RegisterInfo ps;
    RegisterInfo vs;
};

// Struct used for correlating uniforms/elements of uniform arrays to handles
struct UniformLocation
{
    UniformLocation()
    {
    }

    UniformLocation(const std::string &_name, unsigned int element, unsigned int index);

    std::string name;
    unsigned int element;
    unsigned int index;
};

// This is the result of linking a program. It is the state that would be passed to ProgramBinary.
class ProgramBinary : public RefCountObject
{
  public:
    explicit ProgramBinary(rx::Renderer *renderer);
    ~ProgramBinary();

    rx::ShaderExecutable *getPixelExecutable();
    rx::ShaderExecutable *getVertexExecutable();

    GLuint getAttributeLocation(const char *name);
    int getSemanticIndex(int attributeIndex);

    GLint getSamplerMapping(SamplerType type, unsigned int samplerIndex);
    TextureType getSamplerTextureType(SamplerType type, unsigned int samplerIndex);
    GLint getUsedSamplerRange(SamplerType type);
    bool usesPointSize() const;

    GLint getUniformLocation(std::string name);
    bool setUniform1fv(GLint location, GLsizei count, const GLfloat *v);
    bool setUniform2fv(GLint location, GLsizei count, const GLfloat *v);
    bool setUniform3fv(GLint location, GLsizei count, const GLfloat *v);
    bool setUniform4fv(GLint location, GLsizei count, const GLfloat *v);
    bool setUniformMatrix2fv(GLint location, GLsizei count, const GLfloat *value);
    bool setUniformMatrix3fv(GLint location, GLsizei count, const GLfloat *value);
    bool setUniformMatrix4fv(GLint location, GLsizei count, const GLfloat *value);
    bool setUniform1iv(GLint location, GLsizei count, const GLint *v);
    bool setUniform2iv(GLint location, GLsizei count, const GLint *v);
    bool setUniform3iv(GLint location, GLsizei count, const GLint *v);
    bool setUniform4iv(GLint location, GLsizei count, const GLint *v);

    bool getUniformfv(GLint location, GLsizei *bufSize, GLfloat *params);
    bool getUniformiv(GLint location, GLsizei *bufSize, GLint *params);

    GLint getDxDepthRangeLocation() const;
    GLint getDxDepthFrontLocation() const;
    GLint getDxCoordLocation() const;
    GLint getDxHalfPixelSizeLocation() const;

    void dirtyAllUniforms();
    void applyUniforms();

    bool load(InfoLog &infoLog, const void *binary, GLsizei length);
    bool save(void* binary, GLsizei bufSize, GLsizei *length);
    GLint getLength();

    bool link(InfoLog &infoLog, const AttributeBindings &attributeBindings, FragmentShader *fragmentShader, VertexShader *vertexShader);
    void getAttachedShaders(GLsizei maxCount, GLsizei *count, GLuint *shaders);

    void getActiveAttribute(GLuint index, GLsizei bufsize, GLsizei *length, GLint *size, GLenum *type, GLchar *name);
    GLint getActiveAttributeCount();
    GLint getActiveAttributeMaxLength();

    void getActiveUniform(GLuint index, GLsizei bufsize, GLsizei *length, GLint *size, GLenum *type, GLchar *name);
    GLint getActiveUniformCount();
    GLint getActiveUniformMaxLength();

    void validate(InfoLog &infoLog);
    bool validateSamplers(InfoLog *infoLog);
    bool isValidated() const;

    unsigned int getSerial() const;

    static std::string decorateAttribute(const std::string &name);    // Prepend an underscore
    static std::string undecorateUniform(const std::string &_name);   // Remove leading underscore

  private:
    DISALLOW_COPY_AND_ASSIGN(ProgramBinary);

    int packVaryings(InfoLog &infoLog, const Varying *packing[][4], FragmentShader *fragmentShader);
    bool linkVaryings(InfoLog &infoLog, std::string& pixelHLSL, std::string& vertexHLSL, FragmentShader *fragmentShader, VertexShader *vertexShader);

    bool linkAttributes(InfoLog &infoLog, const AttributeBindings &attributeBindings, FragmentShader *fragmentShader, VertexShader *vertexShader);

    bool linkUniforms(InfoLog &infoLog, rx::D3DConstantTable *vsConstantTable, rx::D3DConstantTable *psConstantTable);
    bool defineUniform(InfoLog &infoLog, GLenum shader, const rx::D3DConstant *constant, const std::string &name,
                       rx::D3DConstantTable *vsConstantTable, rx::D3DConstantTable *psConstantTable);
    bool defineUniform(GLenum shader, const rx::D3DConstant *constant, const std::string &name);
    Uniform *createUniform(const rx::D3DConstant *constant, const std::string &name);
    bool applyUniformnfv(IDirect3DDevice9 *device, Uniform *targetUniform, const GLfloat *v);   // D3D9_REPLACE
    bool applyUniform1iv(IDirect3DDevice9 *device, Uniform *targetUniform, GLsizei count, const GLint *v);
    bool applyUniform2iv(IDirect3DDevice9 *device, Uniform *targetUniform, GLsizei count, const GLint *v);
    bool applyUniform3iv(IDirect3DDevice9 *device, Uniform *targetUniform, GLsizei count, const GLint *v);
    bool applyUniform4iv(IDirect3DDevice9 *device, Uniform *targetUniform, GLsizei count, const GLint *v);
    void applyUniformniv(IDirect3DDevice9 *device, Uniform *targetUniform, GLsizei count, const Vector4 *vector);
    void applyUniformnbv(IDirect3DDevice9 *device, Uniform *targetUniform, GLsizei count, int width, const GLboolean *v);

    rx::Renderer *const mRenderer;

    rx::ShaderExecutable *mPixelExecutable;
    rx::ShaderExecutable *mVertexExecutable;

    Attribute mLinkedAttribute[MAX_VERTEX_ATTRIBS];
    int mSemanticIndex[MAX_VERTEX_ATTRIBS];

    struct Sampler
    {
        Sampler();

        bool active;
        GLint logicalTextureUnit;
        TextureType textureType;
    };

    Sampler mSamplersPS[MAX_TEXTURE_IMAGE_UNITS];
    Sampler mSamplersVS[MAX_VERTEX_TEXTURE_IMAGE_UNITS_VTF];
    GLuint mUsedVertexSamplerRange;
    GLuint mUsedPixelSamplerRange;
    bool mUsesPointSize;

    typedef std::vector<Uniform*> UniformArray;
    UniformArray mUniforms;
    typedef std::vector<UniformLocation> UniformIndex;
    UniformIndex mUniformIndex;

    GLint mDxDepthRangeLocation;
    GLint mDxDepthFrontLocation;
    GLint mDxCoordLocation;
    GLint mDxHalfPixelSizeLocation;

    bool mValidated;

    const unsigned int mSerial;

    static unsigned int issueSerial();
    static unsigned int mCurrentSerial;
};
}

#endif   // LIBGLESV2_PROGRAM_BINARY_H_
