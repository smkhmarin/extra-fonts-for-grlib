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
//     Style: Courier
//     Size: 6x10
//     Bold: yes
//     Italic: no
//     Memory usage: 1260 bytes
//
//*****************************************************************************

static const uint8_t g_pui8courier6x10bData[1059] =
{
      5,   6,   0,   7,  64,  10,   6,  98,  66,  66,  66,  66,
    162, 240,  16,  11,   6, 193,  17,  49,  17,  49,  17, 240,
    240,  48,  15,   6, 113,  17,  49,  17,  37,  33,  17,  37,
     33,  17,  49,  17, 224,  13,   6, 129,  68,  18,  33,  20,
     67,  17,  34,  20,  65, 144,  13,   6, 195,  49,  17,  17,
     20,  52,  17,  17,  17,  51, 208,   9,   6, 227,  34,  82,
     55,  18,  37, 192,   8,   6, 193,  81,  81, 240, 240,  80,
     11,   6, 129,  65,  66,  66,  66,  66,  81,  97, 144,  11,
      6,  97,  97,  82,  66,  66,  66,  65,  65, 176,  10,   6,
    129,  52,  50,  49,  33, 240, 240,  32,   9,   6, 225,  81,
     53,  49,  81, 240,  96,   8,   6, 240, 240, 210,  81,  50,
     64,   7,   6, 240, 149, 240, 240,  16,   7,   6, 240, 240,
    194, 240,  16,  11,   6, 145,  66,  66,  50,  66,  50,  66,
     65, 176,  15,   6, 115,  34,  18,  18,  18,  18,  18,  18,
     18,  18,  18,  35, 224,  10,   6, 130,  36,  66,  66,  66,
     66,  38, 192,  12,   6, 115,  34,  18,  66,  50,  50,  50,
     18,  21, 208,  12,   6, 115,  34,  18,  66,  35,  82,  18,
     18,  35, 224,  12,   6, 146,  51,  33,  18,  18,  18,  22,
     50,  66, 208,  12,   6, 101,  18,  68,  34,  18,  66,  17,
     34,  20, 224,  13,   6, 115,  34,  18,  18,  68,  34,  18,
     18,  18,  35, 224,  11,   6, 101,  18,  18,  66,  50,  66,
     50,  66, 240,  14,   6, 115,  34,  18,  18,  18,  35,  34,
     18,  18,  18,  35, 224,  13,   6, 115,  34,  18,  18,  18,
     36,  66,  18,  18,  35, 224,   8,   6, 240, 146, 240,  18,
    240,  16,   9,   6, 240, 162, 240,  18,  81,  50,  64,   9,
      6, 226,  50,  50,  82,  82, 240,  80,   7,   6, 240,  53,
    117, 240, 160,   9,   6, 194,  82,  82,  50,  50, 240, 112,
      9,   6, 211,  33,  34,  50,  50, 162, 240,  17,   6, 115,
     34,  33,  17,  34,  17,  17,  17,  17,  17,  17,  17,  37,
     83, 128,  11,   6, 212,  51,  49,  17,  37,  18,  21,  18,
    192,  11,   6, 197,  34,  18,  20,  34,  18,  18,  23, 208,
     11,   6, 212,  18,  18,  18,  66,  66,  18,  35, 224,  12,
      6, 197,  34,  18,  18,  18,  18,  18,  18,  23, 208,  10,
      6, 198,  18,  33,  20,  34,  66,  24, 192,  10,   6, 198,
     18,  33,  20,  34,  66,  52, 224,  11,   6, 211,  34,  18,
     18,  69,  18,  18,  36, 208,  14,   6, 195,  18,  18,  18,
     21,  18,  18,  18,  18,  18,  18, 192,   9,   6, 196,  50,
     66,  66,  66,  52, 224,  11,   6, 213,  50,  66,  18,  18,
     18,  18,  35, 224,  12,   6, 195,  18,  18,  17,  35,  52,
     34,  22,  17, 192,   9,   6, 196,  50,  66,  66,  66,  24,
    192,  15,   6, 194,  49,  18,  18,  18,  18,  21,  17,  17,
     19,  17,  17, 192,  13,   6, 195,  18,  18,  33,  19,  17,
     21,  18,  21,  18, 192,  13,   6, 211,  34,  18,  18,  18,
     18,  18,  18,  18,  35, 224,  11,   6, 197,  34,  18,  18,
     18,  20,  34,  52, 224,  14,   6, 211,  34,  18,  18,  18,
     18,  18,  18,  18,  35,  82, 112,  12,   6, 197,  34,  18,
     18,  18,  20,  34,  22,  17, 192,  11,   6, 212,  18,  33,
     20,  67,  17,  34,  20, 224,  10,   6, 199,  18,  17,  34,
     66,  66,  52, 208,  14,   6, 195,  18,  18,  18,  18,  18,
     18,  18,  18,  18,  35, 208,  12,   6, 195,  18,  18,  18,
     33,  17,  51,  51,  65, 224,  14,   6, 194,  17,  17,  17,
     17,  17,  21,  21,  35,  49,  17, 208,  11,   6, 194,  34,
     20,  50,  66,  52,  18,  34, 192,  11,   6, 195,  33,  18,
     33,  36,  50,  66,  52, 192,  11,   6, 197,  18,  18,  50,
     50,  50,  18,  21, 208,  11,   6,  99,  50,  66,  66,  66,
     66,  66,  67, 144,  11,   6,  97,  82,  66,  82,  66,  82,
     66,  81, 128,  11,   6,  99,  66,  66,  66,  66,  66,  66,
     51, 144,   9,   6, 130,  52,  18,  34, 240, 240,  96,   5,
      6,   0,   6, 102,   7,   6,   1,  97,   0,   6,  64,  11,
      6, 240,  67,  34,  18,  36,  18,  18,  22, 192,  12,   6,
     99,  66,  68,  34,  18,  18,  18,  18,  23, 208,  11,   6,
    240,  67,  34,  18,  18,  66,  18,  35, 224,  13,   6, 131,
     66,  36,  18,  18,  18,  18,  18,  18,  37, 192,  10,   6,
    240,  67,  34,  18,  21,  18,  84, 208,  10,   6, 131,  34,
     53,  34,  66,  66,  52, 224,  14,   6, 240,  66,  20,  18,
     18,  18,  18,  18,  36,  66,  20,  32,  14,   6,  99,  66,
     68,  34,  18,  18,  18,  18,  18,  18,  18, 192,   9,   6,
    130, 147,  66,  66,  66,  38, 192,  11,   6, 130, 132,  66,
     66,  66,  66,  66,  35,  48,  12,   6,  99,  66,  66,  18,
     20,  35,  52,  34,  18, 192,  10,   6, 115,  66,  66,  66,
     66,  66,  38, 192,  15,   6, 240,  53,  37,  17,  17,  17,
     17,  17,  17,  17,  17,  17, 192,  14,   6, 240,  50,  18,
     34,  18,  18,  18,  18,  18,  18,  18, 192,  12,   6, 240,
     67,  34,  18,  18,  18,  18,  18,  35, 224,  14,   6, 240,
     53,  34,  18,  18,  18,  18,  18,  20,  34,  52,  32,  13,
      6, 240,  66,  20,  18,  18,  18,  18,  18,  36,  66,  52,
     11,   6, 240,  50,  19,  19,  17,  18,  66,  52, 224,   8,
      6, 240,  68,  19,  68,  72, 208,  11,   6, 114,  66,  53,
     34,  66,  66,  18,  35, 208,  13,   6, 240,  51,  18,  18,
     18,  18,  18,  18,  18,  36, 192,  11,   6, 240,  51,  18,
     18,  18,  35,  51,  65, 224,  14,   6, 240,  50,  17,  17,
     17,  17,  17,  21,  36,  33,  17, 208,  11,   6, 240,  51,
     18,  20,  50,  52,  18,  19, 192,  15,   6, 240,  51,  18,
     18,  18,  18,  18,  33,  17,  51,  50,  36,  32,   9,   6,
    240,  69,  50,  50,  50,  24, 192,  11,   6, 130,  50,  66,
     50,  82,  66,  66,  82, 128,  12,   6,  98,  66,  66,  66,
     66,  66,  66,  66,  66,  64,  11,   6,  98,  82,  66,  82,
     50,  66,  66,  50, 160,  10,   6, 240,  66,  17,  17,  18,
    240, 240,  32,
};

const tFont g_sFontcourier6x10b =
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
           0,    5,   15,   26,   41,   54,   67,   76,
          84,   95,  106,  116,  125,  133,  140,  147,
         158,  173,  183,  195,  207,  219,  231,  244,
         255,  269,  282,  290,  299,  308,  315,  324,
         333,  350,  361,  372,  383,  395,  405,  415,
         426,  440,  449,  460,  472,  481,  496,  509,
         522,  533,  547,  559,  570,  580,  594,  606,
         620,  631,  642,  653,  664,  675,  686,  695,
         700,  707,  718,  730,  741,  754,  764,  774,
         788,  802,  811,  822,  834,  844,  859,  873,
         885,  899,  912,  923,  931,  942,  955,  966,
         980,  991, 1006, 1015, 1026, 1038, 1049,
    },

    //
    // A pointer to the actual font data
    //
    g_pui8courier6x10bData
};