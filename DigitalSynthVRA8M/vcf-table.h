#pragma once

const uint8_t g_vcf_lpf_table_q_4_sqrt_2[] = {
   +31,   +0, -127,  +31,   +0, -127,  +31,   +0, -127,  +31,   +0, -127,
   +31,   +0, -127,  +33,   +0, -127,  +35,   +0, -127,  +37,   +0, -127,
   +39,   +0, -127,  +42,   +0, -127,  +44,   +0, -127,  +47,   +0, -127,
   +50,   +0, -126,  +53,   +0, -126,  +56,   +0, -126,  +59,   +0, -126,
   +63,   +0, -126,  +66,   +0, -126,  +70,   +0, -126,  +75,   +0, -126,
   +79,   +0, -126,  +84,   +0, -126,  +89,   +0, -125,  +94,   +0, -125,
   +99,   +0, -125, +105,   +0, -125, +112,   +0, -125, +118,   +0, -125,
  +125,   +0, -125, +133,   +0, -124, +140,   +0, -124, +149,   +0, -124,
  +157,   +0, -124, +167,   +0, -124, +176,   +0, -123, +187,   +0, -123,
  +198,   +0, -123, +209,   +0, -123, +222,   +0, -122, +235,   +0, -122,
  +249,   +0, -122,   +7,   +1, -122,  +23,   +1, -121,  +39,   +1, -121,
   +56,   +1, -121,  +74,   +1, -120,  +94,   +1, -120, +114,   +1, -119,
  +136,   +1, -119, +158,   +1, -119, +182,   +1, -118, +208,   +1, -118,
  +235,   +1, -117,   +7,   +2, -116,  +37,   +2, -116,  +69,   +2, -115,
  +103,   +2, -115, +138,   +2, -114, +176,   +2, -113, +215,   +2, -113,
    +1,   +3, -112,  +45,   +3, -111,  +92,   +3, -110, +141,   +3, -109,
  +193,   +3, -108, +248,   +3, -107,  +50,   +4, -106, +111,   +4, -105,
  +175,   +4, -104, +243,   +4, -103,  +58,   +5, -102, +134,   +5, -100,
  +213,   +5,  -99,  +41,   +6,  -97, +129,   +6,  -96, +222,   +6,  -94,
   +64,   +7,  -93, +167,   +7,  -91,  +19,   +8,  -89, +133,   +8,  -87,
  +253,   +8,  -85, +122,   +9,  -83, +255,   +9,  -81, +138,  +10,  -78,
   +28,  +11,  -76, +181,  +11,  -73,  +85,  +12,  -71, +254,  +12,  -68,
  +174,  +13,  -65, +103,  +14,  -62,  +41,  +15,  -59, +244,  +15,  -55,
  +200,  +16,  -52, +165,  +17,  -48, +140,  +18,  -45, +126,  +19,  -41,
  +121,  +20,  -37, +127,  +21,  -32, +144,  +22,  -28, +172,  +23,  -24,
  +211,  +24,  -19,   +5,  +26,  -14,  +67,  +27,   -9, +139,  +28,   -4,
  +223,  +29,   +1,  +62,  +31,   +7, +168,  +32,  +12,  +28,  +34,  +18,
  +154,  +35,  +24,  +34,  +37,  +30, +179,  +38,  +36,  +76,  +40,  +42,
  +236,  +41,  +49, +146,  +43,  +55,  +61,  +45,  +61, +234,  +46,  +68,
  +152,  +48,  +74,  +69,  +50,  +80, +238,  +51,  +87, +143,  +53,  +93,
   +38,  +55,  +98, +175,  +56, +104,  +37,  +58, +109, +132,  +59, +114,
  +198,  +60, +118, +198,  +60, +118, +198,  +60, +118, +198,  +60, +118,
};

const uint8_t g_vcf_lpf_table_q_2[] = {
   +31,   +0, -125,  +31,   +0, -125,  +31,   +0, -125,  +31,   +0, -125,
   +31,   +0, -125,  +33,   +0, -125,  +35,   +0, -125,  +37,   +0, -125,
   +39,   +0, -125,  +41,   +0, -125,  +44,   +0, -125,  +46,   +0, -124,
   +49,   +0, -124,  +52,   +0, -124,  +55,   +0, -124,  +58,   +0, -124,
   +61,   +0, -124,  +65,   +0, -123,  +69,   +0, -123,  +73,   +0, -123,
   +77,   +0, -123,  +82,   +0, -123,  +87,   +0, -123,  +92,   +0, -122,
   +97,   +0, -122, +103,   +0, -122, +109,   +0, -122, +115,   +0, -121,
  +122,   +0, -121, +129,   +0, -121, +136,   +0, -121, +144,   +0, -120,
  +153,   +0, -120, +161,   +0, -120, +171,   +0, -119, +181,   +0, -119,
  +191,   +0, -119, +202,   +0, -118, +214,   +0, -118, +226,   +0, -118,
  +239,   +0, -117, +253,   +0, -117,  +11,   +1, -116,  +27,   +1, -116,
   +43,   +1, -116,  +60,   +1, -115,  +78,   +1, -115,  +97,   +1, -114,
  +117,   +1, -113, +139,   +1, -113, +161,   +1, -112, +185,   +1, -112,
  +210,   +1, -111, +236,   +1, -110,   +8,   +2, -110,  +37,   +2, -109,
   +68,   +2, -108, +100,   +2, -107, +134,   +2, -107, +171,   +2, -106,
  +209,   +2, -105, +249,   +2, -104,  +35,   +3, -103,  +80,   +3, -102,
  +126,   +3, -101, +176,   +3, -100, +228,   +3,  -99,  +26,   +4,  -97,
   +84,   +4,  -96, +144,   +4,  -95, +208,   +4,  -94,  +19,   +5,  -92,
   +89,   +5,  -91, +163,   +5,  -89, +241,   +5,  -88,  +66,   +6,  -86,
  +152,   +6,  -84, +242,   +6,  -82,  +81,   +7,  -81, +180,   +7,  -79,
   +28,   +8,  -77, +137,   +8,  -75, +251,   +8,  -72, +115,   +9,  -70,
  +240,   +9,  -68, +116,  +10,  -65, +254,  +10,  -63, +142,  +11,  -60,
   +37,  +12,  -58, +195,  +12,  -55, +104,  +13,  -52,  +21,  +14,  -49,
  +201,  +14,  -46, +133,  +15,  -43,  +74,  +16,  -39,  +24,  +17,  -36,
  +238,  +17,  -32, +205,  +18,  -28, +182,  +19,  -25, +169,  +20,  -21,
  +166,  +21,  -17, +173,  +22,  -12, +190,  +23,   -8, +219,  +24,   -3,
    +2,  +26,   +1,  +53,  +27,   +6, +116,  +28,  +11, +190,  +29,  +16,
   +21,  +31,  +21, +119,  +32,  +26, +230,  +33,  +32,  +96,  +35,  +37,
  +231,  +36,  +43, +122,  +38,  +49,  +24,  +40,  +54, +193,  +41,  +60,
  +118,  +43,  +66,  +52,  +45,  +72, +251,  +46,  +78, +201,  +48,  +84,
  +157,  +50,  +90, +117,  +52,  +96,  +78,  +54, +102,  +36,  +56, +107,
  +244,  +57, +113, +244,  +57, +113, +244,  +57, +113, +244,  +57, +113,
};

const uint8_t g_vcf_lpf_table_q_1_over_sqrt_2[] = {
   +30,   +0, -121,  +30,   +0, -121,  +30,   +0, -121,  +30,   +0, -121,
   +30,   +0, -121,  +31,   +0, -120,  +33,   +0, -120,  +35,   +0, -120,
   +37,   +0, -120,  +39,   +0, -119,  +42,   +0, -119,  +44,   +0, -119,
   +47,   +0, -118,  +49,   +0, -118,  +52,   +0, -118,  +55,   +0, -118,
   +58,   +0, -117,  +62,   +0, -117,  +65,   +0, -117,  +69,   +0, -116,
   +73,   +0, -116,  +77,   +0, -115,  +81,   +0, -115,  +86,   +0, -115,
   +91,   +0, -114,  +96,   +0, -114, +101,   +0, -113, +107,   +0, -113,
  +113,   +0, -113, +119,   +0, -112, +126,   +0, -112, +133,   +0, -111,
  +140,   +0, -111, +148,   +0, -110, +157,   +0, -110, +165,   +0, -109,
  +174,   +0, -108, +184,   +0, -108, +194,   +0, -107, +205,   +0, -107,
  +216,   +0, -106, +228,   +0, -105, +240,   +0, -105, +254,   +0, -104,
   +11,   +1, -103,  +26,   +1, -103,  +41,   +1, -102,  +57,   +1, -101,
   +74,   +1, -100,  +92,   +1, -100, +110,   +1,  -99, +130,   +1,  -98,
  +150,   +1,  -97, +172,   +1,  -96, +194,   +1,  -95, +218,   +1,  -94,
  +243,   +1,  -93,  +13,   +2,  -92,  +41,   +2,  -91,  +70,   +2,  -90,
  +100,   +2,  -89, +132,   +2,  -88, +165,   +2,  -87, +200,   +2,  -86,
  +236,   +2,  -84,  +18,   +3,  -83,  +58,   +3,  -82, +100,   +3,  -81,
  +144,   +3,  -79, +190,   +3,  -78, +238,   +3,  -76,  +32,   +4,  -75,
   +85,   +4,  -74, +140,   +4,  -72, +197,   +4,  -70,   +2,   +5,  -69,
   +65,   +5,  -67, +130,   +5,  -66, +199,   +5,  -64,  +15,   +6,  -62,
   +90,   +6,  -60, +168,   +6,  -58, +250,   +6,  -56,  +80,   +7,  -54,
  +169,   +7,  -52,   +6,   +8,  -50, +103,   +8,  -48, +205,   +8,  -46,
   +55,   +9,  -44, +166,   +9,  -42,  +26,  +10,  -39, +146,  +10,  -37,
   +17,  +11,  -34, +148,  +11,  -32,  +30,  +12,  -29, +174,  +12,  -27,
   +68,  +13,  -24, +225,  +13,  -21, +133,  +14,  -18,  +49,  +15,  -15,
  +228,  +15,  -12, +160,  +16,   -9, +101,  +17,   -6,  +51,  +18,   -3,
   +12,  +19,   +1, +238,  +19,   +4, +220,  +20,   +8, +215,  +21,  +11,
  +222,  +22,  +15, +243,  +23,  +19,  +23,  +25,  +23,  +75,  +26,  +28,
  +144,  +27,  +32, +233,  +28,  +36,  +86,  +30,  +41, +217,  +31,  +46,
  +117,  +33,  +51,  +44,  +35,  +56,   +1,  +37,  +62, +246,  +38,  +67,
   +15,  +41,  +73,  +81,  +43,  +79, +193,  +45,  +86,  +98,  +48,  +92,
   +60,  +51,  +99,  +60,  +51,  +99,  +60,  +51,  +99,  +60,  +51,  +99,
};

