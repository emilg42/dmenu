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
 * - alpha (https://tools.suckless.org/dmenu/patches/alpha)
 * - numbers (https://tools.suckless.org/dmenu/patches/numbers)
 * - highpriority (https://tools.suckless.org/dmenu/patches/highpriority)
 * - case-insensivitive (https://tools.suckless.org/dmenu/patches/case-insensitive)
 *
 */                                 

/* See LICENSE file for copyright and license details. */

/* appearance */
static int topbar                      = 1;       /* -b  option; if 0, dmenu appears at bottom     */
static const unsigned int alpha        = 0xBE;	  /* transparency value (see alpha patch)          */
static unsigned int lines              = 12; 	  /* -l option; otherwise vertical                 */
static unsigned int lineheight         = 24; 	  /* -h option; height of a menu line              */
static unsigned int min_lineheight     = 24;	  /* minimum height: applies as lower threshold    */
static const unsigned int border_width = 3; 	  /* size of the window border                     */
static const char *prompt              = NULL;    /* -p  option; prompt to the left of input field */
static const char worddelimiters[]     = " ";     /* non-word characters, such as: " /?\"&[]"      */

static const char *fonts[]          = { "JetBrains Mono:style=Bold:size=14:antialias=true" };


static const char *colors[SchemeLast][2] = {
	/* color scheme           fg         bg        */
	[SchemeNorm]          = { "#9197A1", "#101b21" },
	[SchemeSel]           = { "#9197A1", "#22577A" },
	[SchemeSelHighlight]  = { "#de935f", "#22577A" },
	[SchemeNormHighlight] = { "#de935f", "#101b21" },
	[SchemeOut]           = { "#000000", "#101b21" },
	[SchemeHp]            = { "#a54242", "#101b21" }
};

static const unsigned int alphas[SchemeLast][2] = {
	[SchemeNorm] = { OPAQUE, alpha },
	[SchemeSel]  = { OPAQUE, alpha },
	[SchemeOut]  = { OPAQUE, alpha },
};


