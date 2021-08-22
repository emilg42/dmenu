/*        __                          
 *   ____/ /___ ___  ___  ____  __  __
 *  / __  / __ `__ \/ _ \/ __ \/ / / /
 * / /_/ / / / / / /  __/ / / / /_/ / 
 * \__,_/_/ /_/ /_/\___/_/ /_/\__,_/  
 *
 * Applied Patches:
 * - border (https://tools.suckless.org/dmenu/patches/border)
 * - center (https://tools.suckless.org/dmenu/patches/center)
 * - highlight (https://tools.suckless.org/dmenu/patches/highlight)
 * - lineheight (https://tools.suckless.org/dmenu/patches/line-height)
 * - alpha (https://tools.suckless.org/dmenu/patches/alpha/)
 * - numbers (https://tools.suckless.org/dmenu/patches/numbers/)
 *
 */                                 

/* See LICENSE file for copyright and license details. */

/* appearance */
static int topbar                      = 1;       /* -b  option; if 0, dmenu appears at bottom     */
static const unsigned int alpha        = 0xBE;	  /* transparency value (see alpha patch)          */
static unsigned int lines              = 12; 	  /* -l option; otherwise vertical 				   */
static unsigned int lineheight         = 24; 	  /* -h option; height of a menu line              */
static unsigned int min_lineheight     = 24;	  /* minimum height: applies as lower threshold    */
static const unsigned int border_width = 3; 	  /* size of the window border 					   */
static const char *prompt              = NULL;    /* -p  option; prompt to the left of input field */
static const char worddelimiters[] = " ";		  /* non-word characters, such as: " /?\"&[]"	   */

static const char *fonts[]             = {"Noto Sans Mono:style=Bold:size=13:antialias=true:autohint=true",
                                          "consolas:size=15:antialias=true:autohint=true"};


static const char *colors[SchemeLast][2] = {
	/* color scheme           fg         bg        */
	[SchemeNorm]          = { "#a9a9a9", "#1e1e1e" },
	[SchemeSel]           = { "#a9a9a9", "#004763" },
	[SchemeSelHighlight]  = { "#de935f", "#004763" },
	[SchemeNormHighlight] = { "#de935f", "#1e1e1e" },
	[SchemeOut]           = { "#000000", "#1e1e1e" },
};

static const unsigned int alphas[SchemeLast][2] = {
	[SchemeNorm] = { OPAQUE, alpha },
	[SchemeSel]  = { OPAQUE, alpha },
	[SchemeOut]  = { OPAQUE, alpha },
};


