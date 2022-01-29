/* user and group to drop privileges to */
static const char *user  = "nobody";
static const char *group = "nobody";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "black",     /* after initialization */
	// [INPUT] =  "#005577",   /* during input */
	[INPUT] =  "#BF00BF",   /* during input */
	[FAILED] = "#CC3333",   /* wrong password */
	[CAPS] = "red",         /* CapsLock on */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;

/* default message */
// static const char * message = "Suckless: Software that sucks less.";
static const char * message = "Every knee will bow to Jesus Christ; every tongue will confess that He is King.";

/* text color */
static const char * text_color = "#ffffff";

/* text size (must be a valid size) */
static const char * font_name = "fixed";
// static const char * font_name = "-misc-fixed-medium-r-semicondensed--13-100-100-100-c-60-iso8859-1";
