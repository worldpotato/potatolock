/* user and group to drop privileges to */
static const char *user  = "worldpotato";
static const char *group = "worldpotato";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "#022222",     /* after initialization */
	[INPUT] =  "#033333",   /* during input */
	[FAILED] = "#aa0000",   /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;

/* time in seconds before the monitor shuts down */
static const int monitortime = 5;
