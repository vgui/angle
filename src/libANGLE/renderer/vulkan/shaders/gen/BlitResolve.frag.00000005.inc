// GENERATED FILE - DO NOT EDIT.
// Generated by /home/bmonkey/code/angle/angle/src/libANGLE/renderer/vulkan/gen_vk_internal_shaders.py.
//
// Copyright 2018 The ANGLE Project Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
//
// shaders/gen/BlitResolve.frag.00000005.inc:
//   Pre-generated shader for the ANGLE Vulkan back-end.

#pragma once
constexpr uint8_t kBlitResolve_frag_00000005[] = {
    0x1f,0x8b,0x08,0x00,0x00,0x00,0x00,0x00,0x02,0xff,0x5d,0x94,0xdb,0x4f,0x94,0x67,
    0x10,0xc6,0xdf,0xdd,0x6f,0xd9,0x45,0x8b,0x96,0x82,0x08,0xb5,0xe2,0x89,0xaa,0x05,
    0x5b,0xb2,0x6d,0xd9,0xc6,0x86,0xa2,0xa8,0x89,0x78,0x58,0x6d,0x11,0x0f,0xf5,0x5c,
    0x2b,0x68,0x9a,0x16,0xf6,0x02,0x2b,0x5c,0xa8,0x90,0xd4,0x03,0x5c,0x78,0x80,0x0b,
    0x0f,0x70,0x61,0x55,0x2e,0x4c,0xac,0xed,0x9f,0xe1,0x5f,0xd4,0xf4,0x90,0x34,0xe9,
    0xcc,0xfb,0xfd,0xc6,0x4c,0xbe,0x4d,0x26,0xdf,0xce,0xf3,0xcc,0xcc,0x33,0xf3,0x9e,
    0x92,0x7c,0x47,0x29,0x84,0x5c,0x58,0x1e,0xea,0xc3,0x1f,0x21,0xfd,0xbd,0x17,0xf2,
    0x82,0x84,0xf0,0x4e,0x28,0xc6,0xef,0x40,0x75,0xa8,0xda,0x3d,0x7e,0x65,0xb8,0xbb,
    0xa7,0x52,0x56,0x7e,0x65,0x48,0x62,0x9c,0x72,0xef,0x8a,0x57,0x90,0xaf,0xda,0xe8,
    0x85,0x1f,0xc6,0x14,0x6f,0x10,0xbb,0x2c,0x56,0x13,0x9b,0x14,0x9b,0x16,0x9b,0x15,
    0x9b,0x17,0x5b,0x14,0x5b,0x12,0x6b,0x94,0x1a,0x9a,0x53,0xd2,0xfa,0xf2,0xaf,0x21,
    0xea,0x69,0xbd,0x10,0xf6,0x85,0xba,0xb0,0x8a,0x5e,0x3a,0xf8,0x1a,0x96,0x03,0xab,
    0x77,0x58,0x1e,0xac,0xd1,0x61,0x09,0x58,0x9b,0xc3,0x0a,0x60,0x6b,0x1d,0x56,0x07,
    0xb6,0xc1,0x61,0x45,0xb0,0x0f,0x1d,0x56,0x02,0xfb,0xc8,0x61,0xf5,0x60,0x1f,0x3b,
    0x6c,0x19,0x58,0x39,0xce,0x95,0xbc,0xed,0x4f,0x67,0xdc,0x27,0xdf,0x4d,0xcc,0x63,
    0xfe,0x46,0xe7,0x57,0x33,0x7c,0x15,0xde,0xf2,0x75,0x4d,0xd7,0x39,0xbe,0x86,0x9f,
    0xc3,0x9f,0xc4,0xb7,0xf8,0x69,0xfc,0x04,0x7f,0x16,0xbf,0x80,0x3f,0x8f,0x5f,0x87,
    0xbf,0x88,0x5f,0xc4,0x5f,0xc2,0xd7,0xd9,0x9b,0xa5,0x6a,0x3e,0xf6,0x93,0xc4,0x7a,
    0xfa,0x7f,0xb5,0xfc,0x2b,0xb2,0x76,0xad,0x12,0x5f,0x22,0x37,0x8f,0xbf,0x1c,0xbf,
    0x10,0x63,0x0a,0x71,0x7f,0xb5,0x57,0xc5,0x7b,0xf1,0x1b,0xc0,0x5a,0xc4,0x6f,0xa2,
    0x96,0xf9,0xcd,0xf8,0x21,0xf6,0xd1,0xf0,0x76,0x1f,0xcc,0x9a,0xb0,0x22,0xdf,0x66,
    0x67,0xaa,0xd7,0xc2,0x7e,0xac,0x42,0xaf,0x25,0xf6,0x9c,0x62,0xdb,0xd0,0x6b,0x45,
    0x4f,0xe3,0xdb,0xe0,0x4a,0x8e,0x6f,0x47,0xdf,0xfc,0x4d,0xf0,0x1a,0xdf,0x41,0x7c,
    0x73,0xd4,0xc8,0x87,0x2d,0xc4,0xa9,0xbf,0x35,0x93,0x57,0xe6,0xbc,0x98,0xdf,0x4b,
    0xae,0xae,0xd3,0x1e,0xfa,0xd7,0x75,0x7a,0x5f,0xd0,0xbd,0xf8,0x39,0x6a,0x64,0xbf,
    0xaa,0x3d,0xc0,0xff,0xbd,0xcc,0x36,0x10,0xcf,0x60,0xfa,0x5b,0x23,0xbd,0x1c,0x20,
    0xee,0x20,0xd8,0x01,0xe2,0xd4,0xaf,0x82,0x7d,0x20,0xfb,0x77,0x98,0x1a,0xd6,0xd7,
    0x20,0xfb,0x67,0xfe,0x31,0xce,0x8f,0xd6,0x3a,0x4e,0xcf,0x4d,0xf4,0x7d,0x8a,0xb5,
    0x4f,0x5c,0xfc,0x79,0x30,0x8d,0xbf,0x04,0xb7,0x07,0xed,0x4b,0xbc,0x0b,0x89,0xf3,
    0x6b,0x99,0xfc,0x71,0xd6,0xc1,0xf8,0xc9,0x4c,0xfc,0x74,0x26,0xfe,0x26,0xf7,0xde,
    0xf8,0xd9,0x0c,0x7f,0x97,0x33,0x64,0xfc,0x7c,0x86,0x7f,0x28,0xd6,0xef,0xf8,0xc5,
    0x0c,0xff,0x14,0x4d,0xe3,0x97,0xe0,0xbf,0x90,0x5b,0x93,0xa7,0xd7,0x00,0xf6,0xb7,
    0x20,0x7a,0x97,0xfa,0x38,0xfb,0x2b,0x38,0xdf,0x83,0x82,0x16,0x79,0xdb,0x56,0x10,
    0x6f,0x58,0x23,0x98,0xee,0xed,0x37,0x82,0x95,0xe2,0xfb,0x9b,0xc6,0x2a,0xb7,0x4b,
    0xb0,0xb6,0x78,0x2e,0xd2,0xb3,0xdb,0x4a,0xfd,0x52,0xdc,0xe7,0x14,0xbf,0x45,0xde,
    0x5a,0x72,0xd7,0xb8,0xbc,0x75,0xe4,0xb5,0xbb,0xbc,0xf5,0xe0,0xbf,0x90,0xb7,0x91,
    0xdc,0xf5,0xe4,0xd9,0xdb,0xb7,0x9a,0xf3,0xde,0xc7,0x99,0xde,0x0c,0xfe,0x4a,0x62,
    0xb6,0xf0,0x16,0x6e,0xe6,0xac,0xff,0x25,0x2b,0xd0,0xc5,0x6c,0xff,0x4a,0xbc,0x72,
    0x9d,0x62,0x5d,0xac,0x4b,0xa7,0x9b,0xf9,0x13,0xf7,0xee,0x4d,0x49,0xac,0x62,0xdd,
    0xe0,0x47,0xc4,0xd3,0x9e,0x5e,0x82,0x59,0xdc,0x3f,0x52,0xc3,0x6a,0xe9,0xf7,0x4f,
    0x89,0xd2,0xb8,0xdf,0x88,0xa9,0x23,0xa7,0xd3,0xcd,0xf0,0x29,0x33,0x94,0xdd,0x0c,
    0x9f,0x81,0xdb,0x0c,0x9f,0x83,0xd9,0x0c,0x15,0x37,0x83,0x72,0x3d,0x62,0x15,0x74,
    0x7b,0xdc,0x0c,0xdb,0xd1,0xce,0xb9,0x19,0xbe,0x04,0xb7,0x19,0x5e,0x81,0x59,0x9c,
    0xce,0x60,0xb5,0x2a,0x6e,0x86,0xd7,0xc4,0x74,0x91,0xd3,0xe3,0x66,0xf8,0x8a,0x19,
    0x7a,0xdd,0x0c,0x7d,0xe0,0x36,0xc3,0x0e,0x30,0x9b,0xa1,0xdf,0xcd,0xa0,0xdc,0x4e,
    0xce,0xb8,0xea,0xea,0xff,0xaf,0xd1,0xdd,0x8d,0xf6,0x6b,0xf7,0xb6,0x68,0x8f,0x16,
    0xdb,0xef,0x7a,0xfc,0x9d,0xb8,0x0a,0x79,0x3b,0xe9,0x47,0xdf,0x8e,0xfd,0xbc,0x3d,
    0xea,0xeb,0x3b,0x73,0x88,0x37,0xe6,0xb8,0xf4,0x77,0x38,0xea,0xa5,0x31,0x87,0xdc,
    0xb9,0x3c,0xc2,0x5c,0x83,0xee,0x5c,0x0e,0x81,0xdb,0x79,0x3e,0x8a,0xee,0x10,0x79,
    0xfa,0xfe,0x9c,0x20,0xef,0x18,0x79,0x7a,0x47,0xbf,0x05,0xaf,0xb1,0x0f,0x27,0xc1,
    0x6c,0xaf,0x4e,0x53,0xcb,0xdf,0xbb,0x33,0x60,0xe9,0xbd,0x2b,0xc6,0xb7,0xec,0x2c,
    0xb1,0x67,0xa8,0x71,0x42,0x62,0xf5,0xed,0x3a,0xc7,0x0c,0x67,0x5d,0x1f,0xdf,0xd1,
    0xc7,0x79,0xd7,0xc7,0x05,0xf0,0x37,0x12,0xa3,0xfe,0xf7,0x60,0xad,0x6e,0xaf,0x2e,
    0x82,0xb7,0xb3,0x57,0x23,0x6e,0xaf,0x94,0x1b,0x16,0x1b,0x61,0xfd,0x87,0xe3,0xde,
    0x26,0xf1,0xcd,0x3c,0xc7,0xde,0x18,0x37,0xe2,0x74,0x7e,0x44,0x67,0xd0,0xe9,0xfc,
    0x04,0x6e,0x3a,0x63,0x4e,0x47,0xb9,0x51,0xb1,0x31,0x6a,0x8d,0xa2,0x53,0x73,0x3a,
    0xc6,0x8d,0x39,0x9d,0x2b,0xe8,0x8c,0x3b,0x9d,0x9f,0xc1,0x4d,0x67,0xc2,0xe9,0x28,
    0x77,0x55,0x6c,0x82,0x5a,0x57,0xd1,0x99,0x74,0x3a,0xc6,0x4d,0x38,0x9d,0x6b,0xe8,
    0x94,0x9d,0xce,0x75,0x70,0xd3,0x99,0x72,0x3a,0xca,0xdd,0x88,0xf7,0x30,0xad,0x75,
    0x03,0x9d,0x69,0xa7,0x63,0xdc,0x94,0xd3,0xb9,0x85,0xce,0x4d,0xa7,0x73,0x1b,0xdc,
    0x74,0x66,0x9c,0x8e,0x72,0x77,0xc4,0x66,0xa8,0x75,0x07,0x9d,0x59,0xa7,0x63,0xdc,
    0x8c,0xd3,0xb9,0x87,0xce,0x5d,0xa7,0x73,0x1f,0xdc,0x74,0xe6,0x9c,0x8e,0x72,0x0f,
    0xc4,0xe6,0xa8,0xf5,0x00,0x9d,0x79,0xa7,0x63,0xdc,0x9c,0xd3,0x79,0x84,0xce,0x43,
    0xa7,0xf3,0x18,0xdc,0x74,0x16,0x9c,0x8e,0x72,0x4f,0xc4,0x16,0xa8,0xf5,0x04,0x9d,
    0x45,0xa7,0x63,0xdc,0x82,0xd3,0xf9,0x15,0x9d,0xa7,0x4e,0xe7,0x19,0xb8,0xe9,0xbc,
    0x70,0x3a,0xca,0x3d,0x17,0x7b,0x41,0xad,0xe7,0xe8,0x2c,0x39,0x1d,0xe3,0xf4,0xfb,
    0x9f,0xdc,0xca,0xed,0x62,0xff,0x03,0x55,0xa5,0x70,0x23,0x9c,0x0c,0x00,0x00
};

// Generated from:
//
// #version 450 core
//
// layout(push_constant)uniform PushConstants {
//
//             vec2 offset;
//     vec2 stretch;
//     vec2 invSrcExtent;
//     int srcLayer;
//     int samples;
//     float invSamples;
//
//     int outputMask;
//
//     bool flipX;
//     bool flipY;
//     bool rotateXY;
// } params;
//
// layout(set = 0, binding = 0)uniform itexture2DArray color;
//
// layout(location = 0)out ivec4 colorOut0;
// layout(location = 1)out ivec4 colorOut1;
// layout(location = 2)out ivec4 colorOut2;
// layout(location = 3)out ivec4 colorOut3;
// layout(location = 4)out ivec4 colorOut4;
// layout(location = 5)out ivec4 colorOut5;
// layout(location = 6)out ivec4 colorOut6;
// layout(location = 7)out ivec4 colorOut7;
//
// layout(set = 0, binding = 2)uniform sampler blitSampler;
//
// void main()
// {
//
//             vec2 srcImageCoords = vec2(gl_FragCoord . xy);
//
//     srcImageCoords *= params . stretch;
//
//     srcImageCoords -= params . offset;
//
//     if(params . flipX)
//         srcImageCoords . x = - srcImageCoords . x;
//     if(params . flipY)
//         srcImageCoords . y = - srcImageCoords . y;
//     if(params . rotateXY)
//         srcImageCoords . xy = srcImageCoords . yx;
//
//             ivec4 colorValue = texture(isampler2DArray(color, blitSampler), vec3(srcImageCoords * params . invSrcExtent, params . srcLayer));
//
//     if((params . outputMask &(1 << 0))!= 0)
//     {
//         colorOut0 = colorValue;
//     }
//     if((params . outputMask &(1 << 1))!= 0)
//     {
//         colorOut1 = colorValue;
//     }
//     if((params . outputMask &(1 << 2))!= 0)
//     {
//         colorOut2 = colorValue;
//     }
//     if((params . outputMask &(1 << 3))!= 0)
//     {
//         colorOut3 = colorValue;
//     }
//     if((params . outputMask &(1 << 4))!= 0)
//     {
//         colorOut4 = colorValue;
//     }
//     if((params . outputMask &(1 << 5))!= 0)
//     {
//         colorOut5 = colorValue;
//     }
//     if((params . outputMask &(1 << 6))!= 0)
//     {
//         colorOut6 = colorValue;
//     }
//     if((params . outputMask &(1 << 7))!= 0)
//     {
//         colorOut7 = colorValue;
//     }
//
// }
