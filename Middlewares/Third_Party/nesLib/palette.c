#include "palette.h"
#include <stdio.h>

#include "common.h"


#if defined(NES_RGB_CLASIC)

const uint16_t nesRgb[] =
{
	0x6161, 0x6100, 0x0088, 0x1f0d, 0x9937, 0x1379, 0x5612, 0x605d,
	0x0010, 0x520e, 0x003a, 0x2308, 0x2135, 0x0c0d, 0x410e, 0x1744,
	0x1700, 0x3a1f, 0x002f, 0x5700, 0x0000, 0x0000, 0x0000, 0x0000,
	0xaaaa, 0xaa0d, 0x4dc4, 0x4b24, 0xde69, 0x12cf, 0x9014, 0xad9d,
	0x1c48, 0x9234, 0x0473, 0x5005, 0x5d69, 0x1316, 0x7a11, 0x1380,
	0x0812, 0x7649, 0x1c66, 0x9100, 0x0000, 0x0000, 0x0000, 0x0000,
	0xfcfc, 0xfc63, 0x9afc, 0x8a7e, 0xfcb0, 0x6afc, 0xdd6d, 0xf2e7,
	0x71ab, 0xe386, 0x58cc, 0x9e22, 0xa8b1, 0x0072, 0xc100, 0x5acd,
	0x4e34, 0xc28e, 0x4fbe, 0xce42, 0x4242, 0x0000, 0x0000, 0x0000,
	0xfcfc, 0xfcbe, 0xd4fc, 0xcaca, 0xfcd9, 0xc4fc, 0xecc1, 0xfcfa,
	0xc3e7, 0xf7ce, 0xc3e2, 0xcda7, 0xdadb, 0x9cc8, 0xe39e, 0xbfe5,
	0xb8b2, 0xebc8, 0xb7e5, 0xebac, 0xacac, 0x0000, 0x0000, 0x0000
};
#elif defined(NES_RGB_PC10)

const uint16_t nesRgb[] =
{
0x6d6d, 0x6d00, 0x2492, 0x0000, 0xdb6d, 0x49db, 0x9200, 0x6db6,
0x006d, 0xb624, 0x0092, 0x4900, 0x6d49, 0x0024, 0x4900, 0x006d,
0x2400, 0x9200, 0x0049, 0x4900, 0x0000, 0x0000, 0x0000, 0x0000,
0xb6b6, 0xb600, 0x6ddb, 0x0049, 0xff92, 0x00ff, 0xb600, 0xffff,
0x0092, 0xff00, 0x00db, 0x6d00, 0x926d, 0x0024, 0x9200, 0x0092,
0x0000, 0xb66d, 0x0092, 0x9224, 0x2424, 0x0000, 0x0000, 0x0000,
0xffff, 0xff6d, 0xb6ff, 0x9292, 0xffdb, 0x6dff, 0xff00, 0xffff,
0x6dff, 0xff92, 0x00ff, 0xb600, 0xdbdb, 0x006d, 0xdb00, 0x00ff,
0x0049, 0xffdb, 0x00ff, 0xff49, 0x4949, 0x0000, 0x0000, 0x0000,
0xffff, 0xffb6, 0xdbff, 0xdbb6, 0xffff, 0xb6ff, 0xff92, 0xffff,
0xb6b6, 0xffdb, 0x92ff, 0xff49, 0xffff, 0x6db6, 0xff49, 0x92ff,
0x6d49, 0xffdb, 0x92db, 0xff92, 0x9292, 0x0000, 0x0000, 0x0000

};
#elif defined (TEST_MARIO)

const unsigned char nesRgb[]=
{
0x42,0x4d,0x76,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x36,0x00,0x00,0x00,0x28,0x00,
0x00,0x00,0x10,0x00,0x00,0x00,0x1a,0x00,0x00,0x00,0x01,0x00,0x10,0x00,0x03,0x00,
0x00,0x00,0x40,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xad,0x83,0xa1,0x28,0x02,0x31,
0xa2,0x20,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x40,0x08,0x22,0x39,0xa0,0x28,
0x6c,0x83,0x61,0x10,0x00,0x00,0x00,0x00,0x00,0x00,0x0f,0x84,0x21,0x82,0x83,0x8a,
0x81,0x59,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x28,0x83,0x8a,0x42,0x82,
0xca,0x93,0x82,0x10,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x37,0x32,0x73,0x31,
0x95,0x31,0x67,0x08,0x00,0x00,0x00,0x00,0x00,0x00,0xd6,0x21,0x93,0x31,0x73,0x31,
0x75,0x19,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1b,0x22,0x15,0x04,
0x53,0x03,0x79,0x12,0x04,0x08,0x00,0x00,0x00,0x00,0xbc,0x22,0xb4,0x03,0xd4,0x03,
0x9a,0x1a,0x23,0x08,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1b,0x22,0xb5,0x24,
0xff,0xe7,0xd9,0x5d,0xb9,0x22,0x7b,0x2a,0x7b,0x2a,0x35,0x1a,0xfb,0x75,0xfa,0x6d,
0x79,0x12,0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x52,0x11,0xf8,0x2b,
0x3f,0xaf,0xff,0xa6,0x7f,0xaf,0x9f,0xb7,0x7f,0xb7,0x9f,0xb7,0x9d,0x96,0x78,0x3c,
0x71,0x09,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x9a,0x32,
0xbf,0xc7,0x5e,0xcf,0xde,0xa6,0xbd,0x9e,0xbe,0x9e,0xfe,0xae,0xdd,0xb6,0xd7,0x32,
0x92,0x73,0x81,0x10,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3e,0x23,
0xff,0xef,0xff,0xff,0x1e,0xb7,0xbe,0x9e,0xbd,0x9e,0x1f,0xbf,0xff,0xff,0x79,0x73,
0xbf,0xce,0x24,0x29,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x67,0xa0,
0x7d,0x03,0x7d,0x6e,0xff,0xb6,0xdf,0xa7,0xff,0xa7,0xfe,0xae,0x3d,0x66,0x3d,0x7e,
0xff,0xff,0x04,0x21,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x24,0x99,0x00,0xd8,
0x00,0xf8,0x29,0x69,0x5f,0x67,0x00,0x78,0x00,0x70,0xbf,0x6f,0x49,0x51,0x00,0x70,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x24,0x79,0x00,0xf8,
0x40,0xe8,0x4a,0x62,0x92,0x03,0xa1,0x98,0x60,0xb0,0x72,0x03,0xca,0x99,0x61,0xb0,
0x41,0x20,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x82,0x28,0x82,0xc0,0x01,0xd8,
0x61,0x80,0x26,0x92,0xc8,0xd2,0x0a,0xbb,0x2a,0xbb,0x46,0xd2,0x01,0x99,0x81,0x20,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x51,0x00,0xf8,0x00,0x98,
0x2b,0xb3,0x8d,0xa3,0xe4,0x50,0x04,0x51,0x25,0x59,0xc3,0x38,0xac,0x83,0xcb,0x93,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x51,0x00,0xf8,0x42,0xa8,
0x03,0x51,0x61,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xd1,0xa4,
0xca,0xab,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xc2,0x50,0x00,0xf8,0x00,0xa0,
0xa2,0x48,0x00,0x00,0xeb,0xda,0x8e,0xfb,0xae,0xfb,0xeb,0xd2,0x00,0x00,0x90,0x94,
0xa6,0x29,0x10,0xfc,0x00,0x00,0x00,0x00,0x00,0x00,0x49,0x9a,0x8a,0x82,0x49,0x92,
0x4f,0xac,0x95,0xfd,0x74,0xd5,0x5a,0xef,0x7a,0xf7,0x74,0xd5,0x16,0xfe,0xd1,0x9c,
0x00,0x00,0xcf,0xfb,0x00,0x00,0x00,0x00,0x00,0x00,0xef,0x73,0xd3,0x94,0x75,0xa5,
0x31,0x84,0x92,0x8c,0x45,0x21,0x15,0xd6,0x19,0xff,0xc4,0x08,0xff,0xff,0xf8,0xfe,
0x65,0x39,0xcf,0xfb,0x00,0x00,0x00,0x00,0x00,0x00,0xb3,0x9c,0x00,0x00,0xd7,0xbd,
0x30,0x84,0xf3,0x9c,0x7a,0xc6,0xd2,0xfc,0xb1,0xfc,0x5a,0xbe,0x79,0xce,0xa6,0x69,
0x62,0x50,0xa6,0x79,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0x5d,0xef,0xff,0xff,
0xf3,0x9c,0x20,0x08,0x08,0x3a,0x82,0x28,0x62,0x30,0x08,0x3a,0xc3,0x18,0x00,0x00,
0xc3,0x68,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x88,
0xe3,0xa8,0x21,0x10,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x29,0x4a,0xff,0xff,
0x76,0xad,0x00,0x10,0x20,0x10,0xa6,0x29,0x88,0x31,0x00,0x00,0x00,0xb0,0x00,0xf0,
0xc3,0x80,0x00,0x08,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x59,0xce,0x21,0x08,
0x2d,0x5b,0x00,0x80,0xa0,0xc8,0xf7,0xd5,0xf8,0xff,0x40,0xb0,0x61,0xd8,0xa2,0x88,
0x20,0x08,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x41,0x10,0x62,0xa8,0xa2,0x70,0xe0,0xc3,0x22,0x98,0x82,0x28,0x20,0x18,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x20,0x10,0x21,0x20,0x01,0x18,0x41,0x18,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00
};
const unsigned char Mario1[] =
{
0x42,0x4d,0xd6,0x05,0x00,0x00,0x00,0x00,0x00,0x00,0x36,0x00,0x00,0x00,0x28,0x00,
0x00,0x00,0x18,0x00,0x00,0x00,0x1e,0x00,0x00,0x00,0x01,0x00,0x10,0x00,0x03,0x00,
0x00,0x00,0xa0,0x05,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xd1,0x00,0xd9,0x00,0xd1,0x00,0xd9,
0x00,0xd1,0x00,0xd9,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xd9,0xe0,0xd0,0x00,0xd9,0xe0,0xd0,
0x00,0xd9,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0xb5,0xfd,0xd5,0xfd,0x00,0x00,0x00,0x00,0xb5,0xfd,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xd9,0xe0,0xd0,0x00,0xd9,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xb5,0xfd,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xd9,0x00,0xd1,0x00,0xd9,0x00,0xd1,0x00,0x00,
0xb5,0xfd,0xd5,0xfd,0xb5,0xfd,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0xd9,0xe0,0xd0,0x00,0xd9,0xe0,0xd0,0x00,0x00,0xb5,0xfd,
0xb5,0xfd,0xb5,0xfd,0xb5,0xfd,0xb5,0xfd,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0xd1,0x00,0xd9,0x00,0xd1,0x00,0xd9,0x00,0x00,0xd5,0xfd,
0xb5,0xfd,0xd5,0xfd,0xb5,0xfd,0xd5,0xfd,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0xd9,0xe0,0xd0,0x00,0xd9,0xe0,0xd0,0x00,0x00,0x00,0x00,
0xb5,0xfd,0xb5,0xfd,0xb5,0xfd,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xd9,0x00,0xd1,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xb5,0xfd,0xb5,0xfd,
0xb5,0xfd,0xb5,0xfd,0xb5,0xfd,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xd5,0xfd,0xb5,0xfd,0xd5,0xfd,
0xb5,0xfd,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0xb5,0xfd,0xb5,0xfd,0xb5,0xfd,0xb5,0xfd,0x00,0x00,
0x00,0x00,0x00,0x00,0xb5,0xfd,0xb5,0xfd,0xb5,0xfd,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0xb5,0xfd,0xd5,0xfd,0xb5,0xfd,0x00,0x00,0xb5,0xfd,0xd5,0xfd,
0x00,0x00,0xd5,0xfd,0xb5,0xfd,0xd5,0xfd,0xb5,0xfd,0xd5,0xfd,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0xb5,0xfd,0xb5,0xfd,0x00,0x00,0x00,0x00,0x00,0x00,0xb5,0xfd,
0xb5,0xfd,0xb5,0xfd,0xb5,0xfd,0xb5,0xfd,0xb5,0xfd,0xb5,0xfd,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0xb5,0xfd,0xd5,0xfd,0x00,0x00,0x00,0x00,0xb5,0xfd,0xd5,0xfd,
0xb5,0xfd,0x00,0x00,0xb5,0xfd,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xb5,0xfd,0xb5,0xfd,
0xb5,0xfd,0x00,0x00,0xb5,0xfd,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xd9,0x00,0xd1,0x00,0x00,0x00,0x00,0xd5,0xfd,
0xb5,0xfd,0xd5,0xfd,0xb5,0xfd,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0xe0,0xd0,0x00,0xd9,0xe0,0xd0,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xd1,0x00,0xd9,0x00,0xd1,0x00,0xd9,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xe0,0xd0,0x00,0xd9,0xe0,0xd0,
0x00,0xd9,0xe0,0xd0,0x00,0xd9,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xd9,
0x00,0xd1,0x00,0xd9,0x00,0xd1,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00
};

const unsigned char Mario2[] =
{
0x42,0x4d,0xd6,0x05,0x00,0x00,0x00,0x00,0x00,0x00,0x36,0x00,0x00,0x00,0x28,0x00,
0x00,0x00,0x18,0x00,0x00,0x00,0x1e,0x00,0x00,0x00,0x01,0x00,0x10,0x00,0x03,0x00,
0x00,0x00,0xa0,0x05,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0xd1,0x00,0xd9,0x00,0xd1,0x00,0xd9,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0xd1,0x00,0xd9,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0xe0,0xd0,0x00,0xd9,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0xd9,0xe0,0xd0,0x00,0xd9,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0xd9,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xd9,0x00,0xd1,0x00,0xd9,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0xe0,0xd0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xd9,0xe0,0xd0,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xd5,0xfd,
0xb5,0xfd,0x00,0x00,0x00,0x00,0xd5,0xfd,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0xe0,0xd0,0x00,0xd9,0x00,0x00,0xb5,0xfd,0xb5,0xfd,0xb5,0xfd,0x00,0x00,
0xb5,0xfd,0x00,0x00,0x00,0x00,0xb5,0xfd,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0xd1,0x00,0xd9,0x00,0x00,0xd5,0xfd,0xb5,0xfd,0xd5,0xfd,0xb5,0xfd,0xd5,0xfd,
0x00,0x00,0x00,0xd9,0x00,0xd1,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0xd9,0xe0,0xd0,0x00,0x00,0xb5,0xfd,0xb5,0xfd,0xb5,0xfd,0xb5,0xfd,0xb5,0xfd,
0x00,0x00,0xe0,0xd0,0x00,0xd9,0x00,0x00,0xb5,0xfd,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0xd1,0x00,0xd9,0x00,0xd1,0x00,0x00,0xb5,0xfd,0xd5,0xfd,0xb5,0xfd,0x00,0x00,
0x00,0xd1,0x00,0xd9,0x00,0x00,0x00,0x00,0xb5,0xfd,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0xe0,0xd0,0x00,0xd9,0xe0,0xd0,0x00,0x00,0x00,0x00,0x00,0x00,0xe0,0xd0,
0x00,0xd9,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0xd9,0x00,0xd1,0x00,0xd9,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xb5,0xfd,0xb5,0xfd,0xb5,0xfd,
0xb5,0xfd,0xb5,0xfd,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xb5,0xfd,0xd5,0xfd,0xb5,0xfd,0xd5,0xfd,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0xb5,0xfd,0xb5,0xfd,0xb5,0xfd,0xb5,0xfd,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0xb5,0xfd,0xb5,0xfd,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0xd5,0xfd,0xb5,0xfd,0xd5,0xfd,0x00,0x00,0xd5,0xfd,0xb5,0xfd,0x00,0x00,
0xb5,0xfd,0xd5,0xfd,0xb5,0xfd,0xd5,0xfd,0xb5,0xfd,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0xb5,0xfd,0xb5,0xfd,0x00,0x00,0x00,0x00,0x00,0x00,0xb5,0xfd,0xb5,0xfd,
0xb5,0xfd,0xb5,0xfd,0xb5,0xfd,0xb5,0xfd,0xb5,0xfd,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0xd5,0xfd,0xb5,0xfd,0x00,0x00,0x00,0x00,0xd5,0xfd,0xb5,0xfd,0xd5,0xfd,
0x00,0x00,0xd5,0xfd,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xb5,0xfd,0xb5,0xfd,0xb5,0xfd,
0x00,0x00,0xb5,0xfd,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0xd1,0x00,0xd9,0x00,0x00,0x00,0x00,0xb5,0xfd,0xd5,0xfd,
0xb5,0xfd,0xd5,0xfd,0xb5,0xfd,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0xd9,0xe0,0xd0,0x00,0xd9,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xd9,0x00,0xd1,0x00,0xd9,0x00,0xd1,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xd9,0xe0,0xd0,0x00,0xd9,0xe0,0xd0,
0x00,0xd9,0xe0,0xd0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xd1,0x00,0xd9,
0x00,0xd1,0x00,0xd9,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00
};

const unsigned char Mario3[]=
{
0x42,0x4d,0xd6,0x05,0x00,0x00,0x00,0x00,0x00,0x00,0x36,0x00,0x00,0x00,0x28,0x00,
0x00,0x00,0x18,0x00,0x00,0x00,0x1e,0x00,0x00,0x00,0x01,0x00,0x10,0x00,0x03,0x00,
0x00,0x00,0xa0,0x05,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0xe0,0xd0,0x00,0xd9,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0xd9,0x00,0xd1,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xd1,0x00,0xd9,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0xe0,0xd0,0x00,0xd9,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xd9,0xe0,0xd0,0x00,0xd9,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0xd1,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xd1,0x00,0xd9,0x00,0xd1,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0xd9,0xe0,0xd0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xd9,0xe0,0xd0,0x00,0xd9,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xb5,0xfd,0xd5,0xfd,0xb5,0xfd,0x00,0x00,
0x00,0x00,0xd5,0xfd,0xb5,0xfd,0x00,0x00,0x00,0x00,0x00,0xd9,0x00,0xd1,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0xb5,0xfd,0xb5,0xfd,0xb5,0xfd,0xb5,0xfd,0xb5,0xfd,
0x00,0x00,0xb5,0xfd,0xb5,0xfd,0x00,0x00,0x00,0x00,0xb5,0xfd,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0xd9,0x00,0x00,0xd5,0xfd,0xb5,0xfd,0xd5,0xfd,0xb5,0xfd,0xd5,0xfd,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xd9,0x00,0xd1,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0xe0,0xd0,0x00,0xd9,0x00,0x00,0xb5,0xfd,0xb5,0xfd,0xb5,0xfd,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0xd9,0xe0,0xd0,0x00,0xd9,0x00,0x00,0xb5,0xfd,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0xd9,0x00,0xd1,0x00,0xd9,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xd9,
0x00,0x00,0x00,0xd9,0x00,0xd1,0x00,0xd9,0x00,0x00,0x00,0x00,0xb5,0xfd,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0xd9,0xe0,0xd0,0x00,0xd9,0xe0,0xd0,0x00,0xd9,0x00,0x00,
0x00,0x00,0xe0,0xd0,0x00,0xd9,0x00,0x00,0x00,0x00,0xb5,0xfd,0xb5,0xfd,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xd9,0x00,0xd1,0x00,0xd9,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xb5,0xfd,0xb5,0xfd,
0xb5,0xfd,0xb5,0xfd,0xb5,0xfd,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xb5,0xfd,0xd5,0xfd,0xb5,0xfd,0xd5,0xfd,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0xb5,0xfd,0xb5,0xfd,0xb5,0xfd,0xb5,0xfd,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0xb5,0xfd,0xb5,0xfd,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0xd5,0xfd,0xb5,0xfd,0xd5,0xfd,0x00,0x00,0xd5,0xfd,0xb5,0xfd,0x00,0x00,
0xb5,0xfd,0xd5,0xfd,0xb5,0xfd,0xd5,0xfd,0xb5,0xfd,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0xb5,0xfd,0xb5,0xfd,0x00,0x00,0x00,0x00,0x00,0x00,0xb5,0xfd,0xb5,0xfd,
0xb5,0xfd,0xb5,0xfd,0xb5,0xfd,0xb5,0xfd,0xb5,0xfd,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0xb5,0xfd,0x00,0x00,0x00,0x00,0xd5,0xfd,0xb5,0xfd,0xd5,0xfd,
0x00,0x00,0xd5,0xfd,0x00,0x00,0xd5,0xfd,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xb5,0xfd,0xb5,0xfd,0xb5,0xfd,
0x00,0x00,0xb5,0xfd,0x00,0x00,0xb5,0xfd,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xd9,0x00,0x00,0x00,0x00,0xb5,0xfd,0xd5,0xfd,
0xb5,0xfd,0xd5,0xfd,0xb5,0xfd,0xd5,0xfd,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0xe0,0xd0,0x00,0xd9,0xe0,0xd0,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xd1,0x00,0xd9,0x00,0xd1,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xe0,0xd0,0x00,0xd9,0xe0,0xd0,
0x00,0xd9,0xe0,0xd0,0x00,0xd9,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xd9,
0x00,0xd1,0x00,0xd9,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00
};



#else

#endif
