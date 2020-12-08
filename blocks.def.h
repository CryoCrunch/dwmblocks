//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{" ", "/home/jeff/.local/bin/checkvic",	30,		0},
	{" ", "/home/jeff/.local/bin/checkwifi",	30,		0},
	{" ", "mpstat | grep all | awk '{print $3}'",	10,		0},
	{" ", "/home/jeff/.local/bin/checkmem",	10,		0},

	{" ", "date '+(%a)%d/%m/%y %H:%M'",		60,		0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
