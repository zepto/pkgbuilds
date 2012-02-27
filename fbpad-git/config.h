#define TAGS		"xnlhtr01uiva-"
#define TAGS_SAVED	""
#define SHELL		"bash"
#define MAIL		"mutt"
#define EDITOR		"vim"

#define TINYFONT	"/home/josiah/.fonts/DroidSansMono.tf"
#define TINYFONT_BOLD	"/home/josiah/.fonts/DroidSansMono.tf"

#define FGCOLOR		7
#define BGCOLOR		0

/* black */
#define COLOR0		0x3b3b3b
#define COLOR8		0x5d5d5d
/* red */
#define COLOR1		0xDE6951
#define COLOR9		0xc56a47
/* green */
#define COLOR2		0xbcda55
#define COLOR10		0x9dbf60
/* yellow */
#define COLOR3		0xE2A564
#define COLOR11		0xEC8A25
/* blue */
#define COLOR4		0x2187F6
#define COLOR12		0x5495DC
/* magenta */
#define COLOR5		0x875C8D
#define COLOR13		0xE41F66
/* cyan */
#define COLOR6		0x4390B1
#define COLOR14		0x276CC2
/* white */
#define COLOR7		0xd2d2d2
#define COLOR15		0xffffff

/* where to write the screen shot */
#define SCRSHOT		"/tmp/scr"

/* framebuffer depth */
typedef unsigned short fbval_t;

/* optimized version of fb_val() */
#define FB_VAL(r, g, b)	fb_val((r), (g), (b))
