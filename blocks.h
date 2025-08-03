//Modify this file to change what commands output to your statusbar, and recompile using the make command.

#define NORM   "\x01"
#define SEL    "\x02"
#define BLUE   "\x03"
#define GREEN  "\x04"
#define YELLOW "\x05"
#define RED    "\x06"

#define ECHO(col, cmd) "echo -en "col";echo -en $("#cmd");echo -en \x01"

static const Block blocks[] = {
	/*Icon*/	/*Command*/	 /*Update Interval*/	/*Update Signal*/
	{"",      "playcount_get",    60,		0}, // last.fm scrobbles
	{"",      "ram_get",          1,		0}, // ram
  {"",      "pctl_get",         1,    0}, // time
  {"",      "datetime_get",     1,    0}, // time
};

//sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char delim[] = " / ";
static unsigned int delimLen = 5;
