void MainMenu()
{
	// PS3 Players, this source is UNTESTED. Use at your own risk.
	// To the ps3 players that keep taking the xbox source and making it work on ps3. 
	// Stop renaming the menu and acting like you cracked the menu.
	// All you did was remove a few mod options, removed some functions, modified a few functions etc.
	// A 5 year old could literally do the same thing. You aren't special.
	// Feel free to use the menu, and its mod functions however you like.
	// Just keep the original credits in your varation of the menu. 
	// That is all I ask of you.
	// PS3 is not my personal console of choice.
	// So sorry I just don't have the time or motivation to work on stuff for ps3.
	// With that said, I've grown to hate rdr and its community as a whole. Too many toxic players for my taste.
	// RDR has once again reminded me on why I don't play games online much anymore. Too many bad apples on the same tree.
	// The menu is open source for a reason. Find something broke, then fix it. Have a idea for something better then do it.
	add_title("DEMONiC Revelations [RIP]");
	DrawSubMenuOption("Self Options", SubMenu1);
	DrawSubMenuOption("Weapon Options", SubMenu2);
	DrawSubMenuOption("Teleport Options", SubMenu3);
	DrawSubMenuOption("World Options", SubMenu4);
	DrawSubMenuOption("Misc Options", SubMenu5);
	DrawSubMenuOption("Network Options", SubMenu6);
	DrawSubMenuOption("Spawner Options", SubMenu7);
	DrawSubMenuOption("Protection Options", ProtectIt);
}
void Sub_Menu1()
{
	add_title("Self Options");
	add_option("Page 1");
	add_option("Page 2");
	add_option("Page 3");
	add_option("Single Player Mods");
	add_option("Medusa Menu");
	add_option("Model Changer");
	add_option("Profile Editor");
	add_option("DeadEye Editor");
	switch (getOption())
	{
	case 1: Option1: changeSubmenu(Self_OptionsP1); break;
	case 2: Option2: changeSubmenu(Self_OptionsP2); break;
	case 3: Option3: changeSubmenu(Self_OptionsP3); break;
	case 4: Option4: changeSubmenu(SPShit); break;
	case 5: Option5: changeSubmenu(MedusaMenu); break;
	case 6: Option6: changeSubmenu(PedSwap); break;
	case 7: Option7: changeSubmenu(ProEdit); break;
	case 8: Option8: changeSubmenu(DeadEyeEditor); break;
	}
}
void SelfProtect()
{
	add_title("Protections");
	DrawBoolOption("Antifreeze V2", Pro4);
	DrawBoolOption("Explode FX", Pro3);
	DrawBoolOption("Net Damage", Pro1);
	DrawBoolOption("Exp Rifle", Pro2);
	DrawBoolOption("No Self Update", UpdateSelf);
	add_option("More Options");
	switch (getOption())
	{
	case 1: Option1: Pro4 = !Pro4; if (Pro4)DamagePro = 7; if (!Pro4)DamagePro = 8; Protections(); break;
	case 2: Option2: Pro3 = !Pro3; if (Pro3)DamagePro = 5; if (!Pro3)DamagePro = 6; Protections(); break;
	case 3: Option3: Pro1 = !Pro1; if (Pro1)DamagePro = 1; if (!Pro1)DamagePro = 2; Protections(); break;
	case 4: Option4: Pro2 = !Pro2; if (Pro2)DamagePro = 3; if (!Pro2)DamagePro = 4; Protections(); break;
	case 5: Option5: UpdateSelf = !UpdateSelf; if (!UpdateSelf)SET_ACTOR_STOP_UPDATE(self, 0); break;
	case 6: Option6: changeSubmenu(Protect2); break;
	}
}
void SelfProtect2()
{
	add_title("Protections");
	DrawBoolOption("Anti-lite", AntiLite);
	DrawBoolOption("Spoof Camera", camspoof);
	DrawBoolOption("Block Votes", Pro5);//may not work. it's been a year since i last tested it. if no work, comment out of menu or update offset
	//DrawBoolOption("Self Delete", SelfDelete);//need to get for ps3
	switch (getOption())
	{
	case 1: Option1: AntiLite = !AntiLite; if (!AntiLite) { DESTROY_ITERATOR(iteratoranti1); DESTROY_ITERATOR(iteratoranti2); DESTROY_ITERATOR(iteratoranti3); }; break;
	case 2: Option2: TestFuckYou(); break;
	case 3: Option3: Pro5 = !Pro5; if (Pro5)DamagePro = 9; if (!Pro5)DamagePro = 10; Protections(); break;
	//case 4: Option4: SelfDelete = !SelfDelete; if (SelfDelete) { print2("If on for too long game will locally overload", 5000); DamagePro = 13; }; if (!SelfDelete)DamagePro = 14; Protections(); break;
	}
}
void SelfOptionP1()
{
	add_title("Self Options - Page 1");
	DrawBoolOption("God Mode", God);
	DrawBoolOption("Inf Horse Stamina", HrsStam);
	add_option("Noclip");
	DrawBoolOption("Invis", invisible);
	DrawBoolOption("EXP Jump", SuperJump);
	DrawBoolOption("NoRagDollv1", AntiRagDoll);
	DrawBoolOption("NoRagDollv2", AntiRagDoll2);
	//DrawBoolOption("Inf Roll", infroll);//Need for ps3, in ida just search for rollcooldown or something like that and the float is somewhere near it.
	switch (getOption())
	{
	case 1: Option1: CLEAR_ACTOR_PROOF_ALL(self); DeMiGod = 0; God = !God; if (!God) { CLEAR_ACTOR_PROOF(self, -1); SET_ACTOR_INVULNERABILITY(self, 0); }; break;
	case 2: Option2: HrsStam = !HrsStam; if (!HrsStam) { _CHEAT_INFINITE_HORSE_STAMINA(0); HORSE_UNLOCK_FRESHNESS(GET_DRAFT_ACTOR(0, GET_ACTOR_MOST_RECENT_VEHICLE(self))); HORSE_UNLOCK_FRESHNESS(GET_DRAFT_ACTOR(1, GET_ACTOR_MOST_RECENT_VEHICLE(self))); HORSE_UNLOCK_FRESHNESS(GET_DRAFT_ACTOR(2, GET_ACTOR_MOST_RECENT_VEHICLE(self))); HORSE_UNLOCK_FRESHNESS(GET_DRAFT_ACTOR(3, GET_ACTOR_MOST_RECENT_VEHICLE(self))); }; break;
	case 3: Option3: if (NoclipON) print2("Noclip Is Already Active", 2000); if (!NoclipON) { SET_MOVER_FROZEN(self, 1); NOCLIPMESS(); }; break;
	case 4: Option4: invisible = !invisible; if (invisible) { print2("<green> You Are Now Invisible To Everybody in The Game!</green>", 3000); }if (!invisible) { print2("<red>You Are Now Visible To Everybody In The Game</red>", 3000); _NET_VISIBILITY(self, 3); }; break;
	case 5: Option5: SuperJump = !SuperJump; if (SuperJump) { print2("<green>God Mode Must Be On</green> \n Hold <x> To Jump", 3000); }; break;
	case 6: Option6: AntiRagDoll2 = 0; TASK_CROUCH(self, 0); AntiRagDoll = !AntiRagDoll; break;
	case 7: Option7: AntiRagDoll = 0; AntiRagDoll2 = !AntiRagDoll2; break;
	//case 8: Option8: infroll = !infroll; if (infroll)*(short*)NEED OFFSET = 0; if (!infroll)*(short*)NEED OFFSET = NORMAL OFFSET VALUE; break;
	}
}
void SelfOptionP2()
{
	add_title("Self Options - Page 2");
	DrawBoolOption("AI Ignore", IgnoreON);
	DrawBoolOption("Drunk", IrishDrunk);
	add_option("Invis Mount");
	add_option("Suicide");
	add_option("Toggle Tied");
	DrawBoolOption("AI Mode", AiControl);
	DrawBoolOption("Ghost Rider - Buggy", FlameON);
	switch (getOption())
	{
	case 1: Option1: IgnoreON = !IgnoreON; if (!IgnoreON) UNK_0x4DF3C5D1(); break;
	case 2: Option2: IrishDrunk = !IrishDrunk; if (!IrishDrunk) SET_ACTOR_DRUNK(self, 0); break;
	case 3: Option3: if (IS_ACTOR_RIDING(self)) _NET_VISIBILITY(GET_MOUNT(self), 0); if (IS_ACTOR_DRIVING_VEHICLE(self)) _NET_VISIBILITY(GET_VEHICLE(self), 0); break;
	case 4: Option4: KILL_ACTOR(self); break;
	case 5: Option5: tie1 = !tie1; if (tie1)HOGTIE_ACTOR(self); if (!tie1)FREE_FROM_HOGTIE(self); break;
	case 6: Option6: AiControl = !AiControl; if (AiControl) { print2("<green>Ai Mode Works Best With Non MP Character Models</green>", 3000); TASK_CLEAR(self); RELEASE_ACTOR_AS_AMBIENT(self); }; if (!AiControl) { TASK_CLEAR(self); SET_ACTOR_IS_AMBIENT(self, 0); }; break;
	case 7: Option7: FlameON = !FlameON; break;
	}
}
void SelfOptionP3()
{
	add_title("Self Options - Page 3");
	add_option("Increase Bounty");
	DrawBoolOption("Never Wanted", NoWanted);
	add_option("Free Camera");
	add_option("Fast Walk");
	add_option("Super Jump");
	DrawBoolOption("Mount Speed", MSpeed);
	switch (getOption())
	{
	case 1: Option1: BountyINC(); break;
	case 2: Option2: NoWanted = !NoWanted; setGlobalAtIndex(26330, NoWanted ? getGlobalAtIndex(26330) & 0xFFFF8FFF : getGlobalAtIndex(26330) | 0x7000); break;//new no wanted thanks to sockstress
	case 3: Option3: if (!freecam) { freetest = 1; freecam = 1; }; break;
	case 4: Option4: if (NET_IS_IN_SESSION()) { if (FRun == 0) { *(long*)0x00BE47E0 = 1089470464; print2("<orange>Fast Walk:</orange> <green>1</green>", 3000); FRun = 1; } else if (FRun == 1) { *(long*)0x00BE47E0 = 1097859072; print2("<orange>Fast Walk:</orange> <green>2</green>  \n Best To Aim a Gun At This Speed For Easier Control", 6000); FRun = 2; } else if (FRun == 2) { *(long*)0x00BE47E0 = 1106837504; print2("<orange>Fast Walk:</orange> <green>3</green> \n Best To Aim a Gun At This Speed For Easier Control", 6000); FRun = 3; } else if (FRun == 3) { *(long*)0x00BE47E0 = 1065520988; print2("<orange>Fast Walk:</orange> <green>RESET</green>", 3000); FRun = 0; } }; if (!NET_IS_IN_SESSION())print2("Only Works In MP", 2000); break;
	case 5: Option5: if (JHeight == 0) { *(short*)0x0038A75C = 16672; print2("<orange>Jump Height:</orange> <green>1</green>", 3000); JHeight = 1; }else if (JHeight == 1) { *(short*)0x0038A75C = 16968; print2("<orange>Jump Height:</orange> <green>2</green>", 3000); JHeight = 2; }else if (JHeight == 2) { *(short*)0x0038A75C = 17136; print2("<orange>Jump Height:</orange> <green>3</green>", 3000); JHeight = 3; }else if (JHeight == 3) { *(short*)0x0038A75C = 17392; print2("<orange>Jump Height:</orange> <green>4</green>", 3000); JHeight = 4; }else if (JHeight == 4) { *(short*)0x0038A75C = 16512; print2("<orange>Jump Height:</orange> <green>RESET</green>", 3000); JHeight = 0; };; break;
	case 6: Option6: MSpeed = !MSpeed; if (MSpeed) { print2("This Doesn't Work For Every Mount. \n If In a Wagon This Works Best With 4 Horse Wagons \n This Mod Is Not Perfect However It Increases Speed Faster Then Mounts Normal Speed \n For Mounts and Such It Works With", 13000); }; if (!MSpeed) { MSpeed2 = 0; *(long*)0x00BE47DC = 1065353216; }; break;
	}
}
void ProfileEditor()
{
	add_title("Profile Editor");
	add_option("Rank Editor");
	add_option("Stats Editor");
	add_option("Unlock Trophies");
	add_option("Unlock Gold Weapons");
	add_option("Toggle Modded Titles");
	add_option("Toggle Modded Mounts");
	add_option("Force MP Save");
	switch (getOption())
	{
	case 1: Option1: PedWepz = 16; ToggleSpoof13 = true; break;
	case 2: Option2: PedWepz = 17; ToggleSpoof13 = true; break;
	case 3: Option3: print2("<STAR_GOLD> <green>All Trophies Unlocking!</green> <STAR_GOLD>", 3000); for (int Z = 1; Z < 110; Z++) { if (!HAS_ACHIEVEMENT_BEEN_PASSED(Z)); {AWARD_ACHIEVEMENT(Z); } }; break;
	case 4: Option4: UnlockGoldGuns(); break;
	case 5: Option5: ModdedTitle(); break;
	case 6: Option6: ModdedMount(); break;
	case 7: Option7: SET_BIT(getGlobalPtrAtIndex(79338), 2); SET_BIT(getGlobalPtrAtIndex(79338), 1); FuncCleanUp(); break;
	}
}
void SP_1()
{
	add_title("Single Player Mods");
	add_option("High Legend/Honor");
	add_option("<MONEY>1000");
	add_option("Consumables");
	add_option("Normal Provisions");
	add_option("Undead Provisions");
	add_option("Unlock Cheat Codes");
	switch (getOption())
	{
	case 1: Option1: FHSelect(); break;
	case 2: Option2: GIVE_MONEY(); PLAY_SOUND_FRONTEND("HUD_PAY_BOUNTY_MASTER"); break;
	case 3: Option3: GIVE_ITEMS(); break;
	case 4: Option4: GIVE_NORMALPRO(); break;
	case 5: Option5: GIVE_UNDEADPRO(); break;
	case 6: Option6: for (int i = 0; i <= 55; i++) { UNK_0x7D6A8D4A(i, 1); }; break;
	}
}
void Dead_Eye_Editor()
{
	add_title("DeadEye Editor");
	DrawBoolOption("Infinite DeadEye", DeadEyeInf1);
	DrawBoolOption("1 Hit Kill DeadEye", DeadEye1Hit);
	DrawBoolOption("Auto Enter DeadEye", AutoDead);
	add_option("Fill Deadeye");
	add_option("DeadEye Color Swap");
	add_option("DeadEye Lvl 1");
	add_option("DeadEye Lvl 2");
	add_option("DeadEye Lvl 3");
	switch (getOption())
	{
	case 1: Option1: DeadEyeInf1 = !DeadEyeInf1; if (!DeadEyeInf1)SET_INFINITE_DEADEYE(self, 0); break;
	case 2: Option2: DeadEye1Hit = !DeadEye1Hit; if (DeadEye1Hit)print2("God Mode Needs To Be Off \n DemiGod Needs To Be On For This To Work Properly", 6000); if (!DeadEye1Hit)SET_DEADEYE_DAMAGE_SCALING(self, 1); break;
	case 3: Option3: AutoDead = !AutoDead; if (AutoDead)print2("<orange>This Lets You Re-enter DeadEye The Moment DeadEye Ends If Holding <lt>", 8000); break;
	case 4: Option4: SET_DISABLE_DEADEYE(self, 0); SET_PLAYER_DEADEYE_POINTS(self, TO_FLOAT(100), 1); break;
	case 5: Option5: DEColor(); break;
	case 6: Option6: SET_DEADEYE_MULTILOCK_ENABLE(self, 0); SET_DEADEYE_TARGETPAINT_ENABLE(self, 0); break;
	case 7: Option7: SET_DEADEYE_MULTILOCK_ENABLE(self, 1); SET_DEADEYE_TARGETPAINT_ENABLE(self, 0); break;
	case 8: Option8: SET_DEADEYE_MULTILOCK_ENABLE(self, 1); SET_DEADEYE_TARGETPAINT_ENABLE(self, 1); break;
	}
}
void MedusaOptionsMenu()
{
	add_title("Medusa Options");
	DrawBoolOption("Demi-God", DeMiGod);
	DrawBoolOption("Medusa-Kill", MedusaKill);
	DrawBoolOption("Medusa-Explode", MedusaXplode);
	DrawBoolOption("Medusa-HellFire", MedusaBurn);
	DrawBoolOption("Medusa-Delete", MedusaDestroy);
	switch (getOption())
	{
	case 1: Option1: CLEAR_ACTOR_PROOF_ALL(self); God = 0; DeMiGod = !DeMiGod; if (!DeMiGod)CLEAR_ACTOR_PROOF(self, -1); break;
	case 2: Option2: CLEAR_LAST_HIT(self); MedusaXplode = 0; MedusaBurn = 0; MedusaDestroy = 0; MedusaKill = !MedusaKill; break;
	case 3: Option3: CLEAR_LAST_HIT(self); MedusaKill = 0; MedusaBurn = 0; MedusaDestroy = 0; MedusaXplode = !MedusaXplode; break;
	case 4: Option4: CLEAR_LAST_HIT(self); MedusaKill = 0; MedusaXplode = 0; MedusaDestroy = 0; MedusaBurn = !MedusaBurn; break;
	case 5: Option5: CLEAR_LAST_HIT(self); MedusaKill = 0; MedusaXplode = 0; MedusaBurn = 0; MedusaDestroy = !MedusaDestroy; break;
	}
}
void Sub_Menu2()
{
	add_title("Weapon Options");
	add_option("Give All Weapons");
	add_option("Infinite Ammo");
	add_option("Set Weapons Gold");
	DrawBoolOption("No Reload", nReload);
	DrawBoolOption("Explosive Rounds", ExplosiveRounds);
	DrawBoolOption("Delete Gun", DeleteGun);
	DrawBoolOption("Hell-Fire Gun", BurnGun);
	add_option("More Options");
	switch (getOption())
	{
	case 1: Option1: GiveActorAllWeapons(); break;
	case 2: Option2: AmmoInf(); break;
	case 3: Option3: GoldIt = !GoldIt; if (GoldIt) { PrintChat("<yellow>Gold Weapons Set"); }if (!GoldIt) { for (int i = 0; i <= 37; i++) { if (ACTOR_HAS_WEAPON(self, i)) { if (GET_WEAPON_GOLD(self, i) != 0) { SET_WEAPON_GOLD(self, i, 0); } } }PrintChat("<red>Gold Weapons Removed"); }; break;
	case 4: Option4: nReload = !nReload; break;
	case 5: Option5: CLEAR_LAST_ATTACK(self); DeleteGun = 0; BurnGun = 0; CopyGun = 0; ExplosiveRounds = !ExplosiveRounds; break;
	case 6: Option6: CLEAR_LAST_ATTACK(self); ExplosiveRounds = 0; BurnGun = 0; CopyGun = 0; DeleteGun = !DeleteGun; break;
	case 7: Option7: CLEAR_LAST_ATTACK(self); ExplosiveRounds = 0; DeleteGun = 0; CopyGun = 0; BurnGun = !BurnGun; break;
	case 8: Option8: changeSubmenu(Weapons2); break;
	}
}
void WepMenu2()
{
	add_title("Weapon Options");
	DrawBoolOption("CopyCat", CopyGun);
	DrawBoolOption("ModWeps", cusweps);
	DrawBoolOption("Fire Round", Fireround);
	DrawBoolOption("Phos Round", Phos);
	DrawBoolOption("Slug Round", Slugz);
	DrawBoolOption("FakeER Round", fuckER);//npcs blow up like er, players look like they delete but on there side, they er explode
	DrawBoolOption("Killbot", aimbott);
	DrawBoolOption("Aimbot", aimbott2);
	switch (getOption())
	{
	case 1: Option1: CLEAR_LAST_ATTACK(self); ExplosiveRounds = 0; DeleteGun = 0; BurnGun = 0; CopyGun = !CopyGun; if (CopyGun)print2("<green>Punch or Shoot a Human Ped To Become Them\nExplosive Rounds, Delete Gun, & Hell-Fire Gun Turned Off", 11000); break;
	case 2: Option2: WepEn(); break;
	case 3: Option3: Phos = 0; UNK_0xCA840DBB(0); Fireround = !Fireround; if (!Fireround)_CHEAT_BLAZING_GUNS(0); break;
	case 4: Option4: Fireround = 0; _CHEAT_BLAZING_GUNS(0); Phos = !Phos; if (Phos)print2("<orange>Only works for undead nightmare/undead overrun\n<blue>If in gamemodes other than undead overrun, tracer will be green", 9000); if (!Phos)UNK_0xCA840DBB(0); break;
	case 5: Option5: Slugz = !Slugz; if (!Slugz)UNK_0x8062BD74(self, 0, 0.1f); break;
	case 6: Option6: CLEAR_LAST_ATTACK(self); fuckER = !fuckER; break;
	case 7: Option7: aimbott = !aimbott; if (aimbott) { print2("<blue>Aim at Somebody Holding <lt> and You Will [Killbot Them], You Don't Even Have To Shoot", 5000); }; break;
	case 8: Option8: aimbott2 = !aimbott2; break;
	}
}
void Sub_Menu3()
{
	add_title("Teleport Options");
	add_option("New Austin");
	add_option("West Elizabeth");
	add_option("Mexico");
	add_option("Hidden Interiors");
	add_option("Out of Map");
	add_option("Save Position");
	add_option("Load Position");
	add_option("Teleport To Waypoint");
	switch (getOption())
	{
	case 1: Option1: PedWepz = 4; ToggleSpoof13 = true; break;
	case 2: Option2: PedWepz = 5; ToggleSpoof13 = true; break;
	case 3: Option3: PedWepz = 6; ToggleSpoof13 = true; break;
	case 4: Option4: PedWepz = 7; ToggleSpoof13 = true; break;
	case 5: Option5: PedWepz = 8; ToggleSpoof13 = true; break;
	case 6: Option6: GET_POSITION(self, &savedPos); isSaved = true; break;
	case 7: Option7: if (!isSaved)print2("<red>You Must Save a Position First</red>", 3000); if (isSaved) TELEPORT_ACTOR(self, &savedPos, 1, 1, 1); break;
	case 8: Option8: TeleportWaypoint(); break;
	}
}
void Sub_Menu4()
{
	add_title("World Options");
	add_option("Weather");
	add_option("Time Of Day");
	DrawBoolOption("Time Acceleration - [Host]", Timez);
	DrawBoolOption("Freeze Time", TODLoop);
	DrawBoolOption("Freeze Weather", TODLoop2);
	switch (getOption())
	{
	case 1: Option1: PedWepz = 9; ToggleSpoof13 = true; break;
	case 2: Option2: PedWepz = 25; ToggleSpoof13 = true; break;
	case 3: Option3: TODLoop = 0; Timez = !Timez; if (!Timez)SET_TIME_ACCELERATION(1097859072); break;//reset is overflowing and causing time acc to go back to normal, however could be wrong
	case 4: Option4: Timez = 0; TODLoop = !TODLoop; if (TODLoop)print2("<orange>Be Sure To Set a Time of Day Now", 4000); break;
	case 5: Option5: TODLoop2 = !TODLoop2; if (TODLoop2)print2("<orange>Be Sure To Set a Weather Now", 4000); break;
	}
}
void Sub_Menu5()
{
	add_title("Misc Options");
	DrawBoolOption("No Loading", NoLoading);
	DrawBoolOption("Animal Bypasss", AnimalBypassON);
	DrawBoolOption("ModPool Bypass", mPass);//found by sockstress
	add_option("Script Loader");
	add_option("Map Interior Loader");
	add_option("Menu Options");
	add_option("Credits");
	switch (getOption())
	{
	case 1: Option1: NoLoading = !NoLoading; break;
	case 2: Option2: AnimalBypassON = !AnimalBypassON; if (AnimalBypassON) print2("Recreation of the rideable animal bypass \n It now properly lets you ride animals without the need \n for the TNT/FireBottle, However Animal Speed XML Files are still required \n Also allows you to enter any vehicle seat, even other players vehicles", 20000); break;
	case 3: Option3: mPass = !mPass; if (mPass) *(byte*)0x01593DE0 = 0; if (!mPass)*(byte*)0x01593DE0 = 1; break;//rockstar patch and fix your fucking game.
	case 4: Option4: PedWepz = 18; ToggleSpoof13 = true; break;
	case 5: Option5: changeSubmenu(InteriorLoader); break;
	case 6: Option6: PedWepz = 22; ToggleSpoof13 = true; break;
	case 7: Option7: Cred = 1;	if (Cred == 1) { print2("<red>Creators</red> \n <0x00FFFF>CabooseSayzWTF</0x>, <0x9932CC>Im Foxxyyy</0x>, & <0xFF1212>Sockstress</0x>", 5000); WAIT(5000); print2("<red>Helpers</red> \n <0xFFA500>Cain532, Mizdx, FuhzBots, JamesTwt</0x> \n <red>Function Help/Examples, Reverse Engineering Etc..", 5000); WAIT(5000); print2("<red>Beta Testers</red> \n <0x16DE45>Vision, Kavalleri, FrostDragon, Arphenion</0x>, \n <0x16DE45>Golden Bullets</0x>", 5000); WAIT(5000); print2("<orange>Special Thanks!</orange> \n <yellow>XBLToothPik, ap ii intense, jedijosh920, Teh1337Online</yellow>", 5000); WAIT(5000); print2("<red>SC-CL</red> \n <blue>Without The SC-CL Team This Would Of Never Been Possible!</blue>", 5000); Cred = 0; }; break;
	}
}
void IntLoader()
{
	add_title("Interior Loader");
	add_option("Destroyed Bridges");
	add_option("Undead/SP Interiors");
	add_option("Undead Town Fires/Debris");
	add_option("Tumbleweed/Armadillo GM Props");
	add_option("Turn All Off");
	switch (getOption())
	{
	case 1: Option1: print2("<orange>Destroyed Bridges</orange>: <green>ON", 3000); UndeadBridgez = 1; break;
	case 2: Option2: print2("<orange>Undead/SP Interiors</orange>: <green>ON", 3000); UndeadMapz = 1; break;
	case 3: Option3: print2("<orange>Undead Fires/Debris</orange>: <green>ON", 3000); UndeadFire = 1; break;
	case 4: Option4: print2("<orange>Tumbleweed/Armadillo Gang Match MP Areas</orange>: <green>ON", 3000); MPints = 1; break;
	case 5: Option5: AllOffBoi(); break;
	}
}
void Sub_Menu6()
{
	add_title("Network Options");
	add_option("Player Options 1");
	add_option("Player Options 2");
	DrawBoolOption("Give <XP> For Others", XPON);
	//DrawBoolOption("DeSpoof Names", SpoofDe);// can't be bothered to find for ps3, it's useless anyways
	switch (getOption())
	{
	case 1: Option1: changeSubmenu(PlayerNames); break;
	case 2: Option2: changeSubmenu(PlayerNames2); break;
	case 3: Option3: if (!XPON) print2("Get a Bounty On Yourself Then You and The Other Player \nGo Somewhere Far Away From The Cops and Have The Other Player Punch You. \nOnce They Punch You Press <LB> To Enable \nPress <RB> To Disable", 8000);XPON = !XPON; break;
	//case 4: Option4: SpoofDe = !SpoofDe; break;
	}
}
void Sub_Menu7()
{
	add_title("Spawner Options");
	add_option("Mount Spawner");
	add_option("Ped Spawner");
	add_option("Vehicle Spawner");
	add_option("Weapon Spawner");
	add_option("Clear Wep Pickups");
	switch (getOption())
	{
	case 1: Option1: changeSubmenu(MountMain); break;
	case 2: Option2: changeSubmenu(PedSpawnz); break;
	case 3: Option3: changeSubmenu(VehSpawnerMenu); break;
	case 4: Option4: print2("Give All Weapons Before Using This!", 3000); PedWepz = 26; ToggleSpoof13 = 1; break;
	case 5: Option5: REMOVE_ALL_PICKUPS(); break;
	}
}
void VehMenu()
{
	add_title("Vehicle Spawner");
	add_option("All Useful Vehicles");
	add_option("Teleport Vehicle");
	add_option("Teleport Into Vehicle");
	add_option("Reset Vehicle");
	add_option("Delete Vehicle");
	add_option("Underglow");//may not work, not tested on ps3
	DrawBoolOption("Fly Car", CarSpeedBoost);
	switch (getOption())
	{
	case 1: Option1: PedWepz = 3; ToggleSpoof13 = true; break;
	case 2: Option2: if (!freecam || !specit)GET_POSITION(self, &ve23); if (freecam)GET_CAMERA_POSITION(camera, &ve23); if (specit)GET_CAMERA_POSITION(GET_GAME_CAMERA(), &ve23); float heading = GET_HEADING(self); float dist = 6.0; float a = dist * SIN(heading); float b = dist * COS(heading); ve23.x -= a; ve23.z -= b; TELEPORT_ACTOR(SpawnCar1, &ve23, 1, 1, 1); break;
	case 3: Option3: SET_ACTOR_IN_VEHICLE(self, SpawnCar1, 0); break;
	case 4: Option4: SET_OBJECT_ORIENTATION(SpawnCar1, 90, 90, 90); break;
	case 5: Option5: DESTROY_ACTOR(SpawnCar1); DESTROY_ACTOR(SpawnDra1); DESTROY_ACTOR(SpawnDra2); DESTROY_ACTOR(SpawnDra3); DESTROY_ACTOR(SpawnDra4); break;
	case 6: Option6: PedWepz = 27; ToggleSpoof13 = true; break;
	case 7: Option7: CarSpeedBoost = !CarSpeedBoost; if (CarSpeedBoost)print2("<RT> Forward, <LB> Backwards, <LT> Stop, <dpadup> Turn Vehicle To Cam Direction, <LS>Go Up", 8000); break;
	}
}
void MountMainMenu()
{
	add_title("Mount Spawner");
	add_option("Choose Mount");
	add_option("Teleport Mount");
	add_option("Delete Mount");
	add_option("Save Perma Mount");
	DrawBoolOption("Use Perma Mount", SavedMountON);
	add_option("Mount Accessory Editor");
	switch (getOption())
	{
	case 1: Option1: PedWepz = 10; ToggleSpoof13 = true; break;
	case 2: Option2: if (!freecam || !specit)GET_POSITION(self, &animaltp); if (freecam)GET_CAMERA_POSITION(camera, &animaltp); if (specit)GET_CAMERA_POSITION(GET_GAME_CAMERA(), &animaltp); TELEPORT_ACTOR(SpawnMount1, &animaltp, 1, 1, 1); TELEPORT_ACTOR(SpawnMount2, &animaltp, 1, 1, 1); break;
	case 3: Option3: DESTROY_ACTOR(SpawnMount1); DESTROY_ACTOR(SpawnMount2); break;
	case 4: Option4: SetMountHorse(); break;
	case 5: Option5: SavedMountON = !SavedMountON; if (!SavedMountON)print2("<green>Perma Mount Off, However If In MP Your Called Mount Will Be This Set Mount Till Game Restart\n<blue>If In SP Your Saved Mount Overwrote Your SP Mount To The Save If Game Was Saved While Use Perma Mount Was On", 10000); break;
	case 6: Option6: PedWepz = 14; ToggleSpoof13 = true; break;
	}
}
void PedMenu()
{
	add_title("Ped Spawner");
	add_option("All Peds");
	add_option("Quick Peds");
	add_option("Teleport Peds");
	add_option("Delete Peds");
	DrawBoolOption("Stand Still", StandStillFucker);
	DrawBoolOption("Follow", PedzFollow);
	DrawBoolOption("Bodyguard", BGPAI2);
	add_option("Ped Weapons Editor");
	switch (getOption())
	{
	case 1: Option1: PedWepz = 23; ToggleSpoof13 = true; break;
	case 2: Option2: PedWepz = 20; ToggleSpoof13 = true; break;
	case 3: Option3: if (!freecam || !specit)GET_POSITION(self, &pedztp); if (freecam)GET_CAMERA_POSITION(camera, &pedztp); if (specit)GET_CAMERA_POSITION(GET_GAME_CAMERA(), &pedztp); for (int i = 0; i <= 9; i++) { TELEPORT_ACTOR(SpawnPed[i], &pedztp, 1, 1, 1); }; break;
	case 4: Option4: SpawnThePed = 0; for (int i = 0; i <= 9; i++) { DESTROY_ACTOR(SpawnPed[i]); }; break;
	case 5: Option5: PedzFollow = false; StandStillFucker = !StandStillFucker; if (!StandStillFucker) { for (int i = 0; i <= 9; i++) { ACTOR_RESET_ANIMS(SpawnPed[i], 1); TASK_CLEAR(SpawnPed[i]); SET_ACTOR_IS_THE_BEASTMASTER(self, 0); } }; break;
	case 6: Option6: StandStillFucker = false; PedzFollow = !PedzFollow; if (!PedzFollow) { for (int i = 0; i <= 9; i++) { ACTOR_RESET_ANIMS(SpawnPed[i], 1); TASK_CLEAR(SpawnPed[i]); SET_ACTOR_IS_THE_BEASTMASTER(self, 0); } }; break;
	case 7: Option7: CLEAR_LAST_ATTACK(self); CLEAR_LAST_HIT(self); BGPAI2 = !BGPAI2; if (BGPAI2)print2("Turn DemiGod On For Bodyguards To Work Properly \n Hold <LT> and Press <dpaddown> For Bodyguard Target Editor\n Hold <LT> and Press <dpadright> For Bodyguard Weapon Editor", 20000); if (!BGPAI2) FixBG(); break;
	case 8: Option8: PedWepz = 1; ToggleSpoof13 = true; break;
	}
}
void PedChanger()
{
	add_title("Model Changer");
	add_option("All Models");
	add_option("Quick Models");
	add_option("Outfit Editor");
	add_option("Save Model");
	DrawBoolOption("Load Model", lodmod);
	//DrawBoolOption("Play As Animals", animalplay);//need to get for ps3
	switch (getOption())
	{
	case 1: Option1: PedWepz = 24; ToggleSpoof13 = true; break;
	case 2: Option2: PedWepz = 19; ToggleSpoof13 = true; break;
	case 3: Option3: PedWepz = 21; ToggleSpoof13 = true; break;
	case 4: Option4: SetStatArrayValue(161, GET_ACTOR_ENUM(self)); break;
	case 5: Option5: lodmod = !lodmod; if (DefautSavedModel > 1294 || DefautSavedModel == -1)print2("<red>Something Went Wrong or You Never Saved a Model", 3000); if (DefautSavedModel >= 0 && DefautSavedModel <= 1294) { ChangeModel(self, DefautSavedModel); modelgotloaded = 1; } if (!lodmod)modelgotloaded = 0; break;
	//case 6: Option6: if (animalplay)*(int*)NEED OFFSET = 0x60000000;if (!animalplay)*(int*)NEED OFFSET = NEED NORMAL VALUE; break;
	}
}
void PlayerList()
{
	add_title("Player Options 1");
	add_option(GET_SLOT_NAME(0));
	add_option(GET_SLOT_NAME(1));
	add_option(GET_SLOT_NAME(2));
	add_option(GET_SLOT_NAME(3));
	add_option(GET_SLOT_NAME(4));
	add_option(GET_SLOT_NAME(5));
	add_option(GET_SLOT_NAME(6));
	add_option(GET_SLOT_NAME(7));
	switch (getOption())
	{
	case 1: Option1: AutoOffMenuSwitch(); NetSlotId = 0; changeSubmenu(NetPlayer0); break;
	case 2: Option2: AutoOffMenuSwitch(); NetSlotId = 1; changeSubmenu(NetPlayer0); break;
	case 3: Option3: AutoOffMenuSwitch(); NetSlotId = 2; changeSubmenu(NetPlayer0); break;
	case 4: Option4: AutoOffMenuSwitch(); NetSlotId = 3; changeSubmenu(NetPlayer0); break;
	case 5: Option5: AutoOffMenuSwitch(); NetSlotId = 4; changeSubmenu(NetPlayer0); break;
	case 6: Option6: AutoOffMenuSwitch(); NetSlotId = 5; changeSubmenu(NetPlayer0); break;
	case 7: Option7: AutoOffMenuSwitch(); NetSlotId = 6; changeSubmenu(NetPlayer0); break;
	case 8: Option8: AutoOffMenuSwitch(); NetSlotId = 7; changeSubmenu(NetPlayer0); break;
	}
}
void PlayerList2()
{
	add_title("Player Options 2");
	add_option(GET_SLOT_NAME(8));
	add_option(GET_SLOT_NAME(9));
	add_option(GET_SLOT_NAME(10));
	add_option(GET_SLOT_NAME(11));
	add_option(GET_SLOT_NAME(12));
	add_option(GET_SLOT_NAME(13));
	add_option(GET_SLOT_NAME(14));
	add_option(GET_SLOT_NAME(15));
	switch (getOption())
	{
	case 1: Option1: AutoOffMenuSwitch(); NetSlotId = 8; changeSubmenu(NetPlayer0); break;
	case 2: Option2: AutoOffMenuSwitch(); NetSlotId = 9; changeSubmenu(NetPlayer0); break;
	case 3: Option3: AutoOffMenuSwitch(); NetSlotId = 10; changeSubmenu(NetPlayer0); break;
	case 4: Option4: AutoOffMenuSwitch(); NetSlotId = 11; changeSubmenu(NetPlayer0); break;
	case 5: Option5: AutoOffMenuSwitch(); NetSlotId = 12; changeSubmenu(NetPlayer0); break;
	case 6: Option6: AutoOffMenuSwitch(); NetSlotId = 13; changeSubmenu(NetPlayer0); break;
	case 7: Option7: AutoOffMenuSwitch(); NetSlotId = 14; changeSubmenu(NetPlayer0); break;
	case 8: Option8: AutoOffMenuSwitch(); NetSlotId = 15; changeSubmenu(NetPlayer0); break;
	}
}
void Player_OpsSlot0()
{
	add_title(GET_SLOT_NAME(NetSlotId));
	add_option("Teleport To Player");
	add_option("Teleport To Me(N)");
	add_option("Teleport Into Vehicle");
	add_option("Spectate");
	DrawBoolOption("Explode", Xplode0);
	DrawBoolOption("Stealth Explode", XplodeS0);
	DrawBoolOption("Hell-Fire Explode", HellFire0);
	add_option("More Options");
	switch (getOption())
	{
	case 1: Option1: TeleportToPlayer(NetSlotId); break;
	case 2: Option2: TPMe(NetSlotId); break;
	case 3: Option3: VehTeleportV2(NetSlotId); break;
	case 4: Option4: if (!specit)spectest = 1; if (!specit)specit = 1; break;
	case 5: Option5: erplode = 0; XplodeS0 = 0; HellFire0 = 0; Xplode0 = !Xplode0; break;
	case 6: Option6: erplode = 0; Xplode0 = 0; HellFire0 = 0; XplodeS0 = !XplodeS0; break;
	case 7: Option7: erplode = 0; Xplode0 = 0; XplodeS0 = 0; HellFire0 = !HellFire0; break;
	case 8: Option8: changeSubmenu(NetPlayer0P1); break;
	}
}
void Player_OpsSlot0P1()
{
	add_title(GET_SLOT_NAME(NetSlotId));
	DrawBoolOption("ER Explode(N)", erplode);
	DrawBoolOption("Delete Mount(N)", DestroyActorsHorse0);
	DrawBoolOption("Delete Player(N)", DestroyActor0);
	DrawBoolOption("Player Info", PNETP0);
	add_option("Freeze");//idc anymore just have it. We have protections so whatever. Sorry retail players, find another game I guess.
	DrawBoolOption("Mount", PA0);
	add_option("Steal Model(N)");
	add_option("More Options");
	switch (getOption())
	{
	case 1: Option1: XplodeS0 = 0; HellFire0 = 0; Xplode0 = 0; erplode = !erplode; break;
	case 2: Option2: DestroyActorsHorse0 = !DestroyActorsHorse0; break;
	case 3: Option3: DestroyActor0 = !DestroyActor0; break;
	case 4: Option4: timer3 = _GET_CURRENT_TIME() - 0.5f; PNETP0 = !PNETP0; break;
	case 5: Option5: FreezePlayerV1(NetSlotId); break;
	case 6: Option6: PA0 = !PA0; if (PA0)TeleportToPlayer(NetSlotId); break;
	case 7: Option7: if (GET_LOCAL_SLOT() != NetSlotId)CopyPlayer(NetSlotId); break;
	case 8: Option8: changeSubmenu(NetPlayer1); break;
	}
}
void Player_OpsSlot0P2()
{
	add_title(GET_SLOT_NAME(NetSlotId));
	add_option("Give Lvl 50");
	DrawBoolOption("Bug Out Horse", BHorse0);
	DrawBoolOption("Toggle Player Update(N)", UpdatePlayer);
	switch (getOption())
	{
	case 1: Option1: SendXP(NetSlotId); break;
	case 2: Option2: BHorse0 = !BHorse0; break;
	case 3: Option3: UpdatePlayer = !UpdatePlayer; if (!UpdatePlayer)SET_ACTOR_STOP_UPDATE(GET_SLOT_ACTOR(NetSlotId), 0); break;
	}
}
void MenuSetup()
{
	if (MenuOpen)
	{
		optionCount = 0;
		switch (submenu)
		{
		case Main_Menu: MainMenu(); break;
		case SubMenu1: Sub_Menu1(); break;
		case SubMenu2: Sub_Menu2(); break;
		case SubMenu3: Sub_Menu3(); break;
		case SubMenu4: Sub_Menu4(); break;
		case SubMenu5: Sub_Menu5(); break;
		case SubMenu6: Sub_Menu6(); break;
		case SubMenu7: Sub_Menu7(); break;
		case Self_OptionsP1: SelfOptionP1(); break;
		case Self_OptionsP2: SelfOptionP2(); break;
		case Self_OptionsP3: SelfOptionP3(); break;
		case ProEdit: ProfileEditor(); break;
		case NetPlayer0: Player_OpsSlot0(); break;
		case NetPlayer0P1: Player_OpsSlot0P1(); break;
		case NetPlayer1: Player_OpsSlot0P2(); break;
		case PlayerNames: PlayerList(); break;
		case PlayerNames2: PlayerList2(); break;
		case VehSpawnerMenu: VehMenu(); break;
		case MedusaMenu: MedusaOptionsMenu(); break;
		case DeadEyeEditor: Dead_Eye_Editor(); break;
		case MountMain: MountMainMenu(); break;
		case PedSpawnz: PedMenu(); break;
		case PedSwap: PedChanger(); break;
		case InteriorLoader: IntLoader(); break;
		case SPShit: SP_1(); break;
		case Weapons2: WepMenu2(); break;
		case ProtectIt: SelfProtect(); break;
		case Protect2: SelfProtect2(); break;
		}
	}
}
void Menu_Loop()
{
	Hook();
	MenuSetup();
	resetVars();
}
