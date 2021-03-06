//*****************************************************************************
//
// Copyright 1989 Dale Schumacher, dal@syntel.mn.org
//                399 Beacon Ave.
//                St. Paul, MN  55104-3527
// 
// Permission to use, copy, modify, and distribute this software and
// its documentation for any purpose and without fee is hereby
// granted, provided that the above copyright notice appear in all
// copies and that both that copyright notice and this permission
// notice appear in supporting documentation, and that the name of
// Dale Schumacher not be used in advertising or publicity pertaining to
// distribution of the software without specific, written prior
// permission.  Dale Schumacher makes no representations about the
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
//     Style: Clean
//     Size: 6x10
//     Bold: no
//     Italic: no
//     Memory usage: 1216 bytes
//
//*****************************************************************************

static const uint8_t g_pui8clean6x10Data[1013] =
{
      5,   6,   0,   7,  64,  10,   3,   1,  33,  33,  33,  33,
     33,  81, 128,  10,   4,   1,  17,  17,  17,  17,  17, 240,
    224,  15,   5,  97,  17,  33,  17,  21,  17,  17,  21,  17,
     17,  33,  17, 176,  10,   5, 113,  53,  17,  51,  49,  21,
     49, 192,  12,   5,  82,  50,  33,  49,  49,  49,  49,  34,
     50, 160,  13,   5,  99,  17,  65,  81,  49,  17,  18,  33,
     34,  17, 160,   8,   4,  18,  33,  33, 240, 240,  16,  12,
      3,  33,  17,  33,  17,  33,  33,  49,  33,  49,  48,  12,
      5,   1,  81,  65,  81,  65,  65,  49,  65,  49, 144,  13,
      5, 193,  33,  17,  17,  19,  17,  17,  17,  33, 240,  32,
      9,   5, 193,  65,  37,  33,  65, 240,  32,   8,   4, 240,
    162,  34,  33,  33,  48,   6,   5, 240,  85, 240, 160,   6,
      3, 240,  50,  18, 112,  13,   5,  65,  65,  49,  65,  49,
     65,  49,  65,  49,  65,  64,  13,   5,  19,  17,  50,  35,
     17,  19,  34,  50,  49,  19, 176,  11,   4,  17,  34,  49,
     49,  49,  49,  49,  49, 160,  12,   5,  19,  17,  49,  65,
     49,  49,  49,  49,  69, 160,  12,   5,  19,  17,  49,  65,
     34,  81,  66,  49,  19, 176,  13,   5,  49,  50,  50,  33,
     17,  33,  17,  21,  49,  51, 160,  10,   5,   6,  65,  68,
     81,  66,  49,  19, 176,  12,   5,  34,  33,  49,  68,  17,
     50,  50,  49,  19, 176,  11,   5,   6,  49,  65,  65,  49,
     65,  49,  65, 192,  13,   5,  19,  17,  50,  49,  19,  17,
     50,  50,  49,  19, 176,  12,   5,  19,  17,  50,  50,  49,
     20,  65,  49,  34, 192,   7,   3,  98,  18, 114,  18, 112,
      9,   4, 146,  34, 162,  34,  33,  33,  48,  10,   6, 240,
     18,  34,  34,  98,  98, 240,  48,   6,   5, 245,  85, 240,
     80,   9,   6, 194,  98,  98,  34,  34, 240, 112,  11,   5,
     19,  17,  49,  65,  49,  49,  65, 145, 192,  11,   5,  99,
     17,  50,  20,  20,  18,  17,  83, 176,  11,   5, 113,  49,
     17,  17,  50,  55,  50,  49, 160,  10,   5,  84,  17,  50,
     53,  17,  50,  53, 176,  11,   5,  99,  17,  50,  65,  65,
     65,  49,  19, 176,  12,   5,  83,  33,  33,  17,  50,  50,
     50,  33,  19, 192,   9,   5,  86,  65,  68,  17,  65,  69,
    160,   9,   5,  86,  65,  68,  17,  65,  65, 224,  11,   5,
     99,  17,  50,  65,  35,  50,  49,  20, 160,  10,   5,  81,
     50,  50,  55,  50,  50,  49, 160,  10,   5,  85,  33,  65,
     65,  65,  65,  37, 160,  10,   5, 115,  65,  65,  66,  50,
     49,  19, 176,  15,   5,  81,  50,  33,  17,  17,  34,  49,
     17,  33,  33,  17,  49, 160,  10,   5,  81,  65,  65,  65,
     65,  65,  69, 160,  13,   5,  81,  51,  19,  17,  18,  17,
     18,  50,  50,  49, 160,  12,   5,  81,  51,  35,  34,  17,
     18,  35,  35,  49, 160,  11,   5,  99,  17,  50,  50,  50,
     50,  49,  19, 176,  10,   5,  84,  17,  50,  53,  17,  65,
     65, 224,  12,   5,  99,  17,  50,  50,  50,  50,  49,  19,
     66,  80,  13,   5,  84,  17,  50,  53,  17,  17,  33,  33,
     17,  49, 160,  10,   5,  99,  17,  50,  83,  82,  49,  19,
    176,  10,   5,  85,  33,  65,  65,  65,  65,  65, 192,  11,
      5,  81,  50,  50,  50,  50,  50,  49,  19, 176,  13,   5,
     81,  50,  50,  49,  17,  17,  33,  17,  49,  65, 192,  13,
      5,  81,  50,  50,  50,  17,  18,  17,  19,  19,  49, 160,
     14,   5,  81,  50,  49,  17,  17,  49,  49,  17,  17,  50,
     49, 160,  12,   5,  81,  50,  49,  17,  17,  49,  65,  65,
     65, 192,  10,   5,  85,  65,  49,  49,  49,  49,  69, 160,
     11,   3,   4,  33,  33,  33,  33,  33,  33,  35,  48,  12,
      5,   1,  65,  81,  65,  81,  65,  81,  65,  81,  65,  12,
      5,   3,  65,  65,  65,  65,  65,  65,  65,  35, 112,  10,
      5,  33,  49,  17,  17,  49, 240, 240,  80,   6,   6,   0,
      6,   6,  96,   7,   4,   2,  49,  65, 240, 224,  10,   5,
    240,  21,  50,  50,  34,  18,  17, 160,  11,   5,   1,  65,
     65,  68,  17,  50,  50,  53, 176,   8,   5, 240,  21,  65,
     65,  84, 160,  11,   5,  65,  65,  65,  21,  50,  50,  49,
     20, 160,   8,   5, 240,  19,  17,  55,  83, 176,  11,   5,
     35,  17,  65,  52,  33,  65,  65,  65, 208,  10,   5, 240,
     21,  50,  50,  49,  20,  65,  19,  12,   5,   1,  65,  65,
     68,  17,  50,  50,  50,  49, 160,  10,   4,  17,  49,  98,
     49,  49,  49,  35, 144,  12,   5,  49,  65, 115,  65,  65,
     65,  65,  65,  19,  32,  15,   5,   1,  65,  65,  65,  33,
     17,  17,  34,  49,  17,  33,  33, 176,  11,   4,   2,  49,
     49,  49,  49,  49,  49,  35, 144,  13,   5, 242,  17,  17,
     17,  18,  17,  18,  17,  18,  49, 160,  10,   5, 241,  18,
     18,  34,  50,  50,  49, 160,  10,   5, 240,  19,  17,  50,
     50,  49,  19, 176,  10,   5, 244,  17,  50,  50,  53,  17,
     65,  64,  10,   5, 240,  21,  50,  50,  49,  20,  65,  65,
      9,   5, 241,  18,  18,  49,  65,  65, 224,   7,   5, 240,
     21,  83,  85, 176,  11,   5,  33,  65,  65,  37,  33,  65,
     65,  82, 160,  10,   5, 241,  50,  50,  50,  34,  18,  17,
    160,  11,   5, 242,  18,  17,  17,  33,  17,  49,  65, 192,
     13,   5, 241,  50,  17,  18,  17,  18,  17,  17,  17,  17,
    176,  12,   5, 241,  49,  17,  17,  49,  49,  17,  17,  49,
    160,  10,   5, 241,  50,  50,  50,  49,  20,  65,  19,   8,
      5, 245,  49,  49,  49,  53, 160,  12,   3,  33,  17,  33,
     33,  17,  49,  33,  33,  49,  48,  12,   3,   1,  33,  33,
     33,  33,  33,  33,  33,  33,  80,  12,   5,   1,  81,  65,
     65,  81,  49,  65,  65,  49, 144,  10,   5,  97,  49,  17,
     17,  49, 240, 240,  16,
};

const tFont g_sFontclean6x10 =
{
    //
    // The format of the font.
    //
    FONT_FMT_PIXEL_RLE,

    //
    // The maximum width of the font.
    //
    6,

    //
    // The height of the font.
    //
    10,

    //
    // The baseline of the font.
    //
    8,

    //
    // The offset to each character in the font.
    //
    {
           0,    5,   15,   25,   40,   50,   62,   75,
          83,   95,  107,  120,  129,  137,  143,  149,
         162,  175,  186,  198,  210,  223,  233,  245,
         256,  269,  281,  288,  297,  307,  313,  322,
         333,  344,  355,  365,  376,  388,  397,  406,
         417,  427,  437,  447,  462,  472,  485,  497,
         508,  518,  530,  543,  553,  563,  574,  587,
         600,  614,  626,  636,  647,  659,  671,  681,
         687,  694,  704,  715,  723,  734,  742,  753,
         763,  775,  785,  797,  812,  823,  836,  846,
         856,  866,  876,  885,  892,  903,  913,  924,
         937,  949,  959,  967,  979,  991, 1003,
    },

    //
    // A pointer to the actual font data
    //
    g_pui8clean6x10Data
};
