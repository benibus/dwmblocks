//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/* Icon         Command                 Interval        Signal */
	{  "",          "mod_sysinfo",          5,              6      },
	{  "",          "mod_volume",           30,             5      },
	{  "",          "mod_battery",          10,             4      },
	{  "",          "mod_network",          10,             3      },
	{  "",          "mod_date",             10,             2      },
	{  "",          "mod_kernel",           60,             1      },
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
