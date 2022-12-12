#include "types.h"
#include "constants.h"
#include "intrinsics.h"
#include "natives.h"
#include "common.h"
#include "mods.h"
#include "menu.h"

void main()
{
	while (true)
	{
		if (!HUD_IS_FADED())
		{
			if (!IS_GAME_PAUSED())
			{
				if (TestTwo == 1)//jank but allow execute then turns off that way its not non stop looping if it doesnt exist or if something goes wrong.
				{
					if (!IS_SCRIPT_VALID(SCRIPTLAUNCHERYE))//take original fuieventmonitor and name it to fuieventmonitor_o this is to allow all proper scripts to execute as they should.
					{
						SCRIPTLAUNCHERYE = RunScript("scripting/DesignerDefined/UI/FuiEventMonitor_O");
						TestTwo = 2;//stop it from launching the undead sp fuieventmonitor when swapping sessions!
					}
				}
			}
		}
		if (NET_IS_IN_SESSION())
		{
			//jank as well, goes down the line to execute and turn off/change when needed on session load up
			if (TestOne == 1)//here we just set scrip as a net script, rather this is needed or not is unknown to me lmao.
			{
				NET_SET_THIS_SCRIPT_IS_NET_SCRIPT(_GET_ID_OF_THIS_SCRIPT());
				TestOne = 2;
			}
		}
		Menu_Loop();
		Looped_Functions();
		if (!HUD_IS_FADED())
		{
			if (!IS_GAME_PAUSED())
			{
				if (TestOne == 2)
				{
					if (GET_GAME_EDITION() != 10)//undead region free, non goty.
					{
						print2("<0x00FFFF>Seems You Aren't On a Compatible Supported Version of The Game</0x> \n <0xBA60D4>Terminating The Menu To Save You From Crashes</0x> \n <0x52FF0C> Please Get a Copy of a Supported Game Version</0x>", 12000);
						TERMINATE_THIS_SCRIPT();//terminate if wrong version
						//as is this script only is coded to work on undead region free non goty. Adjust pointers for other versions or remove the functions
					}
					if (GET_GAME_EDITION() == 10)
					{
						AUDIO_MUSIC_ONE_SHOT("mex_mission_complete_song_01", 0, 0, 0, 0, 0);
						print_10s("Welcome <green>%s</green> to <red>DEMONiC Revelations [RIP]</red> \n<blue>Creators: CabooseSayzWTF, Im Foxxyy, & Sockstress</blue> \n<purple>Hold</purple> <rb><purple>and press</purple> <rs><purple>to open", NGTAG);
						TestOne = 3;
					}
				}
			}
		}
		WAIT(0);
	}
}