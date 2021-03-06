#pragma once

const uint8_t g_filter_lpf_table_reso_high[] = {
  0x1f, 0x00, 0x81, 0x1f, 0x00, 0x81, 0x1f, 0x00, 0x81, 0x1f, 0x00, 0x81,
  0x1f, 0x00, 0x81, 0x21, 0x00, 0x81, 0x23, 0x00, 0x81, 0x25, 0x00, 0x81,
  0x28, 0x00, 0x81, 0x2a, 0x00, 0x81, 0x2c, 0x00, 0x81, 0x2f, 0x00, 0x81,
  0x32, 0x00, 0x81, 0x35, 0x00, 0x81, 0x38, 0x00, 0x81, 0x3b, 0x00, 0x81,
  0x3f, 0x00, 0x81, 0x43, 0x00, 0x82, 0x47, 0x00, 0x82, 0x4b, 0x00, 0x82,
  0x4f, 0x00, 0x82, 0x54, 0x00, 0x82, 0x59, 0x00, 0x82, 0x5e, 0x00, 0x82,
  0x64, 0x00, 0x82, 0x6a, 0x00, 0x82, 0x70, 0x00, 0x83, 0x77, 0x00, 0x83,
  0x7e, 0x00, 0x83, 0x85, 0x00, 0x83, 0x8d, 0x00, 0x83, 0x95, 0x00, 0x83,
  0x9e, 0x00, 0x84, 0xa8, 0x00, 0x84, 0xb1, 0x00, 0x84, 0xbc, 0x00, 0x84,
  0xc7, 0x00, 0x84, 0xd3, 0x00, 0x85, 0xdf, 0x00, 0x85, 0xec, 0x00, 0x85,
  0xfa, 0x00, 0x85, 0x09, 0x01, 0x86, 0x18, 0x01, 0x86, 0x29, 0x01, 0x86,
  0x3a, 0x01, 0x87, 0x4d, 0x01, 0x87, 0x60, 0x01, 0x87, 0x75, 0x01, 0x88,
  0x8b, 0x01, 0x88, 0xa2, 0x01, 0x89, 0xba, 0x01, 0x89, 0xd4, 0x01, 0x89,
  0xef, 0x01, 0x8a, 0x0c, 0x02, 0x8a, 0x2a, 0x02, 0x8b, 0x4b, 0x02, 0x8c,
  0x6d, 0x02, 0x8c, 0x91, 0x02, 0x8d, 0xb7, 0x02, 0x8e, 0xdf, 0x02, 0x8e,
  0x09, 0x03, 0x8f, 0x36, 0x03, 0x90, 0x66, 0x03, 0x91, 0x98, 0x03, 0x92,
  0xcd, 0x03, 0x92, 0x04, 0x04, 0x93, 0x3f, 0x04, 0x94, 0x7d, 0x04, 0x95,
  0xbf, 0x04, 0x97, 0x04, 0x05, 0x98, 0x4d, 0x05, 0x99, 0x9a, 0x05, 0x9a,
  0xeb, 0x05, 0x9c, 0x41, 0x06, 0x9d, 0x9b, 0x06, 0x9f, 0xfa, 0x06, 0xa0,
  0x5e, 0x07, 0xa2, 0xc7, 0x07, 0xa4, 0x36, 0x08, 0xa6, 0xab, 0x08, 0xa8,
  0x25, 0x09, 0xaa, 0xa6, 0x09, 0xac, 0x2e, 0x0a, 0xae, 0xbc, 0x0a, 0xb0,
  0x52, 0x0b, 0xb3, 0xef, 0x0b, 0xb5, 0x94, 0x0c, 0xb8, 0x41, 0x0d, 0xbb,
  0xf7, 0x0d, 0xbe, 0xb5, 0x0e, 0xc1, 0x7c, 0x0f, 0xc4, 0x4c, 0x10, 0xc7,
  0x26, 0x11, 0xcb, 0x0a, 0x12, 0xcf, 0xf8, 0x12, 0xd2, 0xf0, 0x13, 0xd6,
  0xf3, 0x14, 0xda, 0x01, 0x16, 0xdf, 0x19, 0x17, 0xe3, 0x3d, 0x18, 0xe8,
  0x6c, 0x19, 0xed, 0xa7, 0x1a, 0xf2, 0xec, 0x1b, 0xf7, 0x3d, 0x1d, 0xfc,
  0x99, 0x1e, 0x01, 0x00, 0x20, 0x07, 0x72, 0x21, 0x0d, 0xee, 0x22, 0x13,
  0x74, 0x24, 0x19, 0x02, 0x26, 0x1f, 0x99, 0x27, 0x25, 0x37, 0x29, 0x2b,
  0xdc, 0x2a, 0x32, 0x84, 0x2c, 0x38, 0x30, 0x2e, 0x3f, 0xdd, 0x2f, 0x45,
  0x88, 0x31, 0x4c, 0x30, 0x33, 0x52, 0xd2, 0x34, 0x58, 0x6a, 0x36, 0x5e,
  0xf4, 0x37, 0x64, 0x6d, 0x39, 0x69, 0xd0, 0x3a, 0x6e, 0x18, 0x3c, 0x73,
  0x40, 0x3d, 0x77, 0x40, 0x3d, 0x77, 0x40, 0x3d, 0x77, 0x40, 0x3d, 0x77,
};

const uint8_t g_filter_lpf_table_reso_mid[] = {
  0x1f, 0x00, 0x82, 0x1f, 0x00, 0x82, 0x1f, 0x00, 0x82, 0x1f, 0x00, 0x82,
  0x1f, 0x00, 0x82, 0x21, 0x00, 0x82, 0x23, 0x00, 0x82, 0x25, 0x00, 0x82,
  0x27, 0x00, 0x82, 0x29, 0x00, 0x82, 0x2c, 0x00, 0x83, 0x2e, 0x00, 0x83,
  0x31, 0x00, 0x83, 0x34, 0x00, 0x83, 0x37, 0x00, 0x83, 0x3b, 0x00, 0x83,
  0x3e, 0x00, 0x83, 0x42, 0x00, 0x83, 0x46, 0x00, 0x84, 0x4a, 0x00, 0x84,
  0x4e, 0x00, 0x84, 0x53, 0x00, 0x84, 0x57, 0x00, 0x84, 0x5d, 0x00, 0x84,
  0x62, 0x00, 0x84, 0x68, 0x00, 0x85, 0x6e, 0x00, 0x85, 0x74, 0x00, 0x85,
  0x7b, 0x00, 0x85, 0x82, 0x00, 0x86, 0x8a, 0x00, 0x86, 0x92, 0x00, 0x86,
  0x9b, 0x00, 0x86, 0xa4, 0x00, 0x86, 0xad, 0x00, 0x87, 0xb7, 0x00, 0x87,
  0xc2, 0x00, 0x87, 0xcd, 0x00, 0x88, 0xd9, 0x00, 0x88, 0xe6, 0x00, 0x88,
  0xf3, 0x00, 0x89, 0x01, 0x01, 0x89, 0x10, 0x01, 0x89, 0x20, 0x01, 0x8a,
  0x31, 0x01, 0x8a, 0x42, 0x01, 0x8b, 0x55, 0x01, 0x8b, 0x69, 0x01, 0x8c,
  0x7d, 0x01, 0x8c, 0x93, 0x01, 0x8d, 0xaa, 0x01, 0x8d, 0xc3, 0x01, 0x8e,
  0xdd, 0x01, 0x8e, 0xf8, 0x01, 0x8f, 0x15, 0x02, 0x90, 0x33, 0x02, 0x90,
  0x53, 0x02, 0x91, 0x75, 0x02, 0x92, 0x99, 0x02, 0x93, 0xbe, 0x02, 0x93,
  0xe6, 0x02, 0x94, 0x10, 0x03, 0x95, 0x3c, 0x03, 0x96, 0x6a, 0x03, 0x97,
  0x9b, 0x03, 0x98, 0xcf, 0x03, 0x99, 0x06, 0x04, 0x9a, 0x3f, 0x04, 0x9b,
  0x7b, 0x04, 0x9c, 0xbb, 0x04, 0x9e, 0xfe, 0x04, 0x9f, 0x44, 0x05, 0xa0,
  0x8f, 0x05, 0xa2, 0xdd, 0x05, 0xa3, 0x2f, 0x06, 0xa5, 0x85, 0x06, 0xa6,
  0xe0, 0x06, 0xa8, 0x40, 0x07, 0xaa, 0xa4, 0x07, 0xac, 0x0d, 0x08, 0xae,
  0x7c, 0x08, 0xb0, 0xf0, 0x08, 0xb2, 0x6a, 0x09, 0xb4, 0xea, 0x09, 0xb6,
  0x70, 0x0a, 0xb9, 0xfc, 0x0a, 0xbb, 0x90, 0x0b, 0xbe, 0x2a, 0x0c, 0xc0,
  0xcc, 0x0c, 0xc3, 0x75, 0x0d, 0xc6, 0x26, 0x0e, 0xc9, 0xdf, 0x0e, 0xcc,
  0xa0, 0x0f, 0xd0, 0x6b, 0x10, 0xd3, 0x3e, 0x11, 0xd7, 0x1a, 0x12, 0xda,
  0x00, 0x13, 0xde, 0xef, 0x13, 0xe2, 0xe9, 0x14, 0xe6, 0xec, 0x15, 0xea,
  0xfb, 0x16, 0xee, 0x14, 0x18, 0xf3, 0x38, 0x19, 0xf8, 0x67, 0x1a, 0xfc,
  0xa1, 0x1b, 0x01, 0xe6, 0x1c, 0x06, 0x37, 0x1e, 0x0b, 0x93, 0x1f, 0x11,
  0xfb, 0x20, 0x16, 0x6d, 0x22, 0x1c, 0xeb, 0x23, 0x22, 0x73, 0x25, 0x27,
  0x05, 0x27, 0x2d, 0xa1, 0x28, 0x33, 0x46, 0x2a, 0x39, 0xf2, 0x2b, 0x3f,
  0xa5, 0x2d, 0x46, 0x5e, 0x2f, 0x4c, 0x19, 0x31, 0x52, 0xd7, 0x32, 0x58,
  0x93, 0x34, 0x5e, 0x4b, 0x36, 0x63, 0xfb, 0x37, 0x69, 0x9f, 0x39, 0x6e,
  0x33, 0x3b, 0x73, 0x33, 0x3b, 0x73, 0x33, 0x3b, 0x73, 0x33, 0x3b, 0x73,
};

const uint8_t g_filter_lpf_table_reso_low[] = {
  0x1e, 0x00, 0x84, 0x1e, 0x00, 0x84, 0x1e, 0x00, 0x84, 0x1e, 0x00, 0x84,
  0x1e, 0x00, 0x84, 0x20, 0x00, 0x84, 0x22, 0x00, 0x84, 0x24, 0x00, 0x84,
  0x26, 0x00, 0x84, 0x29, 0x00, 0x85, 0x2b, 0x00, 0x85, 0x2e, 0x00, 0x85,
  0x30, 0x00, 0x85, 0x33, 0x00, 0x85, 0x36, 0x00, 0x85, 0x39, 0x00, 0x86,
  0x3d, 0x00, 0x86, 0x40, 0x00, 0x86, 0x44, 0x00, 0x86, 0x48, 0x00, 0x86,
  0x4c, 0x00, 0x87, 0x51, 0x00, 0x87, 0x55, 0x00, 0x87, 0x5a, 0x00, 0x87,
  0x5f, 0x00, 0x88, 0x65, 0x00, 0x88, 0x6b, 0x00, 0x88, 0x71, 0x00, 0x89,
  0x78, 0x00, 0x89, 0x7f, 0x00, 0x89, 0x86, 0x00, 0x8a, 0x8e, 0x00, 0x8a,
  0x96, 0x00, 0x8a, 0x9e, 0x00, 0x8b, 0xa7, 0x00, 0x8b, 0xb1, 0x00, 0x8b,
  0xbb, 0x00, 0x8c, 0xc6, 0x00, 0x8c, 0xd1, 0x00, 0x8d, 0xdd, 0x00, 0x8d,
  0xea, 0x00, 0x8d, 0xf7, 0x00, 0x8e, 0x05, 0x01, 0x8e, 0x14, 0x01, 0x8f,
  0x23, 0x01, 0x8f, 0x34, 0x01, 0x90, 0x45, 0x01, 0x91, 0x57, 0x01, 0x91,
  0x6a, 0x01, 0x92, 0x7f, 0x01, 0x92, 0x94, 0x01, 0x93, 0xab, 0x01, 0x94,
  0xc3, 0x01, 0x95, 0xdc, 0x01, 0x95, 0xf6, 0x01, 0x96, 0x12, 0x02, 0x97,
  0x2f, 0x02, 0x98, 0x4e, 0x02, 0x98, 0x6f, 0x02, 0x99, 0x91, 0x02, 0x9a,
  0xb5, 0x02, 0x9b, 0xdb, 0x02, 0x9c, 0x02, 0x03, 0x9d, 0x2c, 0x03, 0x9e,
  0x58, 0x03, 0x9f, 0x87, 0x03, 0xa1, 0xb7, 0x03, 0xa2, 0xeb, 0x03, 0xa3,
  0x20, 0x04, 0xa4, 0x59, 0x04, 0xa6, 0x94, 0x04, 0xa7, 0xd3, 0x04, 0xa8,
  0x14, 0x05, 0xaa, 0x59, 0x05, 0xab, 0xa1, 0x05, 0xad, 0xec, 0x05, 0xaf,
  0x3c, 0x06, 0xb0, 0x8f, 0x06, 0xb2, 0xe6, 0x06, 0xb4, 0x41, 0x07, 0xb6,
  0xa1, 0x07, 0xb8, 0x06, 0x08, 0xba, 0x6f, 0x08, 0xbc, 0xdd, 0x08, 0xbe,
  0x50, 0x09, 0xc0, 0xc8, 0x09, 0xc3, 0x46, 0x0a, 0xc5, 0xca, 0x0a, 0xc8,
  0x54, 0x0b, 0xca, 0xe4, 0x0b, 0xcd, 0x7b, 0x0c, 0xd0, 0x19, 0x0d, 0xd2,
  0xbd, 0x0d, 0xd5, 0x69, 0x0e, 0xd8, 0x1c, 0x0f, 0xdc, 0xd8, 0x0f, 0xdf,
  0x9b, 0x10, 0xe2, 0x67, 0x11, 0xe6, 0x3c, 0x12, 0xe9, 0x1a, 0x13, 0xed,
  0x01, 0x14, 0xf1, 0xf3, 0x14, 0xf5, 0xee, 0x15, 0xf9, 0xf4, 0x16, 0xfd,
  0x05, 0x18, 0x01, 0x21, 0x19, 0x05, 0x49, 0x1a, 0x0a, 0x7d, 0x1b, 0x0f,
  0xbe, 0x1c, 0x13, 0x0b, 0x1e, 0x18, 0x66, 0x1f, 0x1d, 0xcf, 0x20, 0x22,
  0x46, 0x22, 0x28, 0xcb, 0x23, 0x2d, 0x5f, 0x25, 0x33, 0x02, 0x27, 0x38,
  0xb4, 0x28, 0x3e, 0x75, 0x2a, 0x44, 0x46, 0x2c, 0x4a, 0x26, 0x2e, 0x50,
  0x14, 0x30, 0x56, 0x10, 0x32, 0x5c, 0x19, 0x34, 0x62, 0x2c, 0x36, 0x68,
  0x48, 0x38, 0x6d, 0x48, 0x38, 0x6d, 0x48, 0x38, 0x6d, 0x48, 0x38, 0x6d,
};

