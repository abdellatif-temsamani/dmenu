/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1; /* -b  option; if 0, dmenu appears at bottom     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {"DejaVuSansMono Nerd Font Mono:size=10"};
static const char *prompt =
    NULL; /* -p  option; prompt to the left of input field */
static const unsigned int alpha = 0x99; /* Amount of opacity. 0xff is opaque */
static const char *colors[SchemeLast][2] = {
    /*     fg         bg       */
    [SchemeNorm] = {"#7aa2f7", "#15161e"},
    [SchemeSel] = {"#15161e", "#7aa2f7"},
    [SchemeOut] = {"#15161e", "#7aa2f7"},
};

static const unsigned int alphas[SchemeLast][2] = {
    [SchemeNorm] = {OPAQUE, alpha},
    [SchemeSel] = {OPAQUE, alpha},
    [SchemeOut] = {OPAQUE, alpha},
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines = 20;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
