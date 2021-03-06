//*****************************************************************************
//
// Copyright 1984-1989, 1994 Adobe Systems Incorporated.
// Copyright 1988, 1994 Digital Equipment Corporation.
// 
// Adobe is a trademark of Adobe Systems Incorporated which may be
// registered in certain jurisdictions.
// Permission to use these trademarks is hereby granted only in
// association with the images described in this file.
// 
// Permission to use, copy, modify, distribute and sell this software
// and its documentation for any purpose and without fee is hereby
// granted, provided that the above copyright notices appear in all
// copies and that both those copyright notices and this permission
// notice appear in supporting documentation, and that the names of
// Adobe Systems and Digital Equipment Corporation not be used in
// advertising or publicity pertaining to distribution of the software
// without specific, written prior permission.  Adobe Systems and
// Digital Equipment Corporation make no representations about the
// suitability of this software for any purpose.  It is provided "as
// is" without express or implied warranty.
//*****************************************************************************

//*****************************************************************************
//
// This file is generated by ftrasterize; DO NOT EDIT BY HAND!
//
//*****************************************************************************

#include <stdint.h>
#include <stdbool.h>
#include "grlib/grlib.h"

//*****************************************************************************
//
// Details of this font:
//     Characters: 32 to 126 inclusive
//     Style: Times
//     Size: 9x19
//     Bold: no
//     Italic: no
//     Memory usage: 2472 bytes
//
//*****************************************************************************

static const uint8_t g_pui8times9x19Data[2269] =
{
      5,  17,   0,  38,  32,  22,  17, 240,  34, 242, 242, 242,
    242, 242, 240,  17, 240,  17, 240,  17,   0,   6,  18, 242,
      0,  10,  48,  14,  17, 240,  34,  34, 178,  34, 178,  34,
    177,  49,   0,  29,  16,  30,  17, 240,  98,  18, 194,  18,
    194,  18, 194,  18, 154, 146,  18, 194,  18, 194,  18, 154,
    146,  18, 194,  18, 194,  18, 194,  18,   0,   9,  96,  33,
     17,  49, 229, 178,  17,  18, 162,  17,  33, 162,  17, 212,
    228, 228, 227, 225,  18, 209,  18, 161,  33,  18, 162,  17,
     18, 181, 225, 240,  17,   0,   5, 112,  40,  17, 240,  67,
     82,  98,  23,  98,  49,  49, 114,  49,  33, 130,  34,  18,
    133,  18, 163,  33,  35, 162,  18,  18, 130,  18,  49, 129,
     34,  49, 114,  34,  34,  98,  53, 113,  83,   0,   9,  32,
     33,  17, 240,  83, 210,  33, 194,  33, 194,  33, 194,  17,
    226,  36, 131,  50, 130,  18,  18, 130,  36, 146,  51, 146,
     52, 131,  18,  21, 100,  51,   0,   9,  32,  10,  17, 240,
     34, 242, 242, 241,   0,  29,  80,  25,  17, 240,  82, 226,
    226, 242, 241, 242, 242, 242, 242, 242, 242, 242, 240,  17,
    240,  18, 242, 240,  18, 240,  18, 192,  25,  17, 240,  34,
    240,  18, 240,  18, 242, 240,  17, 240,  18, 242, 242, 242,
    242, 242, 242, 241, 242, 242, 226, 226, 240,  22,  17,  49,
    240,  17, 210,  17,  18, 177,  17,  17, 211, 194,  17,  18,
    161,  33,  33, 209,   0,  22, 112,  21,  17,   0,  11,  17,
    240,  17, 240,  17, 240,  17, 201, 193, 240,  17, 240,  17,
    240,  17,   0,  10,  13,  17,   0,  25,  82, 242, 240,  17,
    242, 226, 240, 240,  32,   9,  17,   0,  17,   5, 197,   0,
     18,  64,   9,  17,   0,  25,  66, 242,   0,  10,  48,  27,
     17, 240,  97, 240,  17, 242, 241, 240,  17, 242, 241, 240,
     17, 242, 241, 240,  17, 242, 241, 240,  17, 240,  17,   0,
      6,  32,  30,  17, 240,  68, 194,  34, 177,  65, 162,  66,
    146,  66, 146,  66, 146,  66, 146,  66, 146,  66, 146,  66,
    161,  65, 178,  34, 196,   0,   9, 112,  19,  17, 240,  66,
    227, 212, 242, 242, 242, 242, 242, 242, 242, 242, 228, 198,
      0,   9, 112,  22,  17, 240,  68, 198, 162,  35, 161,  66,
    242, 242, 226, 242, 226, 226, 226,  49, 167, 167,   0,   9,
     96,  21,  17, 240,  53, 178,  35, 161,  66, 242, 226, 211,
    228, 243, 242, 242, 242, 162,  34, 181,   0,  10,  24,  17,
    240, 114, 227, 227, 209,  18, 193,  34, 178,  34, 177,  50,
    161,  66, 168, 152, 226, 242, 242,   0,   9,  96,  20,  17,
    240,  54, 181, 178, 242, 244, 244, 242, 243, 242, 242, 226,
    178,  19, 180,   0,  10,  16,  25,  17, 240, 115, 195, 210,
    226, 242, 230, 178,  50, 162,  66, 146,  66, 146,  66, 147,
     50, 163,  18, 196,   0,   9, 112,  20,  17, 240,  39, 167,
    161,  65, 242, 241, 242, 242, 241, 242, 242, 241, 242, 242,
      0,  10,  32,  28,  17, 240,  68, 194,  34, 178,  49, 178,
     49, 179,  17, 212, 212, 194,  19, 162,  51, 146,  66, 146,
     66, 162,  34, 196,   0,   9, 112,  25,  17, 240,  68, 194,
     19, 162,  50, 162,  66, 146,  66, 146,  66, 147,  50, 167,
    226, 242, 226, 211, 195,   0,  10,  32,  13,  17,   0,  10,
     82, 242,   0,  12,  66, 242,   0,  10,  48,  17,  17,   0,
     10,  98, 242,   0,  12,  66, 242, 240,  17, 242, 226, 240,
    240,  32,  20,  17,   0,  11,  66, 211, 195, 195, 210, 240,
     19, 240,  19, 240,  19, 240,  18,   0,   9,  64,   9,  17,
      0,  17,   8, 240, 184,   0,  16,  20,  17,   0,  10,  82,
    240,  19, 240,  19, 240,  19, 240,  18, 211, 195, 195, 210,
      0,  10,  48,  24,  17, 240,  52, 193,  50, 178,  49, 178,
     34, 242, 226, 242, 226, 241, 240,  17, 240, 240,  50, 242,
      0,  10,  16,  48,  17, 240, 118, 163,  50, 115,  98,  98,
    129,  82,  53,  18,  66,  38,  33,  50,  50,  34,  33,  50,
     34,  50,  33,  50,  34,  34,  34,  50,  34,  34,  33,  66,
     34,  19,  18,  82,  35,  19,  98, 240,  18, 240,  19,  66,
    166, 240, 128,  27,  17, 240, 129, 243, 227, 225,  17, 210,
     18, 193,  34, 178,  35, 161,  66, 167, 146,  67, 129,  98,
    114,  99,  84,  69,   0,   9,  29,  17, 240,  40, 162,  51,
    146,  66, 146,  66, 146,  66, 146,  50, 168, 146,  67, 130,
     82, 130,  82, 130,  82, 130,  66, 136,   0,   9,  80,  26,
     17, 240, 100,  33, 130,  67, 114,  98, 114, 113,  98, 242,
    242, 242, 242, 240,  18, 242,  98, 131,  50, 180,   0,   9,
     80,  30,  17, 240,  40, 162,  51, 146,  82, 130,  82, 130,
     98, 114,  98, 114,  98, 114,  98, 114,  98, 114,  82, 130,
     82, 130,  51, 136,   0,   9,  80,  25,  17, 240,  41, 146,
     66, 146,  81, 146, 242, 242,  65, 167, 162,  65, 162, 242,
    242,  81, 146,  66, 137,   0,   9,  64,  23,  17, 240,  41,
    146,  66, 146,  81, 146, 242, 242,  65, 167, 162,  65, 162,
    242, 242, 242, 228,   0,  10,  16,  29,  17, 240, 100,  33,
    130,  67, 114,  98, 114, 113,  98, 242, 242, 100,  82, 114,
     98, 114, 114,  98, 114,  98, 131,  35, 180,   0,   9,  80,
     31,  17, 240,  36,  52, 114,  82, 130,  82, 130,  82, 130,
     82, 130,  82, 137, 130,  82, 130,  82, 130,  82, 130,  82,
    130,  82, 116,  52,   0,   9,  32,  19,  17, 240,  36, 226,
    242, 242, 242, 242, 242, 242, 242, 242, 242, 242, 228,   0,
     10,  16,  20,  17, 240,  68, 226, 242, 242, 242, 242, 242,
    242, 242, 242, 242, 194,  18, 196,   0,  10,  16,  30,  17,
    240,  36,  36, 130,  66, 146,  50, 162,  34, 178,  18, 196,
    212, 210,  18, 194,  34, 178,  50, 162,  51, 146,  67, 116,
     67,   0,   9,  32,  21,  17, 240,  36, 226, 242, 242, 242,
    242, 242, 242, 242, 242, 242,  97, 130,  82, 122,   0,   9,
     48,  46,  17, 240,  35, 131,  67,  99,  83,  99,  84,  68,
     81,  18,  65,  18,  81,  18,  50,  18,  81,  19,  34,  18,
     81,  34,  33,  34,  81,  34,  18,  34,  81,  51,  50,  81,
     51,  50,  81,  65,  66,  67,  49,  52,   0,   8, 112,  37,
     17, 240,  35,  83, 114,  97, 131,  81, 132,  65, 129,  18,
     65, 129,  34,  49, 129,  35,  33, 129,  51,  17, 129,  66,
     17, 129,  83, 129,  83, 129,  98, 115,  97,   0,   9,  48,
     30,  17, 240, 100, 178,  66, 130,  98, 114,  98,  98, 130,
     82, 130,  82, 130,  82, 130,  82, 130,  98,  98, 114,  98,
    130,  66, 180,   0,   9,  80,  24,  17, 240,  40, 162,  51,
    146,  66, 146,  66, 146,  66, 146,  50, 166, 178, 242, 242,
    242, 242, 228,   0,  10,  16,  34,  17, 240, 100, 178,  66,
    130,  98, 114,  98,  98, 130,  82, 130,  82, 130,  82, 130,
     82, 130,  98,  98, 114,  98, 130,  66, 180, 226, 240,  18,
    240,  19, 244,  80,  30,  17, 240,  40, 162,  51, 146,  66,
    146,  66, 146,  66, 146,  50, 166, 178,  34, 178,  50, 162,
     66, 146,  66, 146,  82, 116,  67,   0,   9,  32,  25,  17,
    240,  67,  17, 178,  34, 162,  65, 162, 243, 244, 228, 243,
    243, 242, 145,  82, 146,  50, 161,  20,   0,   9, 112,  23,
     17, 240,  42, 114,  34,  34, 113,  50,  49, 178, 242, 242,
    242, 242, 242, 242, 242, 242, 228,   0,   9,  96,  31,  17,
    240,  36,  67, 114,  97, 130,  97, 130,  97, 130,  97, 130,
     97, 130,  97, 130,  97, 130,  97, 130,  97, 131,  66, 147,
     34, 181,   0,   9,  80,  29,  17, 240,  37,  68,  83,  98,
    114,  97, 131,  81, 146,  66, 146,  65, 163,  49, 178,  34,
    179,  17, 210,  17, 212, 226, 242,   0,   9,  80,  44,  17,
    240,  37,  36,  51,  34,  66,  82,  34,  66,  81,  66,  50,
     81,  66,  66,  50,  66,  66,  49,  83,  35,  49,  98,  33,
     17,  34,  98,  33,  18,  17, 114,  17,  34,  17, 131,  36,
    130,  66, 146,  66,   0,   9,  29,  17, 240,  36,  83,  99,
     82, 131,  50, 162,  34, 194,  17, 211, 242, 228, 194,  18,
    193,  50, 162,  51, 130,  83, 100,  68,   0,   9,  16,  24,
     17, 240,  36,  68,  99,  82, 130,  66, 162,  49, 178,  33,
    212, 226, 242, 242, 242, 242, 242, 228,   0,   9,  80,  23,
     17, 240,  57, 130,  67, 129,  82, 227, 211, 226, 227, 211,
    211, 226, 227,  81, 115,  82, 122,   0,   9,  48,  21,  17,
    240,  36, 210, 242, 242, 242, 242, 242, 242, 242, 242, 242,
    242, 242, 242, 242, 244, 240, 240,  28,  17, 240,  33, 240,
     17, 240,  18, 240,  17, 240,  18, 242, 240,  17, 240,  18,
    242, 240,  17, 240,  18, 240,  17, 240,  17,   0,  10,  21,
     17, 240,  36, 242, 242, 242, 242, 242, 242, 242, 242, 242,
    242, 242, 242, 242, 242, 212, 240, 240,  18,  17, 240,  81,
    243, 225,  17, 210,  18, 193,  49, 178,  50, 161,  81,   0,
     22,  64,   6,  17,   0,  36,  25, 128,  11,  17, 240,  34,
    240,  18, 240,  33,   0,  31,  48,  22,  17,   0,  10, 100,
    194,  34, 178,  34, 227, 194,  18, 178,  34, 178,  34, 182,
    194,  34,   0,   9,  96,  27,  17, 240,  35, 242, 242, 242,
    242,  19, 179,  19, 162,  50, 162,  50, 162,  50, 162,  50,
    162,  50, 163,  18, 196,   0,   9, 112,  20,  17,   0,  10,
    116, 194,  34, 162,  50, 162, 242, 242, 242, 240,  18,  49,
    196,   0,   9, 112,  26,  17, 240,  99, 242, 242, 242, 197,
    178,  34, 162,  50, 162,  50, 162,  50, 162,  50, 162,  50,
    178,  34, 198,   0,   9,  80,  20,  17,   0,  10, 116, 194,
     34, 162,  66, 152, 146, 242, 243,  65, 163,  18, 196,   0,
      9, 112,  20,  17, 240,  83, 210,  17, 209, 242, 229, 210,
    242, 242, 242, 242, 242, 242, 228,   0,  10,  16,  26,  17,
      0,  10, 117, 162,  34, 178,  49, 178,  49, 178,  34, 196,
    209, 240,  21, 199, 145,  82, 146,  81, 147,  49, 181, 176,
     28,  17, 240,  35, 242, 242, 242, 242,  34, 178,  20, 163,
     34, 162,  50, 162,  50, 162,  50, 162,  50, 162,  50, 148,
     35,   0,   9,  64,  19,  17, 240,  50, 242,   0,   6,   3,
    242, 242, 242, 242, 242, 242, 242, 228,   0,  10,  16,  21,
     17, 240,  66, 242,   0,   6,   3, 242, 242, 242, 242, 242,
    242, 242, 242, 242, 242, 211, 226, 240,  27,  17, 240,  35,
    242, 242, 242, 242,  35, 162,  49, 178,  33, 194,  17, 212,
    210,  18, 194,  34, 178,  50, 147,  51,   0,   9,  64,  19,
     17, 240,  35, 242, 242, 242, 242, 242, 242, 242, 242, 242,
    242, 242, 228,   0,  10,  16,  34,  17,   0,  10,  83,  34,
     50,  98,  20,  20,  83,  35,  34,  82,  50,  50,  82,  50,
     50,  82,  50,  50,  82,  50,  50,  82,  50,  50,  68,  20,
     20,   0,   8, 112,  25,  17,   0,  10,  83,  34, 178,  20,
    163,  34, 162,  50, 162,  50, 162,  50, 162,  50, 162,  50,
    148,  35,   0,   9,  64,  23,  17,   0,  10, 116, 194,  34,
    162,  66, 146,  66, 146,  66, 146,  66, 146,  66, 162,  34,
    196,   0,   9, 112,  27,  17,   0,  10,  83,  19, 179,  19,
    162,  50, 162,  50, 162,  50, 162,  50, 162,  50, 163,  18,
    178,  18, 194, 242, 242, 228, 208,  25,  17,   0,  10, 117,
    178,  34, 162,  50, 162,  50, 162,  50, 162,  50, 162,  50,
    178,  34, 197, 242, 242, 242, 228, 144,  18,  17,   0,  10,
     83,  18, 194,  18, 195, 226, 242, 242, 242, 242, 228,   0,
     10,  16,  22,  17,   0,  10,  98,  17, 194,  18, 194,  33,
    195, 243, 243, 193,  34, 194,  18, 193,  18,   0,  10,  16,
     18,  17,   0,   6,  81, 242, 229, 210, 242, 242, 242, 242,
    242, 243,  17, 211,   0,  10,  25,  17,   0,  10,  83,  35,
    162,  50, 162,  50, 162,  50, 162,  50, 162,  50, 162,  50,
    163,  19, 179,  19,   0,   9,  64,  22,  17,   0,  10,  84,
     35, 146,  50, 162,  49, 194,  33, 194,  18, 209,  17, 227,
    241, 240,  17,   0,  10,  31,  17,   0,  10,  83,  35,  35,
     82,  34,  50,  98,  49,  34, 130,  18,  34, 130,  19,  18,
    147,  17,  17, 163,  19, 177,  49, 193,  49,   0,   9,  64,
     22,  17,   0,  10,  83,  51, 146,  50, 178,  18, 211, 242,
    227, 210,  18, 178,  50, 147,  51,   0,   9,  64,  23,  17,
      0,  10,  84,  35, 146,  65, 163,  34, 178,  33, 194,  18,
    211, 227, 242, 226, 242, 241, 212, 211, 224,  20,  17,   0,
     10,  87, 162,  35, 161,  50, 226, 226, 242, 226,  49, 163,
     34, 167,   0,   9,  96,  25,  17, 240,  99, 210, 226, 242,
    242, 242, 242, 226, 226, 240,  18, 240,  18, 242, 242, 242,
    242, 240,  18, 240,  19, 160,  31,  17, 240,  33, 240,  17,
    240,  17, 240,  17, 240,  17, 240,  17, 240,  17, 240,  17,
    240,  17, 240,  17, 240,  17, 240,  17, 240,  17,   0,  10,
     64,  25,  17, 240,  35, 240,  18, 240,  18, 242, 242, 242,
    242, 240,  18, 240,  18, 226, 226, 242, 242, 242, 242, 226,
    211, 224,  11,  17,   0,  17,  20,  34, 130,  36,   0,  18,
     16,
};

const tFont g_sFonttimes9x19 =
{
    //
    // The format of the font.
    //
    FONT_FMT_PIXEL_RLE,

    //
    // The maximum width of the font.
    //
    17,

    //
    // The height of the font.
    //
    18,

    //
    // The baseline of the font.
    //
    14,

    //
    // The offset to each character in the font.
    //
    {
           0,    5,   27,   41,   71,  104,  144,  177,
         187,  212,  237,  259,  280,  293,  302,  311,
         338,  368,  387,  409,  430,  454,  474,  499,
         519,  547,  572,  585,  602,  622,  631,  651,
         675,  723,  750,  779,  805,  835,  860,  883,
         912,  943,  962,  982, 1012, 1033, 1079, 1116,
        1146, 1170, 1204, 1234, 1259, 1282, 1313, 1342,
        1386, 1415, 1439, 1462, 1483, 1511, 1532, 1550,
        1556, 1567, 1589, 1616, 1636, 1662, 1682, 1702,
        1728, 1756, 1775, 1796, 1823, 1842, 1876, 1901,
        1924, 1951, 1976, 1994, 2016, 2034, 2059, 2081,
        2112, 2134, 2157, 2177, 2202, 2233, 2258,
    },

    //
    // A pointer to the actual font data
    //
    g_pui8times9x19Data
};
