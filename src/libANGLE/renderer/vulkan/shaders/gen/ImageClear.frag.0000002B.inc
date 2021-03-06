// GENERATED FILE - DO NOT EDIT.
// Generated by /home/bmonkey/code/angle/angle/src/libANGLE/renderer/vulkan/gen_vk_internal_shaders.py.
//
// Copyright 2018 The ANGLE Project Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
//
// shaders/gen/ImageClear.frag.0000002B.inc:
//   Pre-generated shader for the ANGLE Vulkan back-end.

#pragma once
constexpr uint8_t kImageClear_frag_0000002B[] = {
    0x1f,0x8b,0x08,0x00,0x00,0x00,0x00,0x00,0x02,0xff,0x4d,0x51,0x3d,0x8b,0xc2,0x50,
    0x10,0x5c,0xf3,0x34,0x31,0x89,0x1f,0x39,0xf3,0xa1,0x36,0xa2,0x58,0x0a,0x62,0xa1,
    0xc7,0xc1,0xa1,0x60,0xa5,0x85,0xdd,0xfd,0x82,0x03,0x1b,0x0b,0x6d,0xbc,0x1f,0x7f,
    0x8d,0xe0,0xcc,0xcb,0x08,0x06,0x76,0xf7,0xed,0xbc,0x99,0xdd,0x7d,0x1b,0x17,0xcc,
    0x23,0xb3,0x86,0x25,0xd6,0xb6,0xb1,0xd5,0xdf,0x87,0x05,0x40,0xcc,0x52,0x0b,0x7d,
    0x3c,0x9c,0x7e,0x4e,0xcb,0xfb,0xdf,0x79,0xb9,0xde,0xac,0x78,0xdf,0x33,0xe7,0x79,
    0xbc,0xeb,0x5b,0x64,0x4d,0x44,0xda,0xf5,0xf7,0x72,0x23,0x1e,0xc3,0x0a,0x58,0x06,
    0x1e,0xf1,0xe8,0xed,0xdc,0x61,0x3d,0x9c,0xc8,0x99,0xc0,0x5a,0xb0,0x23,0x7c,0xaa,
    0xde,0x73,0xc5,0x17,0xd6,0x10,0x96,0x79,0x9d,0xf3,0x58,0xa0,0x1a,0x85,0x9f,0xd1,
    0xac,0x82,0xe5,0x40,0x89,0xcf,0xc0,0x71,0xe2,0x94,0xe0,0x84,0x88,0x53,0xd5,0x1c,
    0x22,0xe7,0x2c,0xa1,0xe6,0x9d,0xc2,0xb7,0x11,0x9d,0x66,0xfc,0x56,0x1e,0x0b,0xab,
    0xe0,0x13,0xe9,0x27,0xb8,0x4b,0xc5,0x4b,0xa4,0xed,0x88,0x9b,0x4a,0xcb,0xbc,0x2b,
    0x8c,0xbd,0x7b,0xd2,0xf2,0x0d,0x0b,0xe5,0x7d,0xcd,0x42,0x7d,0x26,0x6e,0xa4,0x3c,
    0x57,0xdf,0x44,0xf5,0x72,0xed,0xd1,0xbd,0xe9,0x4b,0xd5,0x23,0xbf,0x92,0x9e,0xfc,
    0x4f,0xec,0x2b,0xd0,0xbb,0x4c,0x9a,0x7f,0x20,0xdc,0xef,0x1e,0x3e,0xf3,0xff,0xb5,
    0x9e,0x8f,0x33,0x6c,0xb5,0x8b,0x81,0xf0,0x1d,0x14,0xb1,0x72,0xf2,0x2b,0xbf,0xaf,
    0x9a,0x5f,0x8a,0xcf,0x3e,0x23,0xe1,0xe4,0x17,0xca,0x1f,0x98,0xe8,0x0b,0xf6,0x04,
    0x7c,0x4b,0xa4,0x68,0x4c,0x02,0x00,0x00
};

// Generated from:
//
// #version 450 core
//
// layout(push_constant)uniform PushConstants {
//        uvec4 clearColor;
//     float clearDepth;
// } params;
//
// layout(location = 5)out uvec4 colorOut;
//
// void main()
// {
//     colorOut = params . clearColor;
//
//     gl_FragDepth = params . clearDepth;
//
// }
