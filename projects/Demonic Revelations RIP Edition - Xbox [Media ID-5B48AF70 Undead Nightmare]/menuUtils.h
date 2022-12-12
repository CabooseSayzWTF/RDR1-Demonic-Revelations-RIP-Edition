int optionCount;
int currentOption;
int maxOptions = 8;
int submenuLevel;
int lastSubmenu[20];
int lastOption[20];
int submenu = 0;
int value;
int ModReset = -1;
bool btnClick;
bool rightPress;
bool leftPress;
bool MenuOpen;
bool backPress;
bool optionPress;
unsigned int RGB_color = 0;
float fR = 0, fG = 0, fB = 0, fH = 0, fS = 1.0, fV = 1.0;
char *DRS1 = "scripting/DRS1";
char *DRS2 = "scripting/DRS2";
char *DRS3 = "scripting/DRS3";
char *DRS4 = "scripting/DRS4";
char *DRS5 = "scripting/DRS5";
char *DRS6 = "scripting/DRS6";
char *DRS7 = "scripting/DRS7";
char *DRS8 = "scripting/DRS8";
char *DRS9 = "scripting/DRS9";
char *DRS10 = "scripting/DRS10";
char globalMenuBuffer[255];
char menuItemBuffers[8][37];
char* CurrentOptionColor;
char* OptionColor;
char* CusHeaderColor;
int pedname = 0;
int modelname = 0;
int vehintz = 0;
int todg = 0;
int austel = 0;
int westeli = 0;
int mextel = 0;
int hidint = 0;
int outmapz = 0;
int weathint = 0;
int mspz = 0;
int wepzint = 0;
int selfwint = 26;
int PedWepz = 0;
//hacky shit for on and off and change triggers through menu startup, redo if you wish.
int TestOne = 1;
int TestTwo = 1;
//
int famit = 0;
int monit = 0;
int muit = 0;
int test123 = 0;//use for hacky af left and right menus.
int yowtf3;
int yowtf4;
int menuoutsound = 0;
int EnableThat = 1;//all auth removed, kept this because lazy, just forcing to 1 to allow.
int CurrentCol;
int OpColor;
int HeaderCol;
int wepspawn = 0;

void HSVtoRGB(float *fR, float *fG, float *fB, float *fH, float *fS, float *fV)
{
	float fC = *fV * *fS; float fHPrime = fMod(*fH / 60.0, 6); float fX = fC * (1 - FABS(fMod(fHPrime, 2) - 1)); float fM = *fV - fC;
	if (0 <= fHPrime && fHPrime < 1) { *fR = fC; *fG = fX; *fB = 0; }
	else if (1 <= fHPrime && fHPrime < 2) { *fR = fX; *fG = fC; *fB = 0; }
	else if (2 <= fHPrime && fHPrime < 3) { *fR = 0; *fG = fC; *fB = fX; }
	else if (3 <= fHPrime && fHPrime < 4) { *fR = 0; *fG = fX; *fB = fC; }
	else if (4 <= fHPrime && fHPrime < 5) { *fR = fX; *fG = 0; *fB = fC; }
	else if (5 <= fHPrime && fHPrime < 6) { *fR = fC; *fG = 0; *fB = fX; }
	else { *fR = 0; *fG = 0; *fB = 0; }*fR += fM; *fG += fM; *fB += fM;
}
void DrawMenuHeader(char* header)
{
	fH += .5;
	if (fH == 360.0)
	{
		fH = 0.0;
	}
	HSVtoRGB(&fR, &fG, &fB, &fH, &fS, &fV);
	RGB_color = ((int)(fB * 255) & 0xFF) | (((int)(fG * 255) & 0xFF) << 8) | (((int)(fR * 255) & 0xFF) << 16);
	strcpy(globalMenuBuffer, "", 1);
	if (HeaderCol == 1200)
	{
		stradd(globalMenuBuffer, "<0x", 255 - sizeof(globalMenuBuffer) - 1);
		stradd(globalMenuBuffer, (IntToHex(RGB_color, false) + 2), 255 - sizeof(globalMenuBuffer) - 1);
		stradd(globalMenuBuffer, ">", 255 - sizeof(globalMenuBuffer) - 1);
	}
	if (HeaderCol != 1200)
	{
		stradd(globalMenuBuffer, CusHeaderColor, 255 - sizeof(globalMenuBuffer) - 1);
	}
	stradd(globalMenuBuffer, header, 255 - sizeof(globalMenuBuffer) - 1);
	stradd(globalMenuBuffer, "\n", 255 - sizeof(globalMenuBuffer) - 1);
}
void DrawMenuItem(const char* text, char* color)
{
	optionCount++;
	if (currentOption == optionCount)
		stradd_s(globalMenuBuffer, CurrentOptionColor);
	if (currentOption <= maxOptions && optionCount <= maxOptions && optionCount != currentOption)
		stradd_s(globalMenuBuffer, color);
	else if ((optionCount > (currentOption - maxOptions)) && optionCount <= currentOption && optionCount != currentOption)
		stradd_s(globalMenuBuffer, color);

	if (currentOption == optionCount)
	{
		stradd_s(globalMenuBuffer, ">");
	}
	stradd_s(globalMenuBuffer, text);
	stradd_s(globalMenuBuffer, "\n");
}
bool GetButton(eButton input)
{
	return IS_BUTTON_PRESSED(1, input, 4, 4);
}
bool GetButtonDown(eButton input)
{
	return IS_BUTTON_DOWN(1, input, 4, 4);
}
int getOption()
{
	if (optionPress)
		return currentOption;
	else return 0;
}
void changeSubmenu(int newSubmenu)
{
	lastSubmenu[submenuLevel] = submenu;
	lastOption[submenuLevel] = currentOption;
	currentOption = 1;
	submenu = newSubmenu;
	submenuLevel++;
}
void add_title(char *header)
{
	DrawMenuHeader(header);
}
void add_option(const char *text)
{
DrawMenuItem(text, OptionColor);
}
void DrawBoolOption(const char *option, bool BOOL)
{
	if (BOOL)
	{
		optionCount++;
		if (currentOption == optionCount)
			stradd_s(globalMenuBuffer, CurrentOptionColor);
		if (currentOption <= maxOptions && optionCount <= maxOptions && optionCount != currentOption)
			stradd_s(globalMenuBuffer, OptionColor);
		else if ((optionCount > (currentOption - maxOptions)) && optionCount <= currentOption && optionCount != currentOption)
			stradd_s(globalMenuBuffer, OptionColor);
		if (currentOption == optionCount)
		{
			stradd_s(globalMenuBuffer, ">");
		}
		stradd_s(globalMenuBuffer, option);
		stradd_s(globalMenuBuffer, ": ");
		stradd_s(globalMenuBuffer, "<green>");
		stradd_s(globalMenuBuffer, "ON");
		stradd_s(globalMenuBuffer, "\n");
	}
	if (!BOOL)
	{
		optionCount++;
		if (currentOption == optionCount)
			stradd_s(globalMenuBuffer, CurrentOptionColor);
		if (currentOption <= maxOptions && optionCount <= maxOptions && optionCount != currentOption)
			stradd_s(globalMenuBuffer, OptionColor);
		else if ((optionCount > (currentOption - maxOptions)) && optionCount <= currentOption && optionCount != currentOption)
			stradd_s(globalMenuBuffer, OptionColor);
		if (currentOption == optionCount)
		{
			stradd_s(globalMenuBuffer, ">");
		}
		stradd_s(globalMenuBuffer, option);
		stradd_s(globalMenuBuffer, ": ");
		stradd_s(globalMenuBuffer, "<red>");
		stradd_s(globalMenuBuffer, "OFF");
		stradd_s(globalMenuBuffer, "\n");
	}
}
void DrawSubMenuOption(const char *option, int SubMenu)
{
	add_option(option);
	if (currentOption == optionCount)
	{
		if (optionPress) changeSubmenu(SubMenu);
	}
}
void DisplayMenu()
{
	HUD_CLEAR_HELP_QUEUE();
	_PRINT_HELP(globalMenuBuffer, 1, false, 1, 2, 1, 0, 0);
}
void previous_option()
{
	if (GetButton(DPAD_UP))
	{
		currentOption--;
		if (currentOption < 1) currentOption = optionCount;
		PLAY_SOUND_FRONTEND("HUD_MENU_NAV_UP_MASTER");
	}
}
void next_option()
{
	if (GetButton(DPAD_DOWN))
	{
		currentOption++;
		if (currentOption > optionCount) currentOption = 1;
		PLAY_SOUND_FRONTEND("HUD_MENU_NAV_DOWN_MASTER");
	}
}
void MenuSounds()
{
	optionPress = GetButton(BUTTON_A);
	if (optionPress)
	{
		PLAY_SOUND_FRONTEND("HUD_MENU_SELECT_MASTER");
	}
	if (GetButton(BUTTON_O))
	{
		PLAY_SOUND_FRONTEND("HUD_MENU_BACK_MASTER");
	}
}
void Hook()
{
	if (EnableThat)
	{
		if (test123 == 0)
		{
			if (GetButtonDown(BUTTON_R1) && (GetButton(BUTTON_R3)))
			{
				if (MenuOpen == true)
				{
					print2("Menu Already Open", 2000);
				}
				if (MenuOpen == false)
				{
					menuoutsound = 1;
					submenu = Main_Menu;
					submenuLevel = 1;
					currentOption = 1;
					MenuOpen = true;
					PLAY_SOUND_FRONTEND("HUD_MP_UNLOCK_MASTER");
				}
				if (!_IS_LAYOUT_VALID(FIND_NAMED_LAYOUT("trainer_layout")))
				{
					CREATE_LAYOUT("trainer_layout");
				}
			}
			if (GetButton(BUTTON_O))
			{
				if (submenu == Main_Menu)
				{
					SET_PLAYER_CONTROL(0, true, false, false);
					submenu = Closed;
					submenuLevel = 0;
					currentOption = 0;
					MenuOpen = false;
					HUD_CLEAR_HELP_QUEUE();
					if (DECOR_CHECK_EXIST(GET_PLAYER_ACTOR(0), "DISABLE_HORSE_WHISTLE"))
					{
						DECOR_REMOVE(GET_PLAYER_ACTOR(0), "DISABLE_HORSE_WHISTLE");
					}
					if (menuoutsound == 1)
					{
						//CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH(GET_PLAYER_ACTOR(0));
						PLAY_SOUND_FRONTEND("DEAD_EYE_START_MASTER");
						menuoutsound = 0;
					}
				}
				else
				{
					submenu = lastSubmenu[submenuLevel - 1];
					currentOption = lastOption[submenuLevel - 1];
					submenuLevel--;
				}
			}
			if (MenuOpen)
			{
				int framesPerSecond = (1.0f / UNK_0x59466B4D());
				vector3 yoco;
				DisplayMenu();
				previous_option();
				next_option();
				MenuSounds();
				DECOR_SET_BOOL(GET_PLAYER_ACTOR(0), "DISABLE_HORSE_WHISTLE", 1);
				CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH(GET_PLAYER_ACTOR(0));
				if (!UNK_0x115CD0CC(yowtf3))
				{
					yowtf3 = UNK_0xD7591B0E("Generic_Dbuffer128_1", 0, 11, 0, 0, 0, 0, -1, 0);
				}
				if (!UNK_0x115CD0CC(yowtf4))
				{
					yowtf4 = UNK_0xD7591B0E("Generic_Dbuffer128_2", 0, 8, 0, 0, 0, 0, -1, 0);
				}
				//self pos when menu open
				GET_POSITION(GET_PLAYER_ACTOR(0), &yoco);
				char Temp4[255];
				stradd_s(Temp4, "<purple>Your POS:<purple> ");
				stradd_s(Temp4, "<red>X</red>:");
				stradd(Temp4, _FLOAT_TO_STRING(yoco.x, 1, 1), 255 - sizeof(Temp4) - 1);
				stradd_s(Temp4, " <red>Y:</red>");
				stradd(Temp4, _FLOAT_TO_STRING(yoco.y, 1, 1), 255 - sizeof(Temp4) - 1);
				stradd_s(Temp4, " <red>Z:</red>");
				stradd(Temp4, _FLOAT_TO_STRING(yoco.z, 1, 1), 255 - sizeof(Temp4) - 1);
				stradd_s(Temp4, " <red>H:</red>");
				stradd(Temp4, _FLOAT_TO_STRING(GET_HEADING(GET_PLAYER_ACTOR(0)), 1, 1), 255 - sizeof(Temp4) - 1);
				UI_SET_STRING("Generic_Dbuffer128_1", Temp4);
				//net info when menu open
				char Temp[255];
				stradd_s(Temp, "<green>FPS:</green>");
				stradd_s(Temp, INT_TO_STRING(framesPerSecond));
				if (NET_IS_IN_SESSION())
				{
					unsigned char* ORIGNAME1 = (unsigned char *)((int)GET_SLOT_NAME(_GET_HOST_SLOT_ID()) - 0x74 + 0x64);//admiononly
					stradd_s(Temp, " <blue>Players:</blue>");
					stradd_s(Temp, INT_TO_STRING(GET_NUM_PLAYERS()));
					stradd_s(Temp, " <red>Host:</red>");
					stradd_s(Temp, ORIGNAME1);
				}
				UI_SET_STRING("Generic_Dbuffer128_2", Temp);
			}
			optionPress = GetButton(BUTTON_A);
			leftPress = GetButton(DPAD_LEFT);
			rightPress = GetButton(DPAD_RIGHT);
		}
	}
}
unsafe float GetStatArrayValue(int globalIndex)
{
	__getFrame(0);
	__getGlobalP(34581);
	__getArray(1);
	return __popF();
}
void resetVars()
{
	HeaderCol = GetStatArrayValue(351);
	OpColor = GetStatArrayValue(352);
	CurrentCol = GetStatArrayValue(353);
	optionPress = false;
	leftPress = false;
	rightPress = false;
	char buf[sizeof(globalMenuBuffer)];
	stradd_s(globalMenuBuffer, buf);
	if (HeaderCol == 200) { CusHeaderColor = "<red>"; }//red
	if (HeaderCol == 300) { CusHeaderColor = "<green>"; }//green
	if (HeaderCol == 400) { CusHeaderColor = "<blue>"; }//blue
	if (HeaderCol == 500) { CusHeaderColor = "<purple>"; }//purple
	if (HeaderCol == 600) { CusHeaderColor = "<orange>"; }//orange
	if (HeaderCol == 700) { CusHeaderColor = "<yellow>"; }//yellow
	if (HeaderCol == 800) { CusHeaderColor = "<grey>"; }//black?
	if (HeaderCol == 1000) { CusHeaderColor = "<sepia>"; }//black?
	if (HeaderCol == 1100) { CusHeaderColor = "<brown>"; }//black?
	if (HeaderCol != 200 && HeaderCol != 300 && HeaderCol != 400 && HeaderCol != 500 && HeaderCol != 600 && HeaderCol != 700 && HeaderCol != 800 && HeaderCol != 1000 && HeaderCol != 1100 && HeaderCol != 1200) { CusHeaderColor = "<red>"; }
	if (OpColor == 200) { OptionColor = "<red>"; }//red
	if (OpColor == 300) { OptionColor = "<green>"; }//green
	if (OpColor == 400) { OptionColor = "<blue>"; }//blue
	if (OpColor == 500) { OptionColor = "<purple>"; }//purple
	if (OpColor == 600) { OptionColor = "<orange>"; }//yellow
	if (OpColor == 700) { OptionColor = "<yellow>"; }//black?
	if (OpColor == 800) { OptionColor = "<grey>"; }//black?
	if (OpColor == 1000) { OptionColor = "<sepia>"; }//black?
	if (OpColor == 1100) { OptionColor = "<brown>"; }//black?
	if (OpColor != 200 && OpColor != 300 && OpColor != 400 && OpColor != 500 && OpColor != 600 && OpColor != 700 && OpColor != 800 && OpColor != 1000 && OpColor != 1100) { OptionColor = "<blue>"; }
	if (CurrentCol == 200) { CurrentOptionColor = "<red>"; }//red
	if (CurrentCol == 300) { CurrentOptionColor = "<green>"; }//green
	if (CurrentCol == 400) { CurrentOptionColor = "<blue>"; }//blue
	if (CurrentCol == 500) { CurrentOptionColor = "<purple>"; }//purple
	if (CurrentCol == 600) { CurrentOptionColor = "<orange>"; }//orange
	if (CurrentCol == 700) { CurrentOptionColor = "<yellow>"; }//yellow
	if (CurrentCol == 800) { CurrentOptionColor = "<grey>"; }//black?
	if (CurrentCol == 1000) { CurrentOptionColor = "<sepia>"; }//black?
	if (CurrentCol == 1100) { CurrentOptionColor = "<brown>"; }//black?
	if (CurrentCol != 200 && CurrentCol != 300 && CurrentCol != 400 && CurrentCol != 500 && CurrentCol != 600 && CurrentCol != 700 && CurrentCol != 800 && CurrentCol != 1000 && CurrentCol != 1100) { CurrentOptionColor = "<purple>"; }
	if (MenuOpen == false)
	{
		if (UNK_0x115CD0CC(yowtf3))
		{
			UNK_0x4F52CB58(yowtf3);
		}
		if (UNK_0x115CD0CC(yowtf4))
		{
			UNK_0x4F52CB58(yowtf4);
		}
	}
	if (MenuOpen)
	{
		if (GET_STICK_X(0, false, 0) > 0.2f || GET_STICK_X(0, false, 0) < -0.2f || GET_STICK_Y(0, false, 0) > 0.2f || GET_STICK_Y(0, false, 0) < -0.2f)
			SET_PLAYER_CONTROL(0, true, false, false);
		else
			SET_PLAYER_CONTROL(0, false, true, true);
	}
}