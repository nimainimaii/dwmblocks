//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"",    "printf ' ' && sb_battery",               5,               3},
	{"",                      "sb_volume",               0,              10},
	{"",             "sb_network_traffic",               1,               1},
	{"",                    "sb_internet",               5,               4},
	{"",                       "sb_clock",              60,               1},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
