/*******************************************************************************
 *
 *	Font metric data for Palatino Italic
 *
 *	Copyright 2001 Ian Pilcher
 *
 *
 *	See dlls/wineps/data/COPYRIGHTS for font copyright information.
 *
 */

#include "psdrv.h"
#include "data/agl.h"


/*
 *  Glyph metrics
 */

static const AFMMETRICS metrics[228] =
{
    {  32, 0x0020,  250, GN_space },
    {  33, 0x0021,  333, GN_exclam },
    {  34, 0x0022,  500, GN_quotedbl },
    {  35, 0x0023,  500, GN_numbersign },
    {  36, 0x0024,  500, GN_dollar },
    {  37, 0x0025,  889, GN_percent },
    {  38, 0x0026,  778, GN_ampersand },
    { 169, 0x0027,  333, GN_quotesingle },
    {  40, 0x0028,  333, GN_parenleft },
    {  41, 0x0029,  333, GN_parenright },
    {  42, 0x002a,  389, GN_asterisk },
    {  43, 0x002b,  606, GN_plus },
    {  44, 0x002c,  250, GN_comma },
    {  45, 0x002d,  333, GN_hyphen },
    {  46, 0x002e,  250, GN_period },
    {  47, 0x002f,  296, GN_slash },
    {  48, 0x0030,  500, GN_zero },
    {  49, 0x0031,  500, GN_one },
    {  50, 0x0032,  500, GN_two },
    {  51, 0x0033,  500, GN_three },
    {  52, 0x0034,  500, GN_four },
    {  53, 0x0035,  500, GN_five },
    {  54, 0x0036,  500, GN_six },
    {  55, 0x0037,  500, GN_seven },
    {  56, 0x0038,  500, GN_eight },
    {  57, 0x0039,  500, GN_nine },
    {  58, 0x003a,  250, GN_colon },
    {  59, 0x003b,  250, GN_semicolon },
    {  60, 0x003c,  606, GN_less },
    {  61, 0x003d,  606, GN_equal },
    {  62, 0x003e,  606, GN_greater },
    {  63, 0x003f,  500, GN_question },
    {  64, 0x0040,  747, GN_at },
    {  65, 0x0041,  722, GN_A },
    {  66, 0x0042,  611, GN_B },
    {  67, 0x0043,  667, GN_C },
    {  68, 0x0044,  778, GN_D },
    {  69, 0x0045,  611, GN_E },
    {  70, 0x0046,  556, GN_F },
    {  71, 0x0047,  722, GN_G },
    {  72, 0x0048,  778, GN_H },
    {  73, 0x0049,  333, GN_I },
    {  74, 0x004a,  333, GN_J },
    {  75, 0x004b,  667, GN_K },
    {  76, 0x004c,  556, GN_L },
    {  77, 0x004d,  944, GN_M },
    {  78, 0x004e,  778, GN_N },
    {  79, 0x004f,  778, GN_O },
    {  80, 0x0050,  611, GN_P },
    {  81, 0x0051,  778, GN_Q },
    {  82, 0x0052,  667, GN_R },
    {  83, 0x0053,  556, GN_S },
    {  84, 0x0054,  611, GN_T },
    {  85, 0x0055,  778, GN_U },
    {  86, 0x0056,  722, GN_V },
    {  87, 0x0057,  944, GN_W },
    {  88, 0x0058,  722, GN_X },
    {  89, 0x0059,  667, GN_Y },
    {  90, 0x005a,  667, GN_Z },
    {  91, 0x005b,  333, GN_bracketleft },
    {  92, 0x005c,  606, GN_backslash },
    {  93, 0x005d,  333, GN_bracketright },
    {  94, 0x005e,  606, GN_asciicircum },
    {  95, 0x005f,  500, GN_underscore },
    { 193, 0x0060,  333, GN_grave },
    {  97, 0x0061,  444, GN_a },
    {  98, 0x0062,  463, GN_b },
    {  99, 0x0063,  407, GN_c },
    { 100, 0x0064,  500, GN_d },
    { 101, 0x0065,  389, GN_e },
    { 102, 0x0066,  278, GN_f },
    { 103, 0x0067,  500, GN_g },
    { 104, 0x0068,  500, GN_h },
    { 105, 0x0069,  278, GN_i },
    { 106, 0x006a,  278, GN_j },
    { 107, 0x006b,  444, GN_k },
    { 108, 0x006c,  278, GN_l },
    { 109, 0x006d,  778, GN_m },
    { 110, 0x006e,  556, GN_n },
    { 111, 0x006f,  444, GN_o },
    { 112, 0x0070,  500, GN_p },
    { 113, 0x0071,  463, GN_q },
    { 114, 0x0072,  389, GN_r },
    { 115, 0x0073,  389, GN_s },
    { 116, 0x0074,  333, GN_t },
    { 117, 0x0075,  556, GN_u },
    { 118, 0x0076,  500, GN_v },
    { 119, 0x0077,  722, GN_w },
    { 120, 0x0078,  500, GN_x },
    { 121, 0x0079,  500, GN_y },
    { 122, 0x007a,  444, GN_z },
    { 123, 0x007b,  333, GN_braceleft },
    { 124, 0x007c,  606, GN_bar },
    { 125, 0x007d,  333, GN_braceright },
    { 126, 0x007e,  606, GN_asciitilde },
    { 161, 0x00a1,  333, GN_exclamdown },
    { 162, 0x00a2,  500, GN_cent },
    { 163, 0x00a3,  500, GN_sterling },
    { 168, 0x00a4,  500, GN_currency },
    { 165, 0x00a5,  500, GN_yen },
    {  -1, 0x00a6,  606, GN_brokenbar },
    { 167, 0x00a7,  500, GN_section },
    { 200, 0x00a8,  333, GN_dieresis },
    {  -1, 0x00a9,  747, GN_copyright },
    { 227, 0x00aa,  333, GN_ordfeminine },
    { 171, 0x00ab,  500, GN_guillemotleft },
    {  -1, 0x00ac,  606, GN_logicalnot },
    {  -1, 0x00ae,  747, GN_registered },
    {  -1, 0x00b0,  400, GN_degree },
    {  -1, 0x00b1,  606, GN_plusminus },
    {  -1, 0x00b2,  300, GN_twosuperior },
    {  -1, 0x00b3,  300, GN_threesuperior },
    { 194, 0x00b4,  333, GN_acute },
    { 182, 0x00b6,  500, GN_paragraph },
    { 180, 0x00b7,  250, GN_periodcentered },
    { 203, 0x00b8,  333, GN_cedilla },
    {  -1, 0x00b9,  300, GN_onesuperior },
    { 235, 0x00ba,  333, GN_ordmasculine },
    { 187, 0x00bb,  500, GN_guillemotright },
    {  -1, 0x00bc,  750, GN_onequarter },
    {  -1, 0x00bd,  750, GN_onehalf },
    {  -1, 0x00be,  750, GN_threequarters },
    { 191, 0x00bf,  500, GN_questiondown },
    {  -1, 0x00c0,  722, GN_Agrave },
    {  -1, 0x00c1,  722, GN_Aacute },
    {  -1, 0x00c2,  722, GN_Acircumflex },
    {  -1, 0x00c3,  722, GN_Atilde },
    {  -1, 0x00c4,  722, GN_Adieresis },
    {  -1, 0x00c5,  722, GN_Aring },
    { 225, 0x00c6,  941, GN_AE },
    {  -1, 0x00c7,  667, GN_Ccedilla },
    {  -1, 0x00c8,  611, GN_Egrave },
    {  -1, 0x00c9,  611, GN_Eacute },
    {  -1, 0x00ca,  611, GN_Ecircumflex },
    {  -1, 0x00cb,  611, GN_Edieresis },
    {  -1, 0x00cc,  333, GN_Igrave },
    {  -1, 0x00cd,  333, GN_Iacute },
    {  -1, 0x00ce,  333, GN_Icircumflex },
    {  -1, 0x00cf,  333, GN_Idieresis },
    {  -1, 0x00d0,  778, GN_Eth },
    {  -1, 0x00d1,  778, GN_Ntilde },
    {  -1, 0x00d2,  778, GN_Ograve },
    {  -1, 0x00d3,  778, GN_Oacute },
    {  -1, 0x00d4,  778, GN_Ocircumflex },
    {  -1, 0x00d5,  778, GN_Otilde },
    {  -1, 0x00d6,  778, GN_Odieresis },
    {  -1, 0x00d7,  606, GN_multiply },
    { 233, 0x00d8,  778, GN_Oslash },
    {  -1, 0x00d9,  778, GN_Ugrave },
    {  -1, 0x00da,  778, GN_Uacute },
    {  -1, 0x00db,  778, GN_Ucircumflex },
    {  -1, 0x00dc,  778, GN_Udieresis },
    {  -1, 0x00dd,  667, GN_Yacute },
    {  -1, 0x00de,  611, GN_Thorn },
    { 251, 0x00df,  500, GN_germandbls },
    {  -1, 0x00e0,  444, GN_agrave },
    {  -1, 0x00e1,  444, GN_aacute },
    {  -1, 0x00e2,  444, GN_acircumflex },
    {  -1, 0x00e3,  444, GN_atilde },
    {  -1, 0x00e4,  444, GN_adieresis },
    {  -1, 0x00e5,  444, GN_aring },
    { 241, 0x00e6,  638, GN_ae },
    {  -1, 0x00e7,  407, GN_ccedilla },
    {  -1, 0x00e8,  389, GN_egrave },
    {  -1, 0x00e9,  389, GN_eacute },
    {  -1, 0x00ea,  389, GN_ecircumflex },
    {  -1, 0x00eb,  389, GN_edieresis },
    {  -1, 0x00ec,  278, GN_igrave },
    {  -1, 0x00ed,  278, GN_iacute },
    {  -1, 0x00ee,  278, GN_icircumflex },
    {  -1, 0x00ef,  278, GN_idieresis },
    {  -1, 0x00f0,  444, GN_eth },
    {  -1, 0x00f1,  556, GN_ntilde },
    {  -1, 0x00f2,  444, GN_ograve },
    {  -1, 0x00f3,  444, GN_oacute },
    {  -1, 0x00f4,  444, GN_ocircumflex },
    {  -1, 0x00f5,  444, GN_otilde },
    {  -1, 0x00f6,  444, GN_odieresis },
    {  -1, 0x00f7,  606, GN_divide },
    { 249, 0x00f8,  444, GN_oslash },
    {  -1, 0x00f9,  556, GN_ugrave },
    {  -1, 0x00fa,  556, GN_uacute },
    {  -1, 0x00fb,  556, GN_ucircumflex },
    {  -1, 0x00fc,  556, GN_udieresis },
    {  -1, 0x00fd,  500, GN_yacute },
    {  -1, 0x00fe,  500, GN_thorn },
    {  -1, 0x00ff,  500, GN_ydieresis },
    { 245, 0x0131,  278, GN_dotlessi },
    { 232, 0x0141,  556, GN_Lslash },
    { 248, 0x0142,  278, GN_lslash },
    { 234, 0x0152, 1028, GN_OE },
    { 250, 0x0153,  669, GN_oe },
    {  -1, 0x0160,  556, GN_Scaron },
    {  -1, 0x0161,  389, GN_scaron },
    {  -1, 0x0178,  667, GN_Ydieresis },
    {  -1, 0x017d,  667, GN_Zcaron },
    {  -1, 0x017e,  444, GN_zcaron },
    { 166, 0x0192,  500, GN_florin },
    { 195, 0x02c6,  333, GN_circumflex },
    { 207, 0x02c7,  333, GN_caron },
    { 197, 0x02c9,  333, GN_macron },
    { 198, 0x02d8,  333, GN_breve },
    { 199, 0x02d9,  333, GN_dotaccent },
    { 202, 0x02da,  333, GN_ring },
    { 206, 0x02db,  333, GN_ogonek },
    { 196, 0x02dc,  333, GN_tilde },
    { 205, 0x02dd,  333, GN_hungarumlaut },
    {  -1, 0x03bc,  556, GN_mu },
    { 177, 0x2013,  500, GN_endash },
    { 208, 0x2014, 1000, GN_emdash },
    {  96, 0x2018,  278, GN_quoteleft },
    {  39, 0x2019,  278, GN_quoteright },
    { 184, 0x201a,  278, GN_quotesinglbase },
    { 170, 0x201c,  500, GN_quotedblleft },
    { 186, 0x201d,  500, GN_quotedblright },
    { 185, 0x201e,  500, GN_quotedblbase },
    { 178, 0x2020,  500, GN_dagger },
    { 179, 0x2021,  500, GN_daggerdbl },
    { 183, 0x2022,  500, GN_bullet },
    { 188, 0x2026, 1000, GN_ellipsis },
    { 189, 0x2030, 1000, GN_perthousand },
    { 172, 0x2039,  333, GN_guilsinglleft },
    { 173, 0x203a,  333, GN_guilsinglright },
    {  -1, 0x2122, 1000, GN_trademark },
    {  -1, 0x2212,  606, GN_minus },
    { 164, 0x2215,  167, GN_fraction },
    { 174, 0xfb01,  528, GN_fi },
    { 175, 0xfb02,  545, GN_fl }
};


/*
 *  Font metrics
 */

const AFM PSDRV_Palatino_Italic =
{
    "Palatino-Italic",			    /* FontName */
    L"Palatino Italic",			    /* FullName */
    L"Palatino",			    /* FamilyName */
    L"AdobeStandardEncoding",		    /* EncodingScheme */
    FW_NORMAL,				    /* Weight */
    -10,				    /* ItalicAngle */
    FALSE,				    /* IsFixedPitch */
    -100,				    /* UnderlinePosition */
    50,					    /* UnderlineThickness */
    { -170, -276, 1010, 918 },		    /* FontBBox */
    733,				    /* Ascender */
    -276,				    /* Descender */
    {
	1000,				    /* WinMetrics.usUnitsPerEm */
	923,				    /* WinMetrics.sAscender */
	-282,				    /* WinMetrics.sDescender */
	0,				    /* WinMetrics.sLineGap */
	401,				    /* WinMetrics.sAvgCharWidth */
	725,				    /* WinMetrics.sTypoAscender */
	-280,				    /* WinMetrics.sTypoDescender */
	65,				    /* WinMetrics.sTypoLineGap */
	922,				    /* WinMetrics.usWinAscent */
	280				    /* WinMetrics.usWinDescent */
    },
    228,				    /* NumofMetrics */
    metrics				    /* Metrics */
};
