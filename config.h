/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
static int centered = 1;
static int min_width = 500;
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"Terminus:size=16"
};
static const char *prompt      = "run:";      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
				  /*     fg         bg       */
	[SchemeNorm] = { "#91ffff", "#000b1e" },
	[SchemeSel] = { "#333333", "#91ffff" },
	[SchemeOut] = { "#bbbbbb", "#000b1e" },
	[SchemeHp] = { "#c6c6c6", "#00ddf4" },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 10;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

static const unsigned int border_width = 1;
