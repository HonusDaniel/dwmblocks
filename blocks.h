//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
  {"", "~/dwmblocks/scripts/caffeine", 25, 0},
  { "🎶 ",      "~/dwmblocks/scripts/current_song",         5,   0},
  { "🌎 ",      "surfshark-vpn status | awk /VPN/ | sed 's/Surfshark //'",         30,   0},
  {"🔊 ", "echo $(pamixer --get-volume)%",       5,      0},
	{"📟 ", "~/dwmblocks/scripts/memory",	30,		0},
	{"⌚ ", "date '+%b %d (%a) %I:%M%p'",					5,		0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
