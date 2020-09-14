//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/* Icon         Command                 Interval        Signal */
	{  "",          "mod_hardware",         5,              0      },
	{  "",          "mod_volume",           30,             8      },
	{  "",          "mod_battery",          10,             7      },
	{  "",          "mod_internet",         10,             9      },
	{  "",          "mod_clock",            10,             0      },
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
