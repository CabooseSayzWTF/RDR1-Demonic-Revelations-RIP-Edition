#include "menuUtils.h"
#define self GET_PLAYER_ACTOR(0)
#define actorsHorse GET_ACTORS_HORSE(self)
#define NGTAG GET_LOCAL_PLAYER_NAME(0)
#define CurrentMount GET_ACTOR_ENUM(GET_MOUNT(self))
#define ORIGINAL_EDITION_XBOX 9
#define UNDEAD_EDITION_XBOX 10
//alot of this shit may be unused, idc to clean this garbage up. Have fun.
bool DestroyActor0, DestroyActorsHorse0, erplode, aimbott2, SpoofDe, lodmod, AntiLite, mPass, fuckER, SelfDelete, God, DeMiGod, HrsStam, XP, ExplosiveRounds, DeleteGun, BurnGun, MedusaKill, MedusaDestroy, MedusaXplode, MedusaBurn, invisible, NoLoading, Xplode0, XplodeS0, HellFire0, AntiRagDoll, IgnoreON, IrishDrunk, DeadEye1Hit, NoclipON, DeadEyeInf1, PNETP0, isSaved = false, isSaved2 = false, StandStillFucker = false, PedzFollow, CopyGun, AnimalBypassON, XPON, nReload, CarSpeedBoost, PA0, Timez, UndeadFire, UndeadMapz, UndeadBridgez, FlameON, MPints;
int modelgotloaded, FreezePed0, FreezePed1, SpawnCar1, SCRIPTLAUNCHERYE, SCRIPTLAUNCHERYE2, SpawnThePed = 0, SpawnPed[10], SpawnTheMount = 0, SpawnMount1, SpawnMount2, SpawnTheDra = 0, SpawnDra1, SpawnDra2, SpawnDra3, SpawnDra4;
vector3 savedPos, savedPos2, pedztp, animaltp, ve1, ve2, ve3, ve4, ve5, ve6, ve7, ve8, ve9, ve10, ve11, ve12, ve13, ve14, ve15, ve16, ve17, ve18, ve19, ve20, ve21, ve22, ve23, ve24, ve25, ve26, ve27, ve28, ve29, ve30, ve31, ve32, ve33, ve34, ve35, ve36, ve37, ve38, ve39, ve40, ve41, ve42, ve43, ve44, ve45, ve46, ve47, ve48, ve49, ve50, ve51, lasit, waypointpos1, positionWP;
bool ToggleSpoof2;
bool ToggleSpoof13;
bool NoWanted;
bool UnlimitedAmmo;
bool GoldIt;
bool BGPAI2;
bool CannonGun = false;
int tghat = 0;
int WTFCAN;
bool AiControl;
bool TODLoop;
bool TODLoop2;
bool AutoDead;
bool cusweps;
bool tie1;
bool aimbott;
int testwtf;
int testwtf2;
int deafx;
int deafx2;
int war1, war2, war3, war4, war5, war6, war7, war8, war9, war10, war11, war12, war13, war14, war15, war16, war17, war18;
int NetSlotId = -1;
static Camera camera;
static float camX = 0.0f, camY = 0.0f;
static float xStickLeft, yStickLeft, xStickRight, yStickRight;
static vector3 camDirection, positionFC;
static Object obj;
int freetest = 0;
bool freecam;
int spectest = 0;
bool specit;
bool actorNowInvalid;
int testrank2 = 1;
int prerank;
int rankxp;
int tban = 0;
int statset = 0;
bool BGuard;
bool SavedMountON;
int BGuardTarget = 16, DefautSavedModel, SavedMount, Cscript = 0, drs1, drs2, drs3, drs4, drs5, drs6, drs7, drs8, drs9, drs10, drsa = 0, QModel = 0;
bool togtest;
int selectorz = 0;
int zombi = 0;
int workz = 0;
int gangz = 0;
int lawz = 0;
int prostz = 0;
int animalzz = 0;
int miscz = 0;
bool Fireround;
bool Slugz;
bool Phos;
bool Pro1;
bool Pro2;
bool Pro3;
bool Pro4;
bool Pro5;
bool Pro6;
bool SuperJump;
bool infroll;
bool animalplay;
int DamagePro = 0;
int jtest1;
int jtest2 = 0;
int horsetest = 0;
int modtit = 0;
int opcol1 = 0;
int opcol2 = 0;
int opcol3 = 0;
int EggThat;
bool EggOn = false;
bool EggOn2 = false;
int Egg3 = 0;
int EggPrint = 0;
bool UpdateSelf;
bool UpdatePlayer;
bool BHorse0;
bool TogZ;
Object mount_objveh;
Object mount_obj;
int caboose = 0xBDB194D5;
int vision = 0x994D8293;
int frostfuck = 0x0024FB69;
bool camspoof;
int ModReset2;
vector3 thatssaved;
bool ClearDE;
bool BlueDE;
bool ZombDE;
int ClearDEint = 0;
int BlueDEint = 0;
int ZombDEint = 0;
int DETog = 0;
int JHeight = 0;
int FRun = 0;
int RatioEdit = 0;
int Cred = 0;
vector3 testcus;
int visdrug = 0;
int FovEdit = 0;
int AREdit = 0;
bool AntiRagDoll2;
Time timer3;
Iterator iteratoranti1;
Iterator iteratoranti2;
Iterator iteratoranti3;
Iterator umisc1;
Iterator umisc2;
Iterator animalridez1;
Iterator animalridez2;
Iterator animalridez3;
char *ColOp1Char[] = { "Red", "Green", "Blue", "Purple", "Orange", "Yellow", "Grey", "Sepia", "Brown", "Rainbow" };
char *ColOp2Char[] = { "Red", "Green", "Blue", "Purple", "Orange", "Yellow", "Grey", "Sepia", "Brown" };
char *ColOp3Char[] = { "Red", "Green", "Blue", "Purple", "Orange", "Yellow", "Grey", "Sepia", "Brown" };
char *QuickM[] = { "<orange>Nun01 [Has Super Run]", "<orange>Toxic Zombie", "<orange>Young Jack Marston", "<orange>Naked Guy", "<orange>Naked Girl", "<orange>Paperboy", "<orange>Miranda Fortuna", "<orange>Dead Dutch", "<orange>Mystery Guy", "<orange>Herbert Moon" };
char *NAChar[] = { "<orange>Armadillo", "<orange>MacFarlane's Ranch", "<orange>Tumbleweed", "<orange>Fort Mercer", "<orange>Gaptooth Breach", "<orange>Twin Rocks", "<orange>Plainview", "<orange>Rathskeller Fork", "<orange>Ridgewood Farm", "<orange>Thieves' Landing", "<orange>Benedict Point", "<orange>Lake Don Julio", "<orange>Coot's Chapel", "<orange>Pike's Basin" };
char *WEChar[] = { "<orange>Blackwater","<orange>Cochinay", "<orange>Beecher's Hope", "<orange>Manzanita Post", "<orange>Pacific Union RR", "<orange>Aurora Basin", "<orange>Serendipitys Wreck" };
char *MTChar[] = { "<orange>Escalera", "<orange>Chuparosa", "<orange>Las Hermanas", "<orange>Tesoro Azul", "<orange>El Presidio", "<orange>Casa Madrugada", "<orange>Nosalida", "<orange>El Matadero", "<orange>Agave Viejo", "<orange>Torquemada", "<orange>Rancho Polvo", "<orange>Manteca Falls", "<orange>Campo Mirada" };
char *HIChar[] = { "<orange>Macfarlane House", "<orange>Armadillo Theatre", "<orange>Armadillo Saloon Room 1", "<orange>Armadillo Saloon Room 2", "<orange>Thieves' Landing Mystery", "<orange>Blackwater Jail", "<orange>Blackwater Butcher", "<orange>Blackwater Theatre", "<orange>Blackwater Hotel Room", "<orange>Blackwater Anthropology", "<orange>Blackwater Restaurant", "<orange>Blackwater Bank", "<orange>Blackwater Poker Room", "<orange>Blackwater Barn", "<orange>Marston House", "<orange>Escalera Room 1", "<orange>Escalera Room 2", "<orange>Escalera Room 3", "<orange>Escalera Villa Room", "<orange>Hermanas Church 1", "<orange>Hermanas Church 2", "<orange>Chuparosa Marstons Room", "<orange>Chuparosa Bank Vault" };
char *OoMChar[] = { "<orange>Outfitter Spot", "<orange>Snowy Mountain Top", "<orange>Wasteland", "<orange>Empty Area", "<orange>Stranded Island", "<orange>Mexico Valley" };
char *WTChar[] = { "<orange>Clear", "<orange>Fair", "<orange>Cloudy", "<orange>Rainy", "<orange>Stormy", "<orange>Snowy", "<orange>Cave", "<orange>Thieves", "<orange>Forest", "<orange>Location A", "<orange>Location B", "<orange>Location C", "<orange>Interior Clear", "<orange>Interior Fair", "<orange>Interior Cloudy", "<orange>Interior Rainy", "<orange>Interior Stormy", "<orange>Interior Snowy", "<orange>Interior Thieves", "<orange>Interior Forest", "<orange>Interior Location A", "<orange>Interior Location B", "<orange>Interior Location C" };
char *MSChar[] = { "<orange>Dead Horse", "<orange>Zebra Donkey", "<orange>Undead War Horse", "<orange>Undead Death Horse", "<orange>Undead Famine Horse", "<orange>Undead Pestilence Horse", "<orange>Undead Unicorn", "<orange>Undead Horse01", "<orange>Undead Horse02", "<orange>Undead Horse03", "<orange>Undead Horse04", "<orange>Male Horse", "<orange>Saddle Horse", "<orange>Cleveland Bay", "<orange>Painted Quarter Horse", "<orange>Kentucky Saddler", "<orange>American Standardbred", "<orange>Standardbred Pinto", "<orange>Painted Standardbred", "<orange>Hungarian Halfbred", "<orange>Highland Chestnut", "<orange>Quarter Horse", "<orange>Welsh Mountain", "<orange>Dutch Warmblood", "<orange>Turkmen", "<orange>Tobiano Pinto", "<orange>Lusitano", "<orange>Ardennais", "<orange>Tersk", "<orange>War Horse", "<orange>Dark Horse", "<orange>Lusitano Nag", "<orange>Infested Ardennais", "<orange>Jaded Tersk", "<orange>El Senor", "<orange>El Hedor", "<orange>El Picor", "<orange>Buffalo", "<orange>Albino Buffalo", "<orange>Bull", "<orange>Bull01", "<orange>Bull02", "<orange>Bonzo Bull", "<orange>Super Bull", "<orange>Brown Cow", "<orange>Oreo Cow", "<orange>Milkshake Cow", "<orange>Choccy Milk Cow" };
char *MAChar[] = { "<orange>Remove All Accessories", "<orange>Black Saddle", "<orange>Brown Saddle", "<orange>Harness", "<orange>Black Rein", "<orange>Brown Rein", "<orange>Undead Unicorn FX", "<orange>Undead Death FX", "<orange>Undead Famine FX", "<orange>Undead Pestilence FX", "<orange>Undead War Red FX", "<orange>Undead War Blue FX" };
char *SEChar[] = { "<orange>Low", "<orange>Medium", "<orange>High", "<orange>Insane", "<orange>Max" };
char *SLChar[] = { "<orange>DRS1", "<orange>DRS2", "<orange>DRS3", "<orange>DRS4", "<orange>DRS5", "<orange>DRS6", "<orange>DRS7", "<orange>DRS8", "<orange>DRS9", "<orange>DRS10" };
char *VSChar[] = { "<orange>Stagecoach1", "<orange>Stagecoach2", "<orange>Stagecoach3", "<orange>Stagecoach4", "<orange>DLC Vehicle", "<orange>Gatling Wagon", "<orange>Cart1", "<orange>Cart2", "<orange>Cart3", "<orange>Cart4", "<orange>Cart5", "<orange>Cart6", "<orange>Canoe", "<orange>Raft2", "<orange>Raft3", "<orange>Raft1", "<orange>Truck", "<orange>Car", "<orange>Wagon4", "<orange>Wagon5", "<orange>Prison Wagon", "<orange>Dickens Elixir1", "<orange>Wagon2", "<orange>Chuckwagon1", "<orange>Chuckwagon2", "<orange>Dickens Elixir2" };
char *LectChar[] = { "Zombies", "Workers", "Gang", "Law", "Prostitues", "Animals", "Misc" };
char *ZombChar[] = { "Toxic", "Brusier", "Fast", "DeadMale2", "DeadMale3", "DeadMale5", "DeadMale6", "Default Zombie" };
char *WorkChar[] = { "BankTeller", "Bartender", "Blacksmith", "Businessman", "DocksWorker", "Nurse", "Musician", "FactoryWorker" };
char *GangChar[] = { "IndianRaider", "CattleRustler", "DrunkNDirty", "Bandito", "CrazyMiner", "MexRebel", "Luisa" };
char *LawChar[] = { "TownPosse1", "TownPosse3", "SheriffTux", "USMarshall2", "USMarshall5", "PuebloPosse", "CorruptOfficial", "Police1" };
char *ProstChar[] = { "Pros2", "Pros5", "Pros11", "MexPros", "BlackPros", "CaucasionPros", "AsianPros" };
char *AniChar[] = { "Bear", "Husky Dog", "Giant Bat", "Zombie Cougar", "Wolf", "Buck", "Snake" };
char *MiscChar[] = { "Naked Guy", "Herbert Moon", "Mystery Man", "Young Jack", "Preacher", "Nun", "Dead Dutch" };

void Protections()
{
	if (NET_IS_IN_SESSION())
	{
		if (DamagePro == 1)//damage protect all (admin only) -Pro1 Bool
		{
			//projectile
			*(byte*)0x83095E50 = RAND_INT_RANGE(1, 255);//RemoteLaunchEvent ID = 46
			*(byte*)0x83095D90 = RAND_INT_RANGE(1, 255);//RemoteDamageEvent ID = 42
			*(byte*)0x83095DD0 = RAND_INT_RANGE(1, 255);//DamageViewerEvent ID = 44
			*(byte*)0x83095E30 = RAND_INT_RANGE(1, 255);//DamageFailedEvent ID = 43
			*(byte*)0x83095DF0 = RAND_INT_RANGE(1, 255);//RemoteReloadEvent ID = 47
			//melee
			*(byte*)0x83098E58 = RAND_INT_RANGE(1, 255);//RemoteKnockoutEvent ID = 28
			*(byte*)0x83098E78 = RAND_INT_RANGE(1, 255);//RemoteDamageEvent ID = 27
		}
		if (DamagePro == 2)//damage protect all - OFF
		{
			//projectile
			*(byte*)0x83095E50 = 0; *(byte*)0x83095D90 = 0; *(byte*)0x83095DD0 = 0; *(byte*)0x83095E30 = 0; *(byte*)0x83095DF0 = 0;
			//melee
			*(byte*)0x83098E58 = 0; *(byte*)0x83098E78 = 0;
		}
		if (DamagePro == 3)//ER Protect (Admin only) - Pro2 bool
		{
			*(byte*)0x83095E70 = RAND_INT_RANGE(1, 255);//er protection RemoteExplodeTargeEvent  ID = 04 4D -- 98idk
		}
		if (DamagePro == 4)//ER Protect OFF
		{
			*(byte*)0x83095E70 = 0;//er protection
		}
		if (DamagePro == 5)//Explosion FX Protection (all) - Pro3 Bool
		{
			*(byte*)0x83095DB0 = RAND_INT_RANGE(1, 255);//RemoteExplosionEvent(FX Protect)
		}
		if (DamagePro == 6)//Explosion FX Protection OFF
		{
			*(byte*)0x83095DB0 = 0;//RemoteExplosionEvent(FX Protect)
		}
		if (DamagePro == 7)//AntifreezeV2 - Pro4 bool
		{
			*(byte*)0x83095CD4 = RAND_INT_RANGE(1, 255);//gohactor block//17
		}
		if (DamagePro == 8)//AntifreezeV2 OFF
		{
			*(byte*)0x83095CD4 = 0;//gohactor block
		}
		if (DamagePro == 9)//Block Vote To Kick ON - Pro5 bool
		{
			//*(byte*)0x8309547C = RAND_INT_RANGE(1, 255);//BootPeerMsg Block /02 maybe retail only!?
			//*(byte*)0x82F68E34 = RAND_INT_RANGE(73, 255);//VoteTracker Block /02
			*(int*)0x82647630 = 0x4E800020;// vote kick blocked lololol
		}
		if (DamagePro == 10)//Block Vote To Kick OFF
		{
			//*(byte*)0x8309547C = 0;////BootPeerMsg Block /02
			//*(byte*)0x82F68E34 = 72;
			*(int*)0x82647630 = 0x7D8802A6;
		}
		if (DamagePro == 11)//antilite new
		{
			print2("Special Thanks To James & yzid For These Protects\n These Protect Against Numerous Freeze Peds/Vehicles \n However This Can Break Task On Peds/Animals", 10000);
			*(int*)0x8229EEC8 = 0x4E800020;//basic freeze ped protect as is
			*(int*)0x82CE65A0 = 0x4E800020;//basic freeze ped protection as is^
			*(int*)0x82DFE0F8 = 0x4E800020;//marston freeze ped protection
			*(int*)0x82312970 = 0x4E800020;//freeze vehicles - truck/car, basic wagon, full session wagon, full session truck
		}
		if (DamagePro == 12)
		{
			*(int*)0x8229EEC8 = 0x7D8802A6;//basic freeze ped protect as is
			*(int*)0x82CE65A0 = 0x7D8802A6;//basic freeze ped protection as is^
			*(int*)0x82DFE0F8 = 0x7D8802A6;//marston freeze ped protection
			*(int*)0x82312970 = 0x7D8802A6;//freeze vehicles - truck/car, basic wagon, full session wagon, full session truck
		}
		if (DamagePro == 13)//self delete protection, causes local session overload if on for too long, locally you will have to server fix etc and or use delete gun to get overload to go away
		{
			*(byte*)0x83098BB4 = RAND_INT_RANGE(1, 255);
		}
		if (DamagePro == 14)
		{
			*(byte*)0x83098BB4 = 0;
		}
	}
}
void CancelScr(int ScriptID)
{
	if (IS_SCRIPT_VALID(ScriptID))
	{
		REMOVE_PERSISTENT_SCRIPT(ScriptID);
		TERMINATE_SCRIPT(ScriptID);
	}
}
void TeleportActor2(Actor actor, vector3 position)
{
	float heading = GET_HEADING(actor);
	if (IS_ACTOR_RIDING(actor))
		TELEPORT_ACTOR(GET_MOUNT(actor), &position, 1, 1, 1);
	else if (IS_ACTOR_DRIVING_VEHICLE(actor))
		TELEPORT_ACTOR(GET_VEHICLE(actor), &position, 1, 1, 1);
	else
		TELEPORT_ACTOR_WITH_HEADING(actor, position, heading, 1, 1, 1);
}
unsafe void SetStatArrayValue(int globalIndex, int statValue)
{
	__getFrame(1);
	__callNative(0x67116627, 1, 1);
	__getFrame(0);
	__getGlobalP(34581);
	__setArray(1);
}
void SetStats(int min, int max)
{
	for (int i = 0; i <= 695; i++)
	{
		if (i != 1 && i != 3 && i != 161 && i != 162 && i != 351 && i != 352 && i != 353 && i != 458 && i != 459 && i != 460 && i != 461 && i != 462 && i != 463 && i != 464 && i != 465 && i != 466 && i != 469 && i != 487)
		{
			SetStatArrayValue(i, RAND_INT_RANGE(min, max));
		}
	}
}
unsafe void SetGlobalPrestige(int prestige)
{
	__getFrame(0);
	__getGlobalP(84364);
	__setImm(177);
}
unsafe int GetGlobalPrestige()
{
	__getGlobalP(84364);
	__getImm(177);
	return __popI();
}
void FuncCleanUp()
{
	submenu = Closed;
	submenuLevel = 0;
	currentOption = 0;
	MenuOpen = false;
	menuoutsound = 0;
	SET_PLAYER_CONTROL(0, true, false, false);
	if (DECOR_CHECK_EXIST(self, "DISABLE_HORSE_WHISTLE"))
	{
		DECOR_REMOVE(self, "DISABLE_HORSE_WHISTLE");
	}
}
void NOCLIPMESS()
{
	NoclipON = true;
	FuncCleanUp();
	HUD_CLEAR_HELP_QUEUE();
	print2("Press <dpadup> Forward Facing Direction \n Press <rb> Noclip UP, Press <ls> Noclip DOWN, Press <cancel> Noclip off", 15000);
}
void PrintChat(const char* t12)
{
	_PRINT_CHAT(t12, 0, 0, 0, 0, 0, 0);
}
static Actor CreateActor(int actorEnum, Actor _actor)
{
	STREAMING_REQUEST_ACTOR(actorEnum, 1, 0);
	Layout l;
	l = FIND_NAMED_LAYOUT("PlayerLayout");
	if (!freecam || !specit){GET_POSITION(self, &ve1);}
	if (freecam){GET_CAMERA_POSITION(camera, &ve1);}
	if (specit){GET_CAMERA_POSITION(GET_GAME_CAMERA(), &ve1);}
	Actor actor = CREATE_ACTOR_IN_LAYOUT(l, "", actorEnum, ve1, ve1);
	return actor;
}
int RunScript(const char* scriptName)
{
	char scriptDir[256];
	strcpy(scriptDir, "$/content/", 255);
	stradd(scriptDir, scriptName, 255);

	if (!DOES_SCRIPT_EXIST(scriptDir)) 
	{
		PrintChat("<red>Error: Script Doesn't Exist!");
		if (!NET_IS_IN_SESSION())print2("<red>Error: Script Doesn't Exist!", 4000);
		return 0;
	}

	REQUEST_ASSET(scriptDir, 4);
	int id = GET_ASSET_ID(scriptDir, 4);

	while (!STREAMING_IS_SCRIPT_LOADED(id)) 
	{
		STREAMING_REQUEST_SCRIPT(id);
		PrintChat("<orange>Loading Script");
		WAIT(0);
	}

	int script = LAUNCH_NEW_SCRIPT(scriptDir, 0);
	ADD_PERSISTENT_SCRIPT(script);

	PrintChat("<green>Launched script!");
	return script;
}
void FreezePlayerV1(int SlotID)
{
	if (IS_SLOT_VALID(NetSlotId))
	{
		DESTROY_ACTOR(FreezePed0);
		DESTROY_ACTOR(FreezePed1);
		FreezePed0 = CreateActor(RAND_INT_RANGE(3, 324), self);
		FreezePed1 = CreateActor(RAND_INT_RANGE(3, 324), self);
		TURN_ACTOR_INTO_ZOMBIE(FreezePed1, RAND_INT_RANGE(1204, 1221));
		SET_ACTOR_RIDEABLE(FreezePed1, 1);
		ANIMAL_ACTOR_SET_DOMESTICATION(FreezePed1, 0);
		ACTOR_MOUNT_ACTOR(FreezePed0, FreezePed1);
		AI_IGNORE_ACTOR(FreezePed0);
		AI_IGNORE_ACTOR(FreezePed1);
		GET_SLOT_POSITION(SlotID, &ve22);
		TELEPORT_ACTOR(FreezePed1, &ve22, 1, 1, 1);
		ACTOR_MOUNT_ACTOR(FreezePed0, FreezePed1);
		TELEPORT_ACTOR(FreezePed1, &ve22, 1, 1, 1);
		ACTOR_MOUNT_ACTOR(FreezePed0, FreezePed1);
		WAIT(1200);
		DESTROY_ACTOR(FreezePed0); DESTROY_ACTOR(FreezePed1);
	}
}
void GiveActorAllWeapons()
{
	if (NET_IS_IN_SESSION())*(int*)0x824B57B8 = 0x4E800020;//fuck it have it. Allows giving ER when not bypassed.
	for (int i = 0; i <= 37; i++)
	{
		if (i != 30)
		{
			if (!NET_IS_IN_SESSION()){UNK_0x0E4B7A33(i, 0);}
			SET_EQUIP_SLOT_ENABLED(self, i, 1);
			GIVE_WEAPON_TO_ACTOR(self, i, 0, 0, 0);
			_ADD_AMMO_OF_TYPE(self, GET_AMMO_ENUM(i), TO_FLOAT(100), 1, 0);
		}
	}
}
vector3 GetGameCameraRotation()
{
	vector3 CamRotation;
	GET_CAMERA_DIRECTION(GET_GAME_CAMERA(), &CamRotation);
	return vector3(aSIN(CamRotation.y),
		0,
		ATAN2(CamRotation.x, CamRotation.z));
}
void ChangeModel(Actor actor, int actorID)
{
	GET_POSITION(actor, &ve20);
	SET_ACTOR_HEALTH(actor, GET_ACTOR_MAX_HEALTH(actor));
	_CHANGE_ACTOR_MODEL_IN_LAYOUT(FIND_NAMED_LAYOUT("PlayerLayout"), actor, GET_ACTOR_NAME(actor), actorID, ve20, ve20, 1);
	SET_CAMERA_FOLLOW_ACTOR(self);
	if (actorID == 0 || actorID == 1)
	{
		setGlobalAtIndex(76887, actorID);
	}
}
static Actor CarSpawnz(int actorEnum, Actor _actor)
{
	ve25.x = 0;
	ve25.y = 0;
	ve25.z = 0;
	STREAMING_REQUEST_ACTOR(actorEnum, 1, 0);
	Layout l;
	l = FIND_NAMED_LAYOUT("PlayerLayout");
	if (!freecam || !specit)
	{
		GET_POSITION(self, &ve24);
	}
	if (freecam)
	{
		GET_CAMERA_POSITION(camera, &ve24);
	}
	if (specit)
	{
		GET_CAMERA_POSITION(GET_GAME_CAMERA(), &ve24);
	}
	float heading = GET_HEADING(self);
	float dist = 6.0;
	float a = dist * SIN(heading);
	float b = dist * COS(heading);
	ve24.x -= a;
	ve24.z -= b;
	Actor actor = CREATE_ACTOR_IN_LAYOUT(l, "", actorEnum, ve24, ve25);
	START_VEHICLE(actor);
	return actor;
}
void SpawnThatVehicle(int actorEnum, Actor _actor)
{
	DESTROY_ACTOR(SpawnCar1); DESTROY_ACTOR(SpawnDra1); DESTROY_ACTOR(SpawnDra2); DESTROY_ACTOR(SpawnDra3); DESTROY_ACTOR(SpawnDra4); SpawnCar1 = CarSpawnz(actorEnum, _actor);
}
void TeleportToPlayer(int SlotID)
{
	GET_SLOT_POSITION(SlotID, &ve33);
	if (IS_SLOT_VALID(SlotID))
	{
		if (IS_ACTOR_ON_FOOT(self)){TELEPORT_ACTOR(self, &ve33, 1, 1, 1);}
		if (IS_ACTOR_RIDING(self)){TELEPORT_ACTOR(GET_MOUNT(self), &ve33, 1, 1, 1);}
		if (IS_ACTOR_DRIVING_VEHICLE(self)){TELEPORT_ACTOR(GET_VEHICLE(self), &ve33, 1, 1, 1);}
	}
}
void LaunchDRS(const char* ThatScript)
{
	if (!IS_SCRIPT_VALID(drs1) && (drsa == 1)) { drs1 = RunScript(ThatScript); drsa = 0; }
	if (!IS_SCRIPT_VALID(drs2) && (drsa == 2)) { drs2 = RunScript(ThatScript); drsa = 0; }
	if (!IS_SCRIPT_VALID(drs3) && (drsa == 3)) { drs3 = RunScript(ThatScript); drsa = 0; }
	if (!IS_SCRIPT_VALID(drs4) && (drsa == 4)) { drs4 = RunScript(ThatScript); drsa = 0; }
	if (!IS_SCRIPT_VALID(drs5) && (drsa == 5)) { drs5 = RunScript(ThatScript); drsa = 0; }
	if (!IS_SCRIPT_VALID(drs6) && (drsa == 6)) { drs6 = RunScript(ThatScript); drsa = 0; }
	if (!IS_SCRIPT_VALID(drs7) && (drsa == 7)) { drs7 = RunScript(ThatScript); drsa = 0; }
	if (!IS_SCRIPT_VALID(drs8) && (drsa == 8)) { drs8 = RunScript(ThatScript); drsa = 0; }
	if (!IS_SCRIPT_VALID(drs9) && (drsa == 9)) { drs9 = RunScript(ThatScript); drsa = 0; }
	if (!IS_SCRIPT_VALID(drs10) && (drsa == 10)) { drs10 = RunScript(ThatScript); drsa = 0; }
}
void IPG(int SlotID)
{
	char temp[255];
	char temp2[255];
	char temp3[255];
	char temp4[255];
	char temp5[255];
	char temp6[255];
	void* snuGamerClass = GET_SLOT_NAME(SlotID) - 0x74;
	//actual ip
	unsigned char b1 = *(unsigned char *)((int)GET_SLOT_NAME(SlotID) - 0x74 + 0x1C);
	unsigned char b2 = *(unsigned char *)((int)GET_SLOT_NAME(SlotID) - 0x74 + 0x1C + 1);
	unsigned char b3 = *(unsigned char *)((int)GET_SLOT_NAME(SlotID) - 0x74 + 0x1C + 2);
	unsigned char b4 = *(unsigned char *)((int)GET_SLOT_NAME(SlotID) - 0x74 + 0x1C + 3);
	int _b1 = b1; int _b2 = b2; int _b3 = b3; int _b4 = b4;
	if (_b1 < 0) { _b1 += 256; }
	if (_b2 < 0) { _b2 += 256; }
	if (_b3 < 0) { _b3 += 256; }
	if (_b4 < 0) { _b4 += 256; }
	//console ip
	unsigned char b5 = *(unsigned char *)((int)GET_SLOT_NAME(SlotID) - 0x74 + 0x18);
	unsigned char b6 = *(unsigned char *)((int)GET_SLOT_NAME(SlotID) - 0x74 + 0x18 + 1);
	unsigned char b7 = *(unsigned char *)((int)GET_SLOT_NAME(SlotID) - 0x74 + 0x18 + 2);
	unsigned char b8 = *(unsigned char *)((int)GET_SLOT_NAME(SlotID) - 0x74 + 0x18 + 3);
	int _b5 = b5; int _b6 = b6; int _b7 = b7; int _b8 = b8;
	if (_b5 < 0) { _b5 += 256; }
	if (_b6 < 0) { _b6 += 256; }
	if (_b7 < 0) { _b7 += 256; }
	if (_b8 < 0) { _b8 += 256; }
	//console mac address
	byte b11 = *(byte *)((int)GET_SLOT_NAME(SlotID) - 0x74 + 0x22);
	byte b12 = *(byte *)((int)GET_SLOT_NAME(SlotID) - 0x74 + 0x22 + 1);
	byte b13 = *(byte *)((int)GET_SLOT_NAME(SlotID) - 0x74 + 0x22 + 2);
	byte b14 = *(byte *)((int)GET_SLOT_NAME(SlotID) - 0x74 + 0x22 + 3);
	byte b15 = *(byte *)((int)GET_SLOT_NAME(SlotID) - 0x74 + 0x22 + 4);
	byte b16 = *(byte *)((int)GET_SLOT_NAME(SlotID) - 0x74 + 0x22 + 5);
	int _b11 = b11; int _b12 = b12; int _b13 = b13; int _b14 = b14; int _b15 = b15; int _b16 = b16;
	char* macAddressByte1 = (char*)(IntToHex0(_b11) + 6);
	char* macAddressByte2 = (char*)(IntToHex1(_b12) + 6);
	char* macAddressByte3 = (char*)(IntToHex2(_b13) + 6);
	char* macAddressByte4 = (char*)(IntToHex3(_b14) + 6);
	char* macAddressByte5 = (char*)(IntToHex4(_b15) + 6);
	char* macAddressByte6 = (char*)(IntToHex5(_b16) + 6);
	int portHexData = *(int*)(snuGamerClass + 0x20);
	char portHex[9];
	stradd_s(portHex, IntToHex(portHexData, true));
	char p_byte1[2] = { portHex[0], portHex[1] };
	char p_byte2[2] = { portHex[2], portHex[3] };
	char portHex2[5];
	stradd_s(portHex2, p_byte1);
	stradd_s(portHex2, p_byte2);
	stradd_s(temp, "<0xFF5733>IP:</0x>");
	stradd(temp, "<0x00FFFF>", 255 - sizeof(temp) - 1); straddi_s(temp, _b1); stradd_s(temp, "."); straddi_s(temp, _b2); stradd_s(temp, "."); straddi_s(temp, _b3); stradd_s(temp, "."); straddi_s(temp, _b4); stradd_s(temp, ":"); straddi_s(temp, HexToInt(portHex2)); stradd(temp, "</0x>", 255 - sizeof(temp) - 1);
	stradd_s(temp2, "<0xFF5733>Console IP:</0x>");
	stradd(temp2, "<0x00FFFF>", 255 - sizeof(temp2) - 1); straddi_s(temp2, _b5); stradd_s(temp2, "."); straddi_s(temp2, _b6); stradd_s(temp2, "."); straddi_s(temp2, _b7); stradd_s(temp2, "."); straddi_s(temp2, _b8); stradd(temp2, "</0x>", 255 - sizeof(temp2) - 1);
	stradd_s(temp3, "<0xFF5733>Console MAC:</0x>");
	stradd(temp3, "<0x00FFFF>", 255 - sizeof(temp3) - 1); stradd_s(temp3, macAddressByte1); stradd_s(temp3, ":"); stradd_s(temp3, macAddressByte2); stradd_s(temp3, ":"); stradd_s(temp3, macAddressByte3); stradd_s(temp3, ":"); stradd_s(temp3, macAddressByte4); stradd_s(temp3, ":"); stradd_s(temp3, macAddressByte5); stradd_s(temp3, ":"); stradd_s(temp3, macAddressByte6); stradd(temp3, "</0x>", 255 - sizeof(temp3) - 1);
	//console type
	unsigned char* b30 = (unsigned char *)(GET_SLOT_NAME(SlotID) - 0x74);//have to grab all 4 bytes
	//player pointeer
	unsigned char* point = (unsigned char *)((int)GET_SLOT_NAME(SlotID) - 0x74);
	stradd_s(temp4, "</0x> <0xFF5733>Pointer:</0x><0x00FFFF>");
	stradd_s(temp4, IntToHex(point, 1));
	stradd_s(temp4, "</0x> ");
	if (*(int*)(b30 + 0x34) == 250)
	{
		stradd(temp4, "<0xFF5733>System:</0x><0x00FFFF>Xbox 360</0x>", 255 - sizeof(temp4) - 1);
	}
	if (*(int*)(b30 + 0x34) != 250)
	{
		stradd(temp4, "<0xFF5733>System:</0x><0x00FFFF>Xbox One/Series</0x>", 255 - sizeof(temp4) - 1);
	}
	// ----------------------
	unsigned char* ORIGNAME2 = (unsigned char *)((int)GET_SLOT_NAME(SlotID) - 0x74 + 0x64);
	stradd_s(temp5, "<0xFF5733>Slot:</0x>");
	straddi_s(temp5, SlotID);
	stradd_s(temp5, " <0xFF5733>Name:</0x>");
	stradd_s(temp5, ORIGNAME2);
	// xuid print
	unsigned char* b17 = (unsigned char *)((int)GET_SLOT_NAME(SlotID) - 0x74 + 0x50);
	unsigned char* b18 = (unsigned char *)((int)GET_SLOT_NAME(SlotID) - 0x74 + 0x54);
	int XXUID1 = *(int*)b17;
	int XXUID2 = *(int*)b18;
	//uid print
	unsigned char* b19 = (unsigned char *)((int)GET_SLOT_NAME(SlotID) - 0x74 + 0x48);
	unsigned char* b20 = (unsigned char *)((int)GET_SLOT_NAME(SlotID) - 0x74 + 0x4C);
	int UID1 = *(int*)b19;
	int UID2 = *(int*)b20;
	//
	stradd(temp6, "<0xFF5733>XUID:</0x>", 255 - sizeof(temp6) - 1);
	stradd_s(temp6, "<0x00FFFF>");
	stradd_s(temp6, IntToHex(XXUID1, 1));
	stradd_s(temp6, IntToHex(XXUID2, 1));
	stradd_s(temp6, "</0x>");
	stradd_s(temp6, "  ");
	stradd(temp6, "<0xFF5733>UID:</0x>", 255 - sizeof(temp6) - 1);
	stradd_s(temp6, "<0x00FFFF>");
	stradd_s(temp6, IntToHex(UID1, 1));
	stradd_s(temp6, IntToHex(UID2, 1));
	stradd_s(temp6, "</0x>");
	if (_GET_CURRENT_TIME() > (timer3 + 0.5f))
	{
		_PRINT_CHAT(temp5, 0, 0, 0, 0, 0, 0);//name + slot
		_PRINT_CHAT(temp, 0, 0, 0, 0, 0, 0);//ip + port
		_PRINT_CHAT(temp2, 0, 0, 0, 0, 0, 0);//console ip
		_PRINT_CHAT(temp3, 0, 0, 0, 0, 0, 0);//console mac address
		_PRINT_CHAT(temp4, 0, 0, 0, 0, 0, 0);//system + player pointer
		_PRINT_CHAT(temp6, 0, 0, 0, 0, 0, 0);//xuid and uid
		timer3 = _GET_CURRENT_TIME();
	}
}
void NetworkPlayerMods()
{
	if (IS_SLOT_VALID(NetSlotId))
	{
		ve28.x += 0.5;
		ve31.x += 0.5;
		int Player = GET_SLOT_ACTOR(NetSlotId);
		if (DestroyActor0)
		{
			DESTROY_ACTOR(GET_SLOT_ACTOR(NetSlotId));
		}
		if (DestroyActorsHorse0)
		{
			int Player = GET_SLOT_ACTOR(NetSlotId);
			int PlayerMount = GET_MOUNT(Player);
			int PlayerVehicle = GET_VEHICLE(Player);
			if (IS_ACTOR_VALID(Player))
			{
				if (IS_ACTOR_VALID(PlayerMount))
				{
					DESTROY_ACTOR(PlayerMount);
				}
				if (IS_ACTOR_VALID(PlayerVehicle))
				{
					DESTROY_ACTOR(PlayerVehicle);
				}
			}
		}
		if (Xplode0)
		{
			if (IS_ACTOR_VALID(Player)) { GET_POSITION(GET_SLOT_ACTOR(NetSlotId), &ve28); _CREATE_EXPLOSION(&ve28, EXPLOSION_CannonballExplosion, true, &ve28, true); }
			if (!IS_ACTOR_VALID(Player)) { GET_SLOT_POSITION(NetSlotId, &ve27); _CREATE_EXPLOSION(&ve27, EXPLOSION_CannonballExplosion, true, &ve27, true); }
		}
		if (XplodeS0)
		{
			if (IS_ACTOR_VALID(Player)) { GET_POSITION(GET_SLOT_ACTOR(NetSlotId), &ve30); _CREATE_EXPLOSION(&ve30, EXPLOSION_ExplosionLargeNoFx, true, &ve30, true); }
			if (!IS_ACTOR_VALID(Player)) { GET_SLOT_POSITION(NetSlotId, &ve29); _CREATE_EXPLOSION(&ve29, EXPLOSION_ExplosionLargeNoFx, true, &ve29, true); }
		}
		if (HellFire0)
		{
			if (IS_ACTOR_VALID(Player)) { GET_POSITION(GET_SLOT_ACTOR(NetSlotId), &ve31); _CREATE_EXPLOSION(&ve31, EXPLOSION_FireBottleExplosion, true, &ve31, true); }
			if (!IS_ACTOR_VALID(Player)) { GET_SLOT_POSITION(NetSlotId, &ve32); _CREATE_EXPLOSION(&ve32, EXPLOSION_FireBottleExplosion, true, &ve32, true); }
		}
		if (erplode)
		{
			_NET_EXPLODE_ACTOR(GET_SLOT_ACTOR(NetSlotId));
		}
		if (PNETP0)
		{
			char CoordMessage[255];
			if (IS_ACTOR_VALID(GET_SLOT_ACTOR(NetSlotId)))
			{
				GET_POSITION(GET_SLOT_ACTOR(NetSlotId), &ve35);
				stradd_s(CoordMessage, "<green>HP:</green>");
				stradd(CoordMessage, _FLOAT_TO_STRING(GET_ACTOR_HEALTH(GET_SLOT_ACTOR(NetSlotId)), 1, 1), 255 - sizeof(CoordMessage) - 1);
				stradd_s(CoordMessage, " <purple>God:</purple>");
				straddi_s(CoordMessage, GET_ACTOR_INVULNERABILITY(GET_SLOT_ACTOR(NetSlotId)));
				stradd_s(CoordMessage, "\n<orange>Ped:</orange>(");
				straddi_s(CoordMessage, GET_ACTOR_ENUM(GET_SLOT_ACTOR(NetSlotId)));
				stradd_s(CoordMessage, ") ");
				stradd_s(CoordMessage, UNK_0xD98CB6F6(GET_SLOT_ACTOR(NetSlotId)));
			}
			if (!IS_ACTOR_VALID(GET_SLOT_ACTOR(NetSlotId)))GET_SLOT_POSITION(NetSlotId, &ve35);
			stradd_s(CoordMessage, "\n<blue>X:</blue>");
			stradd(CoordMessage, _FLOAT_TO_STRING(ve35.x, 1, 1), 255 - sizeof(CoordMessage) - 1);
			stradd_s(CoordMessage, " <blue>Y:</blue>");
			stradd(CoordMessage, _FLOAT_TO_STRING(ve35.y, 1, 1), 255 - sizeof(CoordMessage) - 1);
			stradd_s(CoordMessage, " <blue>Z:</blue>");
			stradd(CoordMessage, _FLOAT_TO_STRING(ve35.z, 1, 1), 255 - sizeof(CoordMessage) - 1);
			print2(CoordMessage, 1000); IPG(NetSlotId);
		}
		if (PA0)
		{
			ANIMAL_ACTOR_SET_DOMESTICATION(GET_SLOT_ACTOR(NetSlotId), 20); SET_ACTOR_RIDEABLE(GET_SLOT_ACTOR(NetSlotId), 1); ACTOR_MOUNT_ACTOR(self, GET_SLOT_ACTOR(NetSlotId));
		}
		if (BHorse0)
		{
			int mountobjlol2 = GET_MOST_RECENT_MOUNT(GET_SLOT_ACTOR(NetSlotId));
			Object mount_obj2 = UNK_0x4A2063EC(mountobjlol2);
			NET_REQUEST_OBJECT(mount_obj2);
			ACTOR_MOUNT_ACTOR(mount_obj2, GET_SLOT_ACTOR(NetSlotId));
		}
	}
}
void AutoBoolsOff()
{
	for (int i = 0; i <= 15; i++)
	{
		if (!IS_SLOT_VALID(i) && (NetSlotId == i))
		{
			Xplode0 = false;
			XplodeS0 = false;
			HellFire0 = false;
			PNETP0 = false;
			PA0 = false;
			BHorse0 = false;
			UpdatePlayer = false;
			erplode = false;
			DestroyActor0 = false;
			DestroyActorsHorse0 = false;
		}
	}
}
void AutoOffMenuSwitch()
{
	DestroyActor0 = false; DestroyActorsHorse0 = false; HellFire0 = false; Xplode0 = false; XplodeS0 = false; PA0 = false; BHorse0 = false; UpdatePlayer = false; erplode = false;
}
void TeleportActor(float x, float y, float z)
{
	ve36.x = x;
	ve36.y = y;
	ve36.z = z;
	if (IS_ACTOR_ON_FOOT(self))
	{
		TELEPORT_ACTOR(self, &ve36, 1, 1, 1);
	}
	if (IS_ACTOR_RIDING(self))
	{
		TELEPORT_ACTOR(GET_MOUNT(self), &ve36, 1, 1, 1);
	}
	if (IS_ACTOR_DRIVING_VEHICLE(self))
	{
		TELEPORT_ACTOR(GET_VEHICLE(self), &ve36, 1, 1, 1);
	}
}
void SpawnHorse(int actorEnum, Actor _actor)
{
	SET_ACTOR_INVULNERABILITY(GET_MOST_RECENT_MOUNT(self), 0);
	SET_ACTOR_UNKILLABLE(GET_MOST_RECENT_MOUNT(self), 0);
	if (SpawnTheMount == 0)
	{
		DESTROY_ACTOR(SpawnMount1); DESTROY_ACTOR(SpawnMount2); SpawnMount1 = CreateActor(actorEnum, _actor); SET_ACTOR_RIDEABLE(SpawnMount1, 1); WAIT(77); UNK_0x6C939AA7(SpawnMount1, 3); ACTOR_MOUNT_ACTOR(self, SpawnMount1); SET_ACTOR_HEALTH(SpawnMount1, GET_ACTOR_MAX_HEALTH(SpawnMount1));SpawnTheMount = 1;
	}
	else if (SpawnTheMount == 1)
	{
		SpawnMount2 = CreateActor(actorEnum, _actor); SET_ACTOR_RIDEABLE(SpawnMount2, 1); WAIT(77); UNK_0x6C939AA7(SpawnMount2, 3); ACTOR_MOUNT_ACTOR(self, SpawnMount2); SET_ACTOR_HEALTH(SpawnMount1, GET_ACTOR_MAX_HEALTH(SpawnMount1)); print2("Mount Spawn Limit Reached!", 3000); SpawnTheMount = 0;
	}
	GET_POSITION(self, &ve18); ve17 = ve18; ve17.y = ve18.y + 6; TELEPORT_ACTOR(GET_MOUNT(self), &ve17, 1, 1, 1);
}
void SpawnItzPedz(int actorEnum, Actor _actor)
{
	//GET_POSITION(self, &pedztp);
	if (!freecam || !specit)
	{
		GET_POSITION(self, &pedztp);
	}
	if (freecam)
	{
		GET_CAMERA_POSITION(camera, &pedztp);
	}
	if (specit)
	{
		GET_CAMERA_POSITION(GET_GAME_CAMERA(), &pedztp);
	}
	if (actorEnum != 1155 && actorEnum != 1156 && actorEnum != 1157 && actorEnum != 1158 && actorEnum != 1159 && actorEnum != 1160 && actorEnum != 1161 && actorEnum != 1162 && actorEnum != 1163 && actorEnum != 1164 && actorEnum != 1165 && actorEnum != 1166 && actorEnum != 1167 && actorEnum != 1168 && actorEnum != 1169 && actorEnum != 1170 && actorEnum != 1171 && actorEnum != 1172 && actorEnum != 1173 && actorEnum != 1174 && actorEnum != 1175 && actorEnum != 1176)
	{
		float heading = GET_HEADING(self);
		float dist = 0.4;
		float a = dist * SIN(heading);
		float b = dist * COS(heading);
		pedztp.x -= a;
		pedztp.z -= b;
		pedztp.y += 2.0;
	}
	char pedmsglol[255];
	if (SpawnThePed == 0) { DESTROY_ACTOR(SpawnPed[0]); DESTROY_ACTOR(SpawnPed[1]); DESTROY_ACTOR(SpawnPed[2]); DESTROY_ACTOR(SpawnPed[3]); DESTROY_ACTOR(SpawnPed[4]); DESTROY_ACTOR(SpawnPed[5]); DESTROY_ACTOR(SpawnPed[6]); DESTROY_ACTOR(SpawnPed[7]); DESTROY_ACTOR(SpawnPed[8]); DESTROY_ACTOR(SpawnPed[9]); SpawnPed[0] = CreateActor(actorEnum, _actor); SET_ACTOR_HEALTH(SpawnPed[0], GET_ACTOR_MAX_HEALTH(SpawnPed[0])); WAIT(200); SET_OBJECT_POSITION(SpawnPed[0], pedztp); print2(UNK_0xD98CB6F6(SpawnPed[0]), 2000); SpawnThePed = 1; }
	else if (SpawnThePed == 1) { SpawnPed[1] = CreateActor(actorEnum, _actor); SET_ACTOR_HEALTH(SpawnPed[1], GET_ACTOR_MAX_HEALTH(SpawnPed[1])); WAIT(200); SET_OBJECT_POSITION(SpawnPed[1], pedztp); print2(UNK_0xD98CB6F6(SpawnPed[1]), 2000); SpawnThePed = 2; }
	else if (SpawnThePed == 2) { SpawnPed[2] = CreateActor(actorEnum, _actor); SET_ACTOR_HEALTH(SpawnPed[2], GET_ACTOR_MAX_HEALTH(SpawnPed[2])); WAIT(200); SET_OBJECT_POSITION(SpawnPed[2], pedztp); print2(UNK_0xD98CB6F6(SpawnPed[2]), 2000); SpawnThePed = 3; }
	else if (SpawnThePed == 3) { SpawnPed[3] = CreateActor(actorEnum, _actor); SET_ACTOR_HEALTH(SpawnPed[3], GET_ACTOR_MAX_HEALTH(SpawnPed[3])); WAIT(200); SET_OBJECT_POSITION(SpawnPed[3], pedztp); print2(UNK_0xD98CB6F6(SpawnPed[3]), 2000); SpawnThePed = 4; }
	else if (SpawnThePed == 4) { SpawnPed[4] = CreateActor(actorEnum, _actor); SET_ACTOR_HEALTH(SpawnPed[4], GET_ACTOR_MAX_HEALTH(SpawnPed[4])); WAIT(200); SET_OBJECT_POSITION(SpawnPed[4], pedztp); print2(UNK_0xD98CB6F6(SpawnPed[4]), 2000); SpawnThePed = 5; }
	else if (SpawnThePed == 5) { SpawnPed[5] = CreateActor(actorEnum, _actor); SET_ACTOR_HEALTH(SpawnPed[5], GET_ACTOR_MAX_HEALTH(SpawnPed[5])); WAIT(200); SET_OBJECT_POSITION(SpawnPed[5], pedztp); print2(UNK_0xD98CB6F6(SpawnPed[5]), 2000); SpawnThePed = 6; }
	else if (SpawnThePed == 6) { SpawnPed[6] = CreateActor(actorEnum, _actor); SET_ACTOR_HEALTH(SpawnPed[6], GET_ACTOR_MAX_HEALTH(SpawnPed[6])); WAIT(200); SET_OBJECT_POSITION(SpawnPed[6], pedztp); print2(UNK_0xD98CB6F6(SpawnPed[6]), 2000); SpawnThePed = 7; }
	else if (SpawnThePed == 7) { SpawnPed[7] = CreateActor(actorEnum, _actor); SET_ACTOR_HEALTH(SpawnPed[7], GET_ACTOR_MAX_HEALTH(SpawnPed[7])); WAIT(200); SET_OBJECT_POSITION(SpawnPed[7], pedztp); print2(UNK_0xD98CB6F6(SpawnPed[7]), 2000); SpawnThePed = 8; }
	else if (SpawnThePed == 8) { SpawnPed[8] = CreateActor(actorEnum, _actor); SET_ACTOR_HEALTH(SpawnPed[8], GET_ACTOR_MAX_HEALTH(SpawnPed[8])); WAIT(200); SET_OBJECT_POSITION(SpawnPed[8], pedztp); print2(UNK_0xD98CB6F6(SpawnPed[8]), 2000); SpawnThePed = 9; }
	else if (SpawnThePed == 9) { SpawnPed[9] = CreateActor(actorEnum, _actor); SET_ACTOR_HEALTH(SpawnPed[9], GET_ACTOR_MAX_HEALTH(SpawnPed[9])); WAIT(200); SET_OBJECT_POSITION(SpawnPed[9], pedztp); stradd_s(pedmsglol, "Ped Spawn Limit Reached!\n"); stradd_s(pedmsglol, UNK_0xD98CB6F6(SpawnPed[9])); print2(pedmsglol, 5000); SpawnThePed = 0; }
}
void RideAbleAnimalsV3()
{
	if (!IS_ITERATOR_VALID(animalridez1))animalridez1 = CREATE_OBJECT_ITERATOR(FIND_NAMED_LAYOUT("playerlayout"));
	if (!IS_ITERATOR_VALID(animalridez2))animalridez2 = CREATE_OBJECT_ITERATOR(GET_AMBIENT_LAYOUT());
	if (!IS_ITERATOR_VALID(animalridez3))animalridez3 = CREATE_OBJECT_ITERATOR(FIND_NAMED_LAYOUT("trainer_layout"));
	ITERATE_ON_OBJECT_TYPE(animalridez1, OBJECT_TYPE_Actor);
	ITERATE_ON_OBJECT_TYPE(animalridez2, OBJECT_TYPE_Actor);
	ITERATE_ON_OBJECT_TYPE(animalridez3, OBJECT_TYPE_Actor);
	START_OBJECT_ITERATOR(animalridez1); START_OBJECT_ITERATOR(animalridez2); START_OBJECT_ITERATOR(animalridez3);
	int count = GET_NUM_ITERATOR_MATCHES(animalridez1) + GET_NUM_ITERATOR_MATCHES(animalridez2) + GET_NUM_ITERATOR_MATCHES(animalridez3);
	for (int i = 0; i < count; i++)
	{
		int actorrideit = OBJECT_ITERATOR_CURRENT(animalridez1);
		int actorrideit2 = OBJECT_ITERATOR_CURRENT(animalridez2);
		int actorrideit3 = OBJECT_ITERATOR_CURRENT(animalridez3);
		if (IS_ACTOR_VALID(actorrideit))
		{
			if (actorrideit != GET_PLAYER_ACTOR(0))
			{
				if (IS_ACTOR_ANIMAL(actorrideit))
				{
					SET_ACTOR_RIDEABLE(actorrideit, 1); SET_ALLOW_RIDE_BY_PLAYER(actorrideit, 1); ANIMAL_ACTOR_SET_DOMESTICATION(actorrideit, 0);
				}
				if (IS_ACTOR_VEHICLE(actorrideit))
				{
					SET_VEHICLE_ENGINE_RUNNING(actorrideit, 1); SET_VEHICLE_EJECTION_ENABLED(actorrideit, 0); SET_VEHICLE_ALLOWED_TO_DRIVE(actorrideit, 1); SET_VEHICLE_PASSENGERS_ALLOWED(actorrideit, 1);
					ENABLE_VEHICLE_SEAT(actorrideit, 0, 1); ENABLE_VEHICLE_SEAT(actorrideit, 1, 1); ENABLE_VEHICLE_SEAT(actorrideit, 2, 1);
					ENABLE_VEHICLE_SEAT(actorrideit, 3, 1); ENABLE_VEHICLE_SEAT(actorrideit, 4, 1); ENABLE_VEHICLE_SEAT(actorrideit, 5, 1); ENABLE_VEHICLE_SEAT(actorrideit, 6, 1);
				}
			}
		}
		if (IS_ACTOR_VALID(actorrideit2))
		{
			if (actorrideit2 != GET_PLAYER_ACTOR(0))
			{
				if (IS_ACTOR_ANIMAL(actorrideit2))
				{
					SET_ACTOR_RIDEABLE(actorrideit2, 1); SET_ALLOW_RIDE_BY_PLAYER(actorrideit2, 1); ANIMAL_ACTOR_SET_DOMESTICATION(actorrideit2, 0);
				}
				if (IS_ACTOR_VEHICLE(actorrideit2))
				{
					SET_VEHICLE_ENGINE_RUNNING(actorrideit2, 1); SET_VEHICLE_EJECTION_ENABLED(actorrideit2, 0); SET_VEHICLE_ALLOWED_TO_DRIVE(actorrideit2, 1); SET_VEHICLE_PASSENGERS_ALLOWED(actorrideit2, 1);
					ENABLE_VEHICLE_SEAT(actorrideit2, 0, 1); ENABLE_VEHICLE_SEAT(actorrideit2, 1, 1); ENABLE_VEHICLE_SEAT(actorrideit2, 2, 1);
					ENABLE_VEHICLE_SEAT(actorrideit2, 3, 1); ENABLE_VEHICLE_SEAT(actorrideit2, 4, 1); ENABLE_VEHICLE_SEAT(actorrideit2, 5, 1); ENABLE_VEHICLE_SEAT(actorrideit2, 6, 1);
				}
			}
		}
		if (IS_ACTOR_VALID(actorrideit3))
		{
			if (actorrideit3 != GET_PLAYER_ACTOR(0))
			{
				if (IS_ACTOR_ANIMAL(actorrideit3))
				{
					SET_ACTOR_RIDEABLE(actorrideit3, 1); SET_ALLOW_RIDE_BY_PLAYER(actorrideit3, 1); ANIMAL_ACTOR_SET_DOMESTICATION(actorrideit3, 0);
				}
				if (IS_ACTOR_VEHICLE(actorrideit3))
				{
					SET_VEHICLE_ENGINE_RUNNING(actorrideit3, 1); SET_VEHICLE_EJECTION_ENABLED(actorrideit3, 0); SET_VEHICLE_ALLOWED_TO_DRIVE(actorrideit3, 1); SET_VEHICLE_PASSENGERS_ALLOWED(actorrideit3, 1);
					ENABLE_VEHICLE_SEAT(actorrideit3, 0, 1); ENABLE_VEHICLE_SEAT(actorrideit3, 1, 1); ENABLE_VEHICLE_SEAT(actorrideit3, 2, 1);
					ENABLE_VEHICLE_SEAT(actorrideit3, 3, 1); ENABLE_VEHICLE_SEAT(actorrideit3, 4, 1); ENABLE_VEHICLE_SEAT(actorrideit3, 5, 1); ENABLE_VEHICLE_SEAT(actorrideit3, 6, 1);
				}
			}
		}
		OBJECT_ITERATOR_NEXT(animalridez1); OBJECT_ITERATOR_NEXT(animalridez2); OBJECT_ITERATOR_NEXT(animalridez3);
	}
	DESTROY_ITERATOR(animalridez1); DESTROY_ITERATOR(animalridez2); DESTROY_ITERATOR(animalridez3);
}
void MedusaCleanUp()
{
	if (IS_ACTOR_DEAD(GET_LAST_ATTACKER(self)))
	{
		CLEAR_LAST_HIT(self);
	}
	if (IS_ACTOR_ALIVE(GET_LAST_ATTACKER(self)))
	{
		CLEAR_LAST_HIT(self);
	}
	if (!IS_ACTOR_VALID(GET_LAST_ATTACKER(self)))
	{
		CLEAR_LAST_HIT(self);
	}
}
void DEColor()
{
	if (DETog == 0) { BlueDE = 0; ZombDE = 0; ClearDE = 1; print2("<orange>Deadeye Color:</orange> CLEAR", 2000); DETog = 1; }
	else if (DETog == 1) { BlueDE = 1; ZombDE = 0; ClearDE = 0; print2("<orange>Deadeye Color:</orange> <blue>BLUE</blue>", 2000); DETog = 2; }
	else if (DETog == 2) { BlueDE = 0; ZombDE = 1; ClearDE = 0; print2("<orange>Deadeye Color:</orange> <red>RED</red>", 2000); DETog = 3; }
	else if (DETog == 3) { BlueDE = 0; ZombDE = 0; ClearDE = 0; print2("<orange>Deadeye Color:</orange> <green>RESET</green>", 2000); DETog = 0; }
}
void AIOBools()
{
	if (lodmod)
	{
		if (modelgotloaded == 1)//hack to allow us to change/load to our loaded models no matter what after we die
		{
			if (!IS_ACTOR_DEAD(self))
			{
				if (IS_ACTOR_VALID(self))
				{
					if (GET_ACTOR_ENUM(self) != DefautSavedModel)
					{
						ChangeModel(self, DefautSavedModel);
						GiveActorAllWeapons();
					}
				}
			}
		}
	}
	if (aimbott2)
	{
		if (IS_PLAYER_WEAPON_ZOOMED(self))
		{
			Actor ReticleActor = _GET_ACTOR_IN_RETICLE(self, 20);
			if (IS_ACTOR_VALID(ReticleActor))
			{
				UNK_0x12A86E9D(ReticleActor, "head");//Hardlock Bone
				UNK_0x5613615B(ReticleActor, "head");//SoftLock Bone
			}
		}
	}
	if (SpoofDe)
	{
		for (int i = 0; i <= 15; i++)
		{
			if (IS_SLOT_VALID(i))
			{
				unsigned char* SPOOFNAME1 = (unsigned char *)((int)GET_SLOT_NAME(i) - 0x74 + 0x74);
				unsigned char* ORIGNAME1 = (unsigned char *)((int)GET_SLOT_NAME(i) - 0x74 + 0x64);
				strcpy(SPOOFNAME1, ORIGNAME1, 255 - sizeof(SPOOFNAME1) - 15);
			}
		}
	}
	if (AntiLite)
	{
		if (IS_ACTOR_MOUNTED(self))
		{
			DESTROY_ACTOR(GET_RIDER(self));
		}
		if (!IS_ITERATOR_VALID(iteratoranti1))iteratoranti1 = CREATE_OBJECT_ITERATOR(FIND_NAMED_LAYOUT("playerlayout"));
		if (!IS_ITERATOR_VALID(iteratoranti2))iteratoranti2 = CREATE_OBJECT_ITERATOR(UNK_0xADE13224());
		if (!IS_ITERATOR_VALID(iteratoranti3))iteratoranti3 = CREATE_OBJECT_ITERATOR(GET_AMBIENT_LAYOUT());
		ITERATE_ON_OBJECT_TYPE(iteratoranti1, OBJECT_TYPE_Actor);
		ITERATE_ON_OBJECT_TYPE(iteratoranti2, OBJECT_TYPE_Actor);
		ITERATE_ON_OBJECT_TYPE(iteratoranti3, OBJECT_TYPE_Actor);
		START_OBJECT_ITERATOR(iteratoranti1); START_OBJECT_ITERATOR(iteratoranti2); START_OBJECT_ITERATOR(iteratoranti3);
		int matches = (GET_NUM_ITERATOR_MATCHES(iteratoranti1) + GET_NUM_ITERATOR_MATCHES(iteratoranti2) + GET_NUM_ITERATOR_MATCHES(iteratoranti3));
		for (int i = 0; i < matches; i++)
		{
			int currentanti1 = OBJECT_ITERATOR_CURRENT(iteratoranti1);
			int currentanti2 = OBJECT_ITERATOR_CURRENT(iteratoranti2);
			int currentanti3 = OBJECT_ITERATOR_CURRENT(iteratoranti3);
			if (currentanti1 != self && !IS_ACTOR_PLAYER(currentanti1) && IS_ACTOR_HUMAN(currentanti1)) { DESTROY_ACTOR(currentanti1); }//delete player spawned peds only (freeze peds, bodyguards etc)
			if (currentanti2 != self && !IS_ACTOR_PLAYER(currentanti2) && IS_ACTOR_VEHICLE(currentanti2)) { DESTROY_ACTOR(currentanti2); }//wagon and car protect
			if (currentanti3 != self && !IS_ACTOR_PLAYER(currentanti3) && IS_ACTOR_VEHICLE(currentanti3)) { DESTROY_ACTOR(currentanti3); }//wagon and car protect
			OBJECT_ITERATOR_NEXT(iteratoranti1); OBJECT_ITERATOR_NEXT(iteratoranti2); OBJECT_ITERATOR_NEXT(iteratoranti3);
		}
		DESTROY_ITERATOR(iteratoranti1); DESTROY_ITERATOR(iteratoranti2); DESTROY_ITERATOR(iteratoranti3);
		DESTROY_LAYOUT_OBJECTS(FIND_NAMED_LAYOUT("trainer_layout"));
	}
	if (fuckER)
	{
		_NET_EXPLODE_ACTOR(GET_LAST_ATTACK_TARGET(self));
		if (!IS_ACTOR_PLAYER(GET_LAST_ATTACK_TARGET(self)))
		{
			vector3 NPCCoord;
			GET_POSITION(GET_LAST_ATTACK_TARGET(self), &NPCCoord);
			DESTROY_ACTOR(GET_LAST_ATTACK_TARGET(self));
			_CREATE_EXPLOSION(&NPCCoord, EXPLOSION_ATRifleExplosion_MP, 1, &NPCCoord, 1);
		}
		CLEAR_LAST_ATTACK(self);//test and fix if need be
	}
	if (NoclipON)
	{
		vector3 loc;
		GET_POSITION(self, &loc);
		float heading = GET_HEADING(self);
		float a = 1.0 * SIN(heading);
		float b = 1.0 * COS(heading);
		loc.x -= a;
		loc.z -= b;
		vector3 CamRotation = GetGameCameraRotation();
		float Heading = CamRotation.z; float ass = FABS(Heading) / 90.0f;
		if (GetButtonDown(DPAD_UP)) { SET_ACTOR_HEADING(self, CamRotation.z, 1); SET_OBJECT_POSITION(self, loc); }
		if (GetButtonDown(BUTTON_L3)) { TASK_CLEAR(self); GET_POSITION(self, &ve16); ve15 = ve16; ve15.y = ve16.y - 1; TELEPORT_ACTOR(self, &ve15, 1, 1, 1); SET_PLAYER_POSTURE(self, 0, 0); }
		if (GetButtonDown(BUTTON_R1)) { TASK_CLEAR(self); GET_POSITION(self, &ve18); ve17 = ve18; ve17.y = ve18.y + 1; TELEPORT_ACTOR(self, &ve17, 1, 1, 1); SET_PLAYER_POSTURE(self, 0, 0); }
		if (GetButton(BUTTON_B)) { SET_MOVER_FROZEN(self, 0); NoclipON = false; }
		if (ass > 1.0f) { ass -= 1.0f; }
	}
	if (IS_PLAYER_DEADEYE(self) && (ClearDE))
	{
		BlueDEint = 0;
		ZombDEint = 0;
		ClearDEint = 1;
		UNK_0xB6CA7EBF("FX_Deadeye.ppp"); UNK_0xB6CA7EBF("UI_Pause.ppp"); UNK_0xB6CA7EBF("MP_ShowdownBlueTeam.ppp");
	}
	if (IS_PLAYER_DEADEYE(self) && (BlueDE))
	{
		ZombDEint = 0;
		ClearDEint = 0;
		BlueDEint = 1;
		UNK_0xB6CA7EBF("UI_Pause.ppp");
		UNK_0x6E946AF8("MP_ShowdownBlueTeam.ppp");
	}
	if (IS_PLAYER_DEADEYE(self) && (ZombDE))
	{
		BlueDEint = 0;
		ClearDEint = 0;
		ZombDEint = 1;
		UNK_0xB6CA7EBF("MP_ShowdownBlueTeam.ppp");
		UNK_0x6E946AF8("UI_Pause.ppp");
	}
	if (!IS_PLAYER_DEADEYE(self))
	{
		if (BlueDEint == 1 || ClearDEint == 1 || ZombDEint == 1)
		{
			UNK_0xB6CA7EBF("FX_Deadeye.ppp"); UNK_0xB6CA7EBF("UI_Pause.ppp"); UNK_0xB6CA7EBF("MP_ShowdownBlueTeam.ppp");
			BlueDEint = 0; ClearDEint = 0; ZombDEint = 0;
		}
	}
	if (IS_ACTOR_ANIMAL(self))//hack to fix player if playing as a animal and get stuck in idle animation.
	{
		if (GetButton(BUTTON_LT))
		{
			TASK_CLEAR(self);
		}
	}
	if (UpdateSelf)
	{
		SET_ACTOR_STOP_UPDATE(self, 1);
	}
	if (UpdatePlayer)
	{
		SET_ACTOR_STOP_UPDATE(GET_SLOT_ACTOR(NetSlotId), 1);
	}
	if (IS_ACTOR_VALID(SpawnCar1))
	{
		ENABLE_VEHICLE_SEAT(SpawnCar1, 0, 1); ENABLE_VEHICLE_SEAT(SpawnCar1, 1, 1); SET_VEHICLE_ENGINE_RUNNING(SpawnCar1, 1); SET_VEHICLE_EJECTION_ENABLED(SpawnCar1, 0); SET_VEHICLE_PASSENGERS_ALLOWED(SpawnCar1, 1);
		ENABLE_VEHICLE_SEAT(SpawnCar1, 2, 1); ENABLE_VEHICLE_SEAT(SpawnCar1, 3, 1); ENABLE_VEHICLE_SEAT(SpawnCar1, 4, 1); ENABLE_VEHICLE_SEAT(SpawnCar1, 5, 1); ENABLE_VEHICLE_SEAT(SpawnCar1, 6, 1); SET_VEHICLE_ALLOWED_TO_DRIVE(SpawnCar1, 1);
	}
	if (God)
	{
		SET_ACTOR_PROOF(self, -1); SET_ACTOR_INVULNERABILITY(self, 1);
		if (IS_ACTOR_RIDING(self))
		{
			SET_ACTOR_INVULNERABILITY(GET_MOUNT(self), 1);
			SET_ACTOR_HEALTH(GET_MOUNT(self), GET_ACTOR_MAX_HEALTH(GET_MOUNT(self)));
		}
		if (!IS_ACTOR_RIDING(self))
		{
			SET_ACTOR_INVULNERABILITY(GET_MOUNT(self), 0);
			SET_ACTOR_INVULNERABILITY(GET_MOST_RECENT_MOUNT(self), 0);
		}
	}
	if (HrsStam)
	{
		_CHEAT_INFINITE_HORSE_STAMINA(1);
		if (IS_ACTOR_DRIVING_VEHICLE(self)) { for (int i = 0; i <= 3; i++) { HORSE_SET_CURR_FRESHNESS(GET_DRAFT_ACTOR(i, GET_VEHICLE(self)), TO_FLOAT(100)); HORSE_LOCK_FRESHNESS(GET_DRAFT_ACTOR(i, GET_VEHICLE(self))); } }
		if (!IS_ACTOR_DRIVING_VEHICLE(self)) { for (int i = 0; i <= 3; i++) { HORSE_UNLOCK_FRESHNESS(GET_DRAFT_ACTOR(i, GET_ACTOR_MOST_RECENT_VEHICLE(self))); } }
	}
	if (IrishDrunk)
	{
		SET_ACTOR_DRUNK(self, 1);
	}
	if (DeMiGod)
	{
		SET_ACTOR_PROOF(self, -1);
		SET_ACTOR_INVULNERABILITY(self, 0);
		if (IS_ACTOR_RIDING(self))
		{
			SET_ACTOR_INVULNERABILITY(GET_MOUNT(self), 1);
			SET_ACTOR_HEALTH(GET_MOUNT(self), GET_ACTOR_MAX_HEALTH(GET_MOUNT(self)));
			SET_ACTOR_PROOF(GET_MOUNT(self), 24);
		}
		if (!IS_ACTOR_RIDING(self))
		{
			SET_ACTOR_INVULNERABILITY(GET_MOUNT(self), 0);
			SET_ACTOR_PROOF(GET_MOUNT(self), 24);
			SET_ACTOR_INVULNERABILITY(GET_MOST_RECENT_MOUNT(self), 0);
			SET_ACTOR_PROOF(GET_MOST_RECENT_MOUNT(self), 24);
		}
	}
	if (!DeMiGod)
	{
		if (IS_ACTOR_RIDING(self) && !God)
		{
			SET_ACTOR_INVULNERABILITY(GET_MOUNT(self), 0);
			SET_ACTOR_PROOF(GET_MOUNT(self), 24);
		}
		if (!IS_ACTOR_RIDING(self) && !God)
		{
			SET_ACTOR_INVULNERABILITY(GET_MOST_RECENT_MOUNT(self), 0);
			SET_ACTOR_PROOF(GET_MOST_RECENT_MOUNT(self), 24);
			SET_ACTOR_INVULNERABILITY(GET_MOUNT(self), 0);
			SET_ACTOR_PROOF(GET_MOUNT(self), 24);
		}
	}
	if (NoLoading)
	{
		SET_PLAYER_CONTROL(self, 1, 0, 0);
		if (UI_ISACTIVE("LoadingScreen"))
		{
			UI_ACTIVATE("HudSceneLayer");
			UNK_0xD1D1D467("HudSceneLayer");
			UNK_0x594F2657("HudSceneLayer");
			UI_ACTIVATE("HudSceneOnline");
			UNK_0xD1D1D467("HudSceneOnline");
			UI_SEND_EVENT("net.worldLoaded");
			UI_SEND_EVENT("loadComplete");
			UI_EXIT("LoadingScreen");
		}
	}
	if (XP)
	{
		SET_ACTOR_INVULNERABILITY(self, 1);
		SET_ACTOR_HEALTH(self, -999999);
		SET_ACTOR_INVULNERABILITY(self, 0);
		SET_ACTOR_HEALTH(self, 50);
	}
	if (IgnoreON)
	{
		AI_IGNORE_ACTOR(self);
	}
	if (invisible)
	{
		_NET_VISIBILITY(self, 0);
	}
	if (PLATFORM == PLATFORM_X360 && (SuperJump) && GetButtonDown(BUTTON_X) && IS_ACTOR_ALIVE(self))
	{
		GET_POSITION(self, &ve41);
		ve40 = ve41;
		ve40.y = ve41.y - 1.9;
		_CREATE_EXPLOSION(&ve40, EXPLOSION_ExplosionLargeNoFx, true, &ve40, true);
	}
	if (AntiRagDoll)
	{
		if (IS_ACTOR_RAGDOLL(self))
		{
			ACTOR_RESET_ANIMS(self, 1);
			TASK_CROUCH(self, 1);
			TASK_CROUCH(self, 0);
		}
	}
	if (AntiRagDoll2)
	{
		if (!IS_ACTOR_ON_GROUND(self) && !IS_ACTOR_RIDING(self) && !IS_ACTOR_INSIDE_VEHICLE(self) && !IS_ACTOR_USING_LEDGE(self) && !IS_ACTOR_ON_LADDER(self) && !IS_ACTOR_RIDING_VEHICLE(self))
		{
			UNK_0x7957CA4F(self, 0, 0);
		}
		if (IS_ACTOR_RAGDOLL(self))
		{
			ACTOR_RESET_ANIMS(self, 1);
		}
	}
	if (DeadEye1Hit)
	{
		int DeadTarget = GET_LAST_ATTACK_TARGET(self);
		SET_DEADEYE_DAMAGE_SCALING(self, 100.0f);
		if (DeadTarget != GET_PLAYER_ACTOR(0) && !IS_ACTOR_PLAYER(DeadTarget))
		{
			KILL_ACTOR(DeadTarget);
			KILL_ACTOR(DeadTarget);
			CLEAR_LAST_ATTACK(self);
		}
	}
	if (DeadEyeInf1)
	{
		SET_INFINITE_DEADEYE(self, 1);
		SET_DEADEYE_REGENERATION_RATE(self, TO_FLOAT(500), 1);
		SET_DEADEYE_REGENERATION_RATE_MULTIPLIER(self, TO_FLOAT(500));
	}
	if (StandStillFucker)
	{
		for (int i = 0; i <= 9; i++)
		{
			TASK_STAND_STILL(SpawnPed[i], 1, 1, 1);
		}
	}
	if (PedzFollow)
	{
		SET_ACTOR_IS_THE_BEASTMASTER(self, 1);//temp fix for animal followers
		for (int i = 0; i <= 9; i++)
		{
			TASK_FOLLOW_ACTOR(SpawnPed[i], self);
		}
	}
	if (GetButton(BUTTON_L1) && (XPON))
	{
		XP = true;
	}
	if (GetButton(BUTTON_R1) && (XPON))
	{
		XP = false;
	}
	if (IS_ACTOR_HUMAN(GET_LAST_ATTACK_TARGET(self)) && (CopyGun))
	{
		if (GET_LAST_ATTACK_TARGET(self) != GET_PLAYER_ACTOR(0))
		{
			ChangeModel(self, GET_ACTOR_ENUM(GET_LAST_ATTACK_TARGET(self)));
			print2("Copied Ped", 2000);
			CLEAR_LAST_ATTACK(self);
		}
	}
	if (CarSpeedBoost)
	{
		vector3 loc;
		GET_POSITION(self, &loc);
		float heading = GET_HEADING(self);
		float a = 1.0 * SIN(heading);
		float b = 1.0 * COS(heading);
		loc.x -= a;
		loc.z -= b;
		vector3 CamRotation = GetGameCameraRotation();
		float Heading = CamRotation.z; float ass = FABS(Heading) / 90.0f;
		int Speed = 36;
		if (IS_ACTOR_DRIVING_VEHICLE(self))
		{
			int My_Super_Subaru = GET_VEHICLE(self);
			if (GetButtonDown(BUTTON_R2)) { SET_ACTOR_SPEED(My_Super_Subaru, TO_FLOAT(Speed)); }
			if (GetButtonDown(BUTTON_L1)) { SET_ACTOR_SPEED(My_Super_Subaru, TO_FLOAT(-Speed)); }
			if (GetButtonDown(BUTTON_L2)) { SET_ACTOR_SPEED(My_Super_Subaru, TO_FLOAT(0)); }
			if (GetButtonDown(DPAD_UP)) { SET_ACTOR_HEADING(My_Super_Subaru, CamRotation.z, 1); }
			if (GetButtonDown(BUTTON_L3)) { GET_POSITION(self, &ve16); ve15 = ve16; ve15.y = ve16.y + 1; TELEPORT_ACTOR(My_Super_Subaru, &ve15, 1, 1, 1); }
		}
	}
	if (Timez)
	{
		SET_TIME_ACCELERATION(TO_FLOAT(5000));
	}
	if (GET_LAST_ATTACK_TARGET(self) && (DeleteGun))
	{
		if (GET_LAST_ATTACK_TARGET(self) != GET_PLAYER_ACTOR(0))
		{
			DESTROY_ACTOR(GET_LAST_ATTACK_TARGET(self));
			DESTROY_ACTOR(GET_LAST_ATTACK_TARGET(self));
			CLEAR_LAST_ATTACK(self);
		}
	}
	if (IS_ACTOR_SHOOTING(self) && (nReload))
	{
		_ADD_AMMO_OF_TYPE(self, GET_AMMO_ENUM(GET_WEAPON_IN_HAND(self)), TO_FLOAT(100), 1, 0);
		ACTOR_SET_WEAPON_AMMO(self, GET_WEAPON_IN_HAND(self), TO_FLOAT(55));
	}
	if (IS_ACTOR_DEAD(self) && (DeMiGod))
	{
		ChangeModel(self, GET_ACTOR_ENUM(self));GiveActorAllWeapons();
	}
	if (AnimalBypassON)
	{
		RideAbleAnimalsV3();
	}
	if (Pro6)
	{
		if (IS_ACTOR_MOUNTED(self))
		{
			DESTROY_ACTOR(GET_RIDER(self));
		}
	}
	if (UndeadFire)
	{
		ENABLE_WORLD_SECTOR("dlc06x");
		ENABLE_CHILD_SECTOR("dlc_agv_zombieFire01x");
		ENABLE_CHILD_SECTOR("dlc_agv_zombieDebris01x");
		ENABLE_CHILD_SECTOR("dlc_arm_zombieFire01x");
		ENABLE_CHILD_SECTOR("dlc_but_zombieFire01x");
		ENABLE_CHILD_SECTOR("dlc_cas_zombieFire01x");
		ENABLE_CHILD_SECTOR("dlc_chu_zombieFire01x");
		ENABLE_CHILD_SECTOR("dlc_chu_zombieDebris01x");
		ENABLE_CHILD_SECTOR("dlc_cri_zombieFire01x");
		ENABLE_CHILD_SECTOR("dlc_dix_zombieFire01x");
		ENABLE_CHILD_SECTOR("dlc_elm_zombieFire01x");
		ENABLE_CHILD_SECTOR("dlc_elm_zombieDebris01x");
		ENABLE_CHILD_SECTOR("dlc_esc_zombieFire01x");
		ENABLE_CHILD_SECTOR("dlc_esc_zombieDebris01x");
		ENABLE_CHILD_SECTOR("dlc_frb_zombieFire01x");
		ENABLE_CHILD_SECTOR("dlc_gap_zombieFire01x");
		ENABLE_CHILD_SECTOR("dlc_hen_zombieFire01x");
		ENABLE_CHILD_SECTOR("dlc_hen_zombieDebris01x");
		ENABLE_CHILD_SECTOR("dlc_lsh_zombieFire01x");
		ENABLE_CHILD_SECTOR("dlc_lsh_zombieDebris01x");
		ENABLE_CHILD_SECTOR("dlc_mtp_zombieFire01x");
		ENABLE_CHILD_SECTOR("dlc_nos_zombieDebris01x");
		ENABLE_CHILD_SECTOR("dlc_nos_zombieFire01x");
		ENABLE_CHILD_SECTOR("dlc_pik_zombieFire01x");
		ENABLE_CHILD_SECTOR("dlc_pln_zombieFire01x");
		ENABLE_CHILD_SECTOR("dlc_ram_zombieFire01x");
		ENABLE_CHILD_SECTOR("dlc_rat_zombieFire01x");
		ENABLE_CHILD_SECTOR("dlc_rwf_zombieFire01x");
		ENABLE_CHILD_SECTOR("dlc_rwf_zombieDebris01x");
		ENABLE_CHILD_SECTOR("dlc_sol_zombieFire01x");
		ENABLE_CHILD_SECTOR("dlc_tes_zombieFire01x");
		ENABLE_CHILD_SECTOR("dlc_thi_zombieFire01x");
		ENABLE_CHILD_SECTOR("dlc_thi_zombieDebris01x");
		ENABLE_CHILD_SECTOR("dlc_tor_zombieFire01x");
		ENABLE_CHILD_SECTOR("dlc_twr_zombieFire01x");
		ENABLE_CHILD_SECTOR("dlc_twr_zombieDebris01x");
		ENABLE_CHILD_SECTOR("dlc_upr_zombieFire01x");
		ENABLE_CHILD_SECTOR("dlc_ven_zombieFire01x");
		ENABLE_CHILD_SECTOR("dlc_ven_zombieDebris01x");
		ENABLE_CHILD_SECTOR("dlc_war_zombieFire01x");
		ENABLE_CHILD_SECTOR("dlc_war_zombieDebris01x");
		ENABLE_CHILD_SECTOR("dlc_blk_zombieFire01x");
		ENABLE_CHILD_SECTOR("dlc_blk_zombieDebris01x");
		ENABLE_CHILD_SECTOR("dlc_blk_zombieGraffiti01x");
	}
	if (UndeadMapz)
	{
		//Undead shit enabled??
		ENABLE_WORLD_SECTOR("dlc06x");
		ENABLE_CHILD_SECTOR("dlc_bac_swampCabin01props01x");
		ENABLE_CHILD_SECTOR("dlc_l_15x");
		ENABLE_CHILD_SECTOR("dlc_fod_ladders01x");
		ENABLE_CHILD_SECTOR("dlc_cas_whorehouse01Props01x");
		ENABLE_CHILD_SECTOR("icarus");
		ENABLE_CHILD_SECTOR("dlc_fom_guardTowerProps01x");
		ENABLE_CHILD_SECTOR("dlc_ple_house01props01x");
		ENABLE_CHILD_SECTOR("dlc_sol_houseProps01x");
		ENABLE_CHILD_SECTOR("dlc_pln_tents01Props01x");
		ENABLE_CHILD_SECTOR("dlc_tan_residence01props01x");
		ENABLE_CHILD_SECTOR("dlc_lsh_walls01props01x");
		ENABLE_CHILD_SECTOR("dlc_lsh_trainstation01props01x");
		ENABLE_CHILD_SECTOR("dlc_lsh_church01Props01x");
		ENABLE_CHILD_SECTOR("dlc_hen_flagsTorn01x");
		ENABLE_CHILD_SECTOR("dlc_ben_trainStation01Props01x");
		ENABLE_CHILD_SECTOR("dlc_fom_ladders01x");
		//ranch barn undead/sp burned
		ENABLE_CHILD_SECTOR("hen_barn02x");
		ENABLE_CHILD_SECTOR("hen_barn02props01x");
		//ENABLE_CHILD_SECTOR("dlc_hen_barn01props01x");
		DISABLE_CHILD_SECTOR("hen_barn01x");
		DISABLE_CHILD_SECTOR("hen_barn01props01x");
		DISABLE_CHILD_SECTOR("hen_barn01props02x");
		//armadillo modified
		ENABLE_CHILD_SECTOR("dlc_arm_saloon01props01x");
		DISABLE_CHILD_SECTOR("arm_saloon01props01x");
		ENABLE_CHILD_SECTOR("dlc_arm_sheriffsOffice01props01x");
		ENABLE_CHILD_SECTOR("dlc_arm_corralPens01props01x");
		//beeachers modified
		DISABLE_CHILD_SECTOR("beh_silo02x");
		ENABLE_CHILD_SECTOR("beh_silo01x");
		ENABLE_CHILD_SECTOR("beh_grave02x");
		ENABLE_CHILD_SECTOR("beh_grave03x");
		ENABLE_CHILD_SECTOR("dlc_beh_catacombs01x");
		ENABLE_CHILD_SECTOR("dlc_beh_catacombs01props01x");
		ENABLE_CHILD_SECTOR("dlc_beh_house01props01x");
		ENABLE_CHILD_SECTOR("dlc_beh_fireplace01x");
		//tormeada military camp modified
		DISABLE_CHILD_SECTOR("tor_militaryCamp02x");
		ENABLE_CHILD_SECTOR("tor_militaryCamp01x");
		//Catacombs enabled
		ENABLE_CHILD_SECTOR("dlc_esc_zombieCave01x");
		ENABLE_CHILD_SECTOR("dlc_esc_zombieCave01Props01x");
		ENABLE_CHILD_SECTOR("dlc_esc_zombieCave01Props02x");
		ENABLE_CHILD_SECTOR("dlc_esc_zombieCave01Props03x");
		ENABLE_CHILD_SECTOR("dlc_esc_bullRing02x");
		ENABLE_CHILD_SECTOR("dlc_esc_bullRing02Props01x");
		DISABLE_CHILD_SECTOR("dlc_esc_zombieCave02x");
		DISABLE_CHILD_SECTOR("esc_flags01");
		DISABLE_CHILD_SECTOR("esc_bullRing01x");
		DISABLE_CHILD_SECTOR("esc_bullRing01Props01x");
		DISABLE_CHILD_SECTOR("esc_villaWall04x");
		ENABLE_CHILD_SECTOR("esc_villaWall05x");
		//misc shit??/
		ENABLE_CHILD_SECTOR("dlc_blk_generalBuilding03props01x");
		ENABLE_CHILD_SECTOR("dlc_blk_generalBuilding09Props01x");
		ENABLE_CHILD_SECTOR("dlc_blk_zombieGraffiti01x");
		ENABLE_CHILD_SECTOR("dlc_blk_flagsTorn01x");
		//Blackwater shades ENABLE IN MP
		ENABLE_CHILD_SECTOR("blk_forgeMill_int_shade_01x");
		ENABLE_CHILD_SECTOR("blk_sawMill_int_shade_01x");
		//morning star boat disable
		ENABLE_WORLD_SECTOR("morningStar");
		ENABLE_CHILD_SECTOR("blk_barge01Props01x");
		ENABLE_CHILD_SECTOR("blk_barge01x");
		ENABLE_CHILD_SECTOR("mor_morningStar01_int_Props01x");
		ENABLE_CHILD_SECTOR("mor_morningStar_int_01x");
		ENABLE_CHILD_SECTOR("mor_morningStar_int_shade_01x");
		//bw gunshop enable
		ENABLE_CHILD_SECTOR("blk_gunshop_int_01x");
		ENABLE_CHILD_SECTOR("blk_gunshop_int_Props01x");
		DISABLE_CHILD_SECTOR("blk_gunshop_int_shade_01x");
		//bw tailor enable
		ENABLE_CHILD_SECTOR("blk_tailor01_int_Props01x");
		ENABLE_CHILD_SECTOR("blk_tailor_int_01x");
		DISABLE_CHILD_SECTOR("blk_tailor_int_shade_01x");
		ENABLE_CHILD_SECTOR("dlc_blk_tailor01_int_Props01x");
		//sp trainstation leave enabled??
		ENABLE_CHILD_SECTOR("blk_trainstation_int_01x");
		ENABLE_CHILD_SECTOR("blk_trainstation_int_Props01x");
		//doctors office enabled?
		ENABLE_CHILD_SECTOR("blk_doctorsOffice_int_01x");
		ENABLE_CHILD_SECTOR("blk_doctorsOffice_int_Props01x");
		DISABLE_CHILD_SECTOR("blk_doctorsOffice_int_shade_01x");
		//hotel modified?
		ENABLE_CHILD_SECTOR("blk_hotel_int_01x");
		DISABLE_CHILD_SECTOR("blk_hotel01Props01x");
		ENABLE_CHILD_SECTOR("blk_hotel_int_shade_01x");
		ENABLE_CHILD_SECTOR("dlc_blk_hotel01Props01x");
		//general store enabled?
		ENABLE_CHILD_SECTOR("blk_generalStore_int_01x");
		ENABLE_CHILD_SECTOR("blk_generalStore_int_Props02x");
		ENABLE_CHILD_SECTOR("blk_generalStore_int_Props01x");
		DISABLE_CHILD_SECTOR("blk_generalStore_int_shade_01x");
		//bank 2nd floor enabled
		ENABLE_CHILD_SECTOR("blk_bank_int_02x");
		ENABLE_CHILD_SECTOR("dlc_blk_bank01_int_Props02x");
		DISABLE_CHILD_SECTOR("blk_bank_int_shade_01x");
		//police station 2nd enabled
		ENABLE_CHILD_SECTOR("blk_policeStation_int_02x");
		ENABLE_CHILD_SECTOR("blk_policeStation01_int_props02x");
		DISABLE_CHILD_SECTOR("blk_policeStation_int_shades01x");
		//anthropology enable
		ENABLE_CHILD_SECTOR("blk_archeologist01Props01x");
		//ridge wood farms modifed
		DISABLE_CHILD_SECTOR("rwf_barn01xprops01x");
		ENABLE_CHILD_SECTOR("rwf_barn01xprops02x");
		ENABLE_CHILD_SECTOR("rwf_livingRoom01props02x");
		DISABLE_CHILD_SECTOR("rwf_livingRoom01props01x");
		//campo mirada
		ENABLE_WORLD_SECTOR("campoMiradaAfter");
		DISABLE_WORLD_SECTOR("campoMiradaBefore");
	}
	if (UndeadBridgez)
	{
		ENABLE_WORLD_SECTOR("dlc06x");
		ENABLE_WORLD_SECTOR("ramitaBayaBefore");
		ENABLE_WORLD_SECTOR("butterBridgeA");
		ENABLE_WORLD_SECTOR("tannersSpanBefore");
		ENABLE_WORLD_SECTOR("dixonCrossingBefore");
		ENABLE_WORLD_SECTOR("fronteraBridgeBefore");
		ENABLE_WORLD_SECTOR("masonBridgeBefore");
		DISABLE_WORLD_SECTOR("butterBridgeD");
		DISABLE_WORLD_SECTOR("butterBridgeC");
		DISABLE_WORLD_SECTOR("butterBridgeB");
		DISABLE_WORLD_SECTOR("ramitaBayaAfter");
		DISABLE_WORLD_SECTOR("tannersSpanAfter");
		DISABLE_WORLD_SECTOR("dixonCrossingAfter");
		DISABLE_WORLD_SECTOR("fronteraBridgeAfter");
		DISABLE_WORLD_SECTOR("masonBridgeAfter");
	}
	if (FlameON)
	{
		DeMiGod = 0;
		God = 0;
		SET_ACTOR_INVULNERABILITY(self, 0);
		if (GET_ACTOR_PROOF(self) == -1)CLEAR_ACTOR_PROOF_ALL(self);
		SET_ACTOR_HEALTH(self, GET_ACTOR_MAX_HEALTH(self));
		int ourFire = FIRE_CREATE_HANDLE();
		UNK_0x9679CF84(ourFire, self);
		UNK_0x3D5D3B26(ourFire, 0);
		FIRE_RELEASE_HANDLE(ourFire, self);
	}
	if (MPints)
	{
		ENABLE_CHILD_SECTOR("mp_tum_base01x");
		ENABLE_CHILD_SECTOR("mp_arm_base01x");
	}
	if (UnlimitedAmmo)
	{
		for (int i = 0; i <= 37; i++)
		{
			if (!_IS_ACTOR_AMMO_INFINITE(self, i))
			{
				_SET_ACTOR_INFINITE_AMMO(self, i, 1);
			}
		}
	}
	if (GoldIt)
	{
		for (int i = 0; i <= 37; i++)
		{
			if (GET_WEAPON_GOLD(self, i) != 1)
			{
				SET_WEAPON_GOLD(self, i, 1);
			}
		}
	}
	if (BGPAI2)//fucking awful and mostly incorect bodyguard brain, have fun fixing/improving this garbage - Love Caboose.
	{
		StandStillFucker = 0;
		PedzFollow = 0;
		int selfattcker = GET_LAST_ATTACKER(self);
		int self_target = GET_LAST_ATTACK_TARGET(self);
		for (int i = 0; i <= 9; i++)
		{
			TASK_FOLLOW_ACTOR(SpawnPed[i], self);
			AI_IGNORE_ACTOR(SpawnPed[i]);
			SET_ACTOR_FACTION(SpawnPed[i], 20);
			MEMORY_ALLOW_TAKE_COVER(SpawnPed[i], 0);
			COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(SpawnPed[i], 28, TO_FLOAT(0));//these floats are wrong, they work but native wasnt documented originally.
			COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(SpawnPed[i], 31, TO_FLOAT(-1));
			COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(SpawnPed[i], 37, TO_FLOAT(2));
			COMBAT_CLASS_AI_SET_FRIENDLY_FIRE_CONSIDERATION(SpawnPed[i], 0);
			SET_CRIPPLE_ENABLE(SpawnPed[i], 0);
			SET_ACTOR_ALLOW_WEAPON_REACTION_FLEE(SpawnPed[i], 0);
			SET_ACTOR_WEAPON_REACTION_NO_FLEE_HACK(SpawnPed[i], 1);
			SET_ACTOR_PROOF(SpawnPed[i], -1);
			AI_SET_FIRE_DELAY(SpawnPed[i], TO_FLOAT(0));
			AI_SET_FIRE_DELAY_RANDOMNESS(SpawnPed[i], TO_FLOAT(0));
			ACTOR_SET_WEAPON_AMMO(SpawnPed[i], GET_WEAPON_IN_HAND(SpawnPed[i]), TO_FLOAT(55));
			SET_ACTOR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(SpawnPed[i], 1);
			AI_SET_DISARMED(SpawnPed[i], 0);
			UNK_0xC52B5F18(SpawnPed[i], 0);
			if (BGuardTarget >= 0 && BGuardTarget <= 15)
			{
				if (IS_ACTOR_VALID(GET_SLOT_ACTOR(BGuardTarget)))
				{
					TASK_KILL_CHAR(SpawnPed[i], GET_SLOT_ACTOR(BGuardTarget));
					TASK_PRIORITY_SET(SpawnPed[i], 1);
				}
			}
			if (BGuardTarget == 16)
			{
				if (selfattcker)
				{
					if (!IS_WEAPON_DRAWN(SpawnPed[i]))ACTOR_DRAW_WEAPON(SpawnPed[i], wepzint, 1);
					if (wepzint != 22)
					{
						TASK_KILL_CHAR(SpawnPed[i], selfattcker);
						TASK_PRIORITY_SET(SpawnPed[i], 1);
					}
					if (wepzint == 22)
					{
						TASK_MELEE_ATTACK(SpawnPed[i], GET_LAST_ATTACKER(self), 1);
						TASK_PRIORITY_SET(SpawnPed[i], 1);
					}
				}
				if (self_target)
				{
					if (!IS_WEAPON_DRAWN(SpawnPed[i]))ACTOR_DRAW_WEAPON(SpawnPed[i], wepzint, 1);
					if (wepzint != 22)
					{
						TASK_KILL_CHAR(SpawnPed[i], self_target);
						TASK_PRIORITY_SET(SpawnPed[i], 1);
					}
					if (wepzint == 22)
					{
						TASK_MELEE_ATTACK(SpawnPed[i], GET_LAST_ATTACK_TARGET(self), 1);
						TASK_PRIORITY_SET(SpawnPed[i], 1);
					}
				}
				if (IS_ACTOR_DEAD(selfattcker) || IS_ACTOR_VEHICLE(selfattcker) || IS_ACTOR_DEAD(self_target) || IS_ACTOR_VEHICLE(self_target))
				{
					TASK_FOLLOW_ACTOR(SpawnPed[i], self);
					TASK_PRIORITY_SET(SpawnPed[i], 1);
					if (IS_ACTOR_DEAD(selfattcker) || IS_ACTOR_VEHICLE(selfattcker))
					{
						CLEAR_LAST_HIT(self);
					}
					if (IS_ACTOR_DEAD(self_target) || IS_ACTOR_VEHICLE(self_target))
					{
						CLEAR_LAST_ATTACK(self);
					}
				}
			}
		}
		if (GetButtonDown(BUTTON_LT) && (GetButton(DPAD_DOWN) && (!BGuard) && (!ToggleSpoof13)))
		{
			BGuard = true;
		}
		if (GetButtonDown(BUTTON_LT) && (GetButton(DPAD_RIGHT) && (!BGuard) && (!ToggleSpoof13)))
		{
			PedWepz = 1; ToggleSpoof13 = true;
		}
		if (BGuard)
		{
			HUD_CLEAR_HELP_QUEUE();
			test123 = 1;
			char tgmsg[255];
			stradd(tgmsg, "Bodyguard Target Editor \n<rb>:Teleport Bodyguards To You\n<y>:Reset Bodyguards\n<dpadleftright>:Bodyguard Target: ", 255 - sizeof(tgmsg) - 1);
			if (BGuardTarget >= 0 && BGuardTarget <= 15)
			{
				stradd(tgmsg, GET_SLOT_NAME(BGuardTarget), 255 - sizeof(tgmsg) - 1);
				print2("Bodyguard is targetting currently selected player", 1000);
			}
			if (BGuardTarget == 16)
			{
				stradd(tgmsg, "Normal Targetting", 255 - sizeof(tgmsg) - 1);
				print2("Bodyguard is targetting who you attack, or who attacks you", 1000);
			}
			_PRINT_HELP(tgmsg, 500.0f, false, 1, 2, 1, 0, 0);
			if (GetButton(DPAD_LEFT))
			{
				BGuardTarget--;
				if (BGuardTarget < 0) BGuardTarget = 16;
			}
			if (GetButton(DPAD_RIGHT))
			{
				BGuardTarget++;
				if (BGuardTarget > 16) BGuardTarget = 0;
			}
			if (GetButton(BUTTON_Y))
			{
				BGuardTarget = 16;
				CLEAR_LAST_ATTACK(self);
				CLEAR_LAST_HIT(self);
				for (int i = 0; i <= 9; i++)
				{
					TASK_CLEAR(SpawnPed[i]);
				}
			}
			if (GetButton(BUTTON_RB))
			{
				if (!freecam || !specit)GET_POSITION(self, &pedztp);
				if (freecam)GET_CAMERA_POSITION(camera, &pedztp);
				if (specit)GET_CAMERA_POSITION(GET_GAME_CAMERA(), &pedztp);
				for (int i = 0; i <= 9; i++)
				{
					TeleportActor2(SpawnPed[i], pedztp);
				}
			}
			if (GetButton(BUTTON_B))
			{
				test123 = 0;
				BGuard = false;
				DisplayMenu();
			}
		}
	}
	if (GET_LAST_ATTACK_TARGET(self) && (ExplosiveRounds))
	{
		if (GET_LAST_ATTACK_TARGET(self) != GET_PLAYER_ACTOR(0) && (!IS_ACTOR_VEHICLE(GET_LAST_ATTACK_TARGET(self))))
		{
			GET_POSITION(GET_LAST_ATTACK_TARGET(self), &ve19);
			_CREATE_EXPLOSION(&ve19, EXPLOSION_CannonballExplosion, true, &ve19, true);
		}
		if (IS_ACTOR_DEAD(GET_LAST_ATTACK_TARGET(self)))
		{
			CLEAR_LAST_ATTACK(self);
		}
		if (IS_ACTOR_ALIVE(GET_LAST_ATTACK_TARGET(self)))
		{
			CLEAR_LAST_ATTACK(self);
		}
	}
	if (GET_LAST_ATTACK_TARGET(self) && (BurnGun))
	{
		if (GET_LAST_ATTACK_TARGET(self) != GET_PLAYER_ACTOR(0) && (!IS_ACTOR_VEHICLE(GET_LAST_ATTACK_TARGET(self))))
		{
			GET_POSITION(GET_LAST_ATTACK_TARGET(self), &ve19);
			_CREATE_EXPLOSION(&ve19, EXPLOSION_FireBottleExplosion, true, &ve19, true);
		}
		if (IS_ACTOR_DEAD(GET_LAST_ATTACK_TARGET(self)))
		{
			CLEAR_LAST_ATTACK(self);
		}
		if (IS_ACTOR_ALIVE(GET_LAST_ATTACK_TARGET(self)))
		{
			CLEAR_LAST_ATTACK(self);
		}
	}
	if (GET_LAST_ATTACKER(self) && (MedusaKill))
	{
		if (GET_LAST_ATTACKER(self) != GET_PLAYER_ACTOR(0) && (!IS_ACTOR_VEHICLE(GET_LAST_ATTACKER(self))))
		{
			KILL_ACTOR(GET_LAST_ATTACKER(self));_NET_EXPLODE_ACTOR(GET_LAST_ATTACKER(self));
		}
		MedusaCleanUp();
	}
	if (GET_LAST_ATTACKER(self) && (MedusaDestroy))
	{
		if (GET_LAST_ATTACKER(self) != GET_PLAYER_ACTOR(0) && (!IS_ACTOR_VEHICLE(GET_LAST_ATTACKER(self))))
		{
			DESTROY_ACTOR(GET_LAST_ATTACKER(self));
		}
		MedusaCleanUp();
	}
	if (GET_LAST_ATTACKER(self) && (MedusaXplode))
	{
		if (GET_LAST_ATTACKER(self) != GET_PLAYER_ACTOR(0) && (!IS_ACTOR_VEHICLE(GET_LAST_ATTACKER(self))))
		{
			GET_POSITION(GET_LAST_ATTACKER(self), &ve19);_CREATE_EXPLOSION(&ve19, EXPLOSION_CannonballExplosion, true, &ve19, true);
		}
		MedusaCleanUp();
	}
	if (GET_LAST_ATTACKER(self) && (MedusaBurn))
	{
		if (GET_LAST_ATTACKER(self) != GET_PLAYER_ACTOR(0) && (!IS_ACTOR_VEHICLE(GET_LAST_ATTACKER(self))))
		{
			GET_POSITION(GET_LAST_ATTACKER(self), &ve19);_CREATE_EXPLOSION(&ve19, EXPLOSION_FireBottleExplosion, true, &ve19, true);
		}
		MedusaCleanUp();
	}
	if (TODLoop)
	{
		SET_TIME_OF_DAY(MAKE_TIME_OF_DAY(todg, 0, 0));
	}
	if (TODLoop2)
	{
		setGlobalAtIndex(16524, weathint);
		SET_WEATHER(weathint, 0);
	}
	if (!IS_PLAYER_DEADEYE(self) && (AutoDead) && (GET_WEAPON_IN_HAND(self) != 22) && (GET_WEAPON_IN_HAND(self) != 33))
	{
		SET_DISABLE_DEADEYE(self, 0);
		SET_PLAYER_DEADEYE_MODE(self, 1);
	}
	if (Fireround)
	{
		_CHEAT_BLAZING_GUNS(1);
	}
	if (Phos)
	{
		UNK_0xCA840DBB(1);
	}
	if (Slugz)
	{
		UNK_0x8062BD74(self, 1, 0.1f);
	}
}
void AmmoInf()//bugged just give all weapons
{
	UnlimitedAmmo = !UnlimitedAmmo;
	if (UnlimitedAmmo)
	{
		PrintChat("<green>Infinite Ammo Set");
	}
	if (!UnlimitedAmmo)
	{
		for (int i = 0; i <= 37; i++)
		{
			if (ACTOR_HAS_WEAPON(self, i))
			{
				if (_IS_ACTOR_AMMO_INFINITE(self, i))
				{
					_SET_ACTOR_INFINITE_AMMO(self, i, 0);
				}
			}
		}
		PrintChat("<red>Infinite Ammo Removed");
	}
}
void SpawnDraft(int actorEnum, Actor _actor)
{
	if (SpawnTheDra == 0){DESTROY_ACTOR(SpawnDra1);DESTROY_ACTOR(SpawnDra2);DESTROY_ACTOR(SpawnDra3);DESTROY_ACTOR(SpawnDra4);SpawnDra1 = CreateActor(actorEnum, _actor);SpawnTheDra = 1;}
	else if (SpawnTheDra == 1){SpawnDra2 = CreateActor(actorEnum, _actor);SpawnTheDra = 2;}
	else if (SpawnTheDra == 2){SpawnDra3 = CreateActor(actorEnum, _actor);SpawnTheDra = 3;}
	else if (SpawnTheDra == 3){SpawnDra4 = CreateActor(actorEnum, _actor);SpawnTheDra = 0;}
}
void CopyPlayer(int SlotID)
{
	if (IS_ACTOR_VALID(GET_SLOT_ACTOR(SlotID)))
	{
		ChangeModel(self, GET_ACTOR_ENUM(GET_SLOT_ACTOR(SlotID)));
		WAIT(1000);
		GiveActorAllWeapons();
	}
	if (!IS_ACTOR_VALID(GET_SLOT_ACTOR(SlotID)))
	{
		print2("<red> Player Dead or Out of Range", 2000);
	}
}
void TestFuckYou()
{
	camspoof = !camspoof;
	if (camspoof)
	{
		vector3 outmapyeah;
		int spoofped;
		outmapyeah.x = -100000000000.0;
		outmapyeah.y = -100000000000.0;
		outmapyeah.z = -100000000000.0;
		ModReset2 = GET_ACTOR_ENUM(GET_PLAYER_ACTOR(0));
		GET_POSITION(self, &thatssaved);
		STREAMING_REQUEST_ACTOR(201, 1, 0);
		spoofped = CREATE_ACTOR_IN_LAYOUT(FIND_NAMED_LAYOUT("playerlayout"), "", 201, outmapyeah, outmapyeah);
		SET_CAMERA_FOLLOW_ACTOR(spoofped);
		DESTROY_ACTOR(self);
		WAIT(1000);
		DESTROY_ACTOR(spoofped);
	}
	if (!camspoof)
	{
		ChangeModel(self, ModReset2);
		WAIT(1000);
		TeleportActor2(self, thatssaved);
		SET_CAMERA_FOLLOW_ACTOR(self);
	}
}
void SendXP(int client)
{
	int buffer[3] = { client, -1+9999999999, 1 };
	_NET_MSG_SEND(2, 100, buffer, 3, true);
}
void AllOffBoi()
{
	UndeadBridgez = 0;
	UndeadFire = 0;
	UndeadMapz = 0;
	MPints = 0;
	WAIT(1000);
	DISABLE_WORLD_SECTOR("dlc06x");
	DISABLE_CHILD_SECTOR("dlc_agv_zombieFire01x");
	DISABLE_CHILD_SECTOR("dlc_agv_zombieDebris01x");
	DISABLE_CHILD_SECTOR("dlc_arm_zombieFire01x");
	DISABLE_CHILD_SECTOR("dlc_but_zombieFire01x");
	DISABLE_CHILD_SECTOR("dlc_cas_zombieFire01x");
	DISABLE_CHILD_SECTOR("dlc_chu_zombieFire01x");
	DISABLE_CHILD_SECTOR("dlc_chu_zombieDebris01x");
	DISABLE_CHILD_SECTOR("dlc_cri_zombieFire01x");
	DISABLE_CHILD_SECTOR("dlc_dix_zombieFire01x");
	DISABLE_CHILD_SECTOR("dlc_elm_zombieFire01x");
	DISABLE_CHILD_SECTOR("dlc_elm_zombieDebris01x");
	DISABLE_CHILD_SECTOR("dlc_esc_zombieFire01x");
	DISABLE_CHILD_SECTOR("dlc_esc_zombieDebris01x");
	DISABLE_CHILD_SECTOR("dlc_frb_zombieFire01x");
	DISABLE_CHILD_SECTOR("dlc_gap_zombieFire01x");
	DISABLE_CHILD_SECTOR("dlc_hen_zombieFire01x");
	DISABLE_CHILD_SECTOR("dlc_hen_zombieDebris01x");
	DISABLE_CHILD_SECTOR("dlc_lsh_zombieFire01x");
	DISABLE_CHILD_SECTOR("dlc_lsh_zombieDebris01x");
	DISABLE_CHILD_SECTOR("dlc_mtp_zombieFire01x");
	DISABLE_CHILD_SECTOR("dlc_nos_zombieDebris01x");
	DISABLE_CHILD_SECTOR("dlc_nos_zombieFire01x");
	DISABLE_CHILD_SECTOR("dlc_pik_zombieFire01x");
	DISABLE_CHILD_SECTOR("dlc_pln_zombieFire01x");
	DISABLE_CHILD_SECTOR("dlc_ram_zombieFire01x");
	DISABLE_CHILD_SECTOR("dlc_rat_zombieFire01x");
	DISABLE_CHILD_SECTOR("dlc_rwf_zombieFire01x");
	DISABLE_CHILD_SECTOR("dlc_rwf_zombieDebris01x");
	DISABLE_CHILD_SECTOR("dlc_sol_zombieFire01x");
	DISABLE_CHILD_SECTOR("dlc_tes_zombieFire01x");
	DISABLE_CHILD_SECTOR("dlc_thi_zombieFire01x");
	DISABLE_CHILD_SECTOR("dlc_thi_zombieDebris01x");
	DISABLE_CHILD_SECTOR("dlc_tor_zombieFire01x");
	DISABLE_CHILD_SECTOR("dlc_twr_zombieFire01x");
	DISABLE_CHILD_SECTOR("dlc_twr_zombieDebris01x");
	DISABLE_CHILD_SECTOR("dlc_upr_zombieFire01x");
	DISABLE_CHILD_SECTOR("dlc_ven_zombieFire01x");
	DISABLE_CHILD_SECTOR("dlc_ven_zombieDebris01x");
	DISABLE_CHILD_SECTOR("dlc_war_zombieFire01x");
	DISABLE_CHILD_SECTOR("dlc_war_zombieDebris01x");
	DISABLE_CHILD_SECTOR("dlc_blk_zombieFire01x");
	DISABLE_CHILD_SECTOR("dlc_blk_zombieDebris01x");
	DISABLE_WORLD_SECTOR("ramitaBayaBefore");
	DISABLE_WORLD_SECTOR("butterBridgeA");
	DISABLE_WORLD_SECTOR("tannersSpanBefore");
	DISABLE_WORLD_SECTOR("dixonCrossingBefore");
	DISABLE_WORLD_SECTOR("fronteraBridgeBefore");
	DISABLE_WORLD_SECTOR("campoMiradaAfter");
	DISABLE_WORLD_SECTOR("masonBridgeBefore");
	DISABLE_WORLD_SECTOR("butterBridgeD");
	DISABLE_WORLD_SECTOR("butterBridgeC");
	ENABLE_WORLD_SECTOR("butterBridgeB");
	ENABLE_WORLD_SECTOR("ramitaBayaAfter");
	ENABLE_WORLD_SECTOR("tannersSpanAfter");
	ENABLE_WORLD_SECTOR("dixonCrossingAfter");
	ENABLE_WORLD_SECTOR("fronteraBridgeAfter");
	ENABLE_WORLD_SECTOR("campoMiradaBefore");
	ENABLE_WORLD_SECTOR("masonBridgeAfter");
	DISABLE_CHILD_SECTOR("dlc_bac_swampCabin01props01x");
	DISABLE_CHILD_SECTOR("dlc_l_15x");
	DISABLE_CHILD_SECTOR("dlc_fod_ladders01x");
	DISABLE_CHILD_SECTOR("dlc_cas_whorehouse01Props01x");
	DISABLE_CHILD_SECTOR("icarus");
	DISABLE_CHILD_SECTOR("dlc_fom_guardTowerProps01x");
	DISABLE_CHILD_SECTOR("dlc_ple_house01props01x");
	DISABLE_CHILD_SECTOR("dlc_sol_houseProps01x");
	DISABLE_CHILD_SECTOR("dlc_pln_tents01Props01x");
	DISABLE_CHILD_SECTOR("dlc_tan_residence01props01x");
	DISABLE_CHILD_SECTOR("dlc_lsh_walls01props01x");
	DISABLE_CHILD_SECTOR("dlc_lsh_trainstation01props01x");
	DISABLE_CHILD_SECTOR("dlc_lsh_church01Props01x");
	DISABLE_CHILD_SECTOR("dlc_hen_flagsTorn01x");
	DISABLE_CHILD_SECTOR("dlc_fom_ladders01x");
	//ranch barn back to normal mp state ?
	DISABLE_CHILD_SECTOR("hen_barn02x");
	DISABLE_CHILD_SECTOR("hen_barn02props01x");
	ENABLE_CHILD_SECTOR("hen_barn01x");
	ENABLE_CHILD_SECTOR("hen_barn01props01x");
	ENABLE_CHILD_SECTOR("hen_barn01props02x");
	DISABLE_CHILD_SECTOR("dlc_hen_barn01props01x");
	//armadillo back to normal mp state
	DISABLE_CHILD_SECTOR("dlc_arm_saloon01props01x");
	ENABLE_CHILD_SECTOR("arm_saloon01props01x");
	DISABLE_CHILD_SECTOR("dlc_arm_sheriffsOffice01props01x");
	DISABLE_CHILD_SECTOR("dlc_arm_corralPens01props01x");
	//beeachers hope back to normal mp state
	ENABLE_CHILD_SECTOR("beh_silo02x");
	DISABLE_CHILD_SECTOR("beh_silo01x");
	DISABLE_CHILD_SECTOR("beh_grave02x");
	DISABLE_CHILD_SECTOR("beh_grave03x");
	DISABLE_CHILD_SECTOR("beh_grave01x");
	DISABLE_CHILD_SECTOR("beh_silo01x");
	DISABLE_CHILD_SECTOR("dlc_beh_catacombs01x");
	DISABLE_CHILD_SECTOR("dlc_beh_catacombs01props01x");
	DISABLE_CHILD_SECTOR("dlc_beh_house01props01x");
	DISABLE_CHILD_SECTOR("dlc_beh_fireplace01x");
	DISABLE_CHILD_SECTOR("dlc_ben_trainStation01Props01x");
	//tormeada military camp back to normal state
	ENABLE_CHILD_SECTOR("tor_militaryCamp02x");
	DISABLE_CHILD_SECTOR("tor_militaryCamp01x");
	//Catacombs disable for mp
	DISABLE_CHILD_SECTOR("dlc_esc_zombieCave01x");
	DISABLE_CHILD_SECTOR("dlc_esc_zombieCave01Props01x");
	DISABLE_CHILD_SECTOR("dlc_esc_zombieCave01Props02x");
	DISABLE_CHILD_SECTOR("dlc_esc_zombieCave01Props03x");
	DISABLE_CHILD_SECTOR("dlc_esc_bullRing02x");
	DISABLE_CHILD_SECTOR("dlc_esc_bullRing02Props01x");
	DISABLE_CHILD_SECTOR("dlc_esc_zombieCave02x");
	ENABLE_CHILD_SECTOR("esc_flags01");
	ENABLE_CHILD_SECTOR("esc_bullRing01x");
	ENABLE_CHILD_SECTOR("esc_bullRing01Props01x");
	ENABLE_CHILD_SECTOR("esc_villaWall04x");
	DISABLE_CHILD_SECTOR("esc_villaWall05x");
	//misc shit??/
	DISABLE_CHILD_SECTOR("dlc_blk_generalBuilding03props01x");
	DISABLE_CHILD_SECTOR("dlc_blk_generalBuilding09Props01x");
	DISABLE_CHILD_SECTOR("dlc_blk_zombieGraffiti01x");
	DISABLE_CHILD_SECTOR("dlc_blk_flagsTorn01x");
	DISABLE_CHILD_SECTOR("sp_anthro01x");
	//Blackwater disable shit?
	ENABLE_CHILD_SECTOR("blk_forgeMill_int_shade_01x");
	ENABLE_CHILD_SECTOR("blk_sawMill_int_shade_01x");
	//morning star boat disable
	DISABLE_WORLD_SECTOR("morningStar");
	DISABLE_CHILD_SECTOR("blk_barge01Props01x");
	DISABLE_CHILD_SECTOR("blk_barge01x");
	DISABLE_CHILD_SECTOR("mor_morningStar01_int_Props01x");
	DISABLE_CHILD_SECTOR("mor_morningStar_int_01x");
	DISABLE_CHILD_SECTOR("mor_morningStar_int_shade_01x");
	//bw gunshop disable
	DISABLE_CHILD_SECTOR("blk_gunshop_int_01x");
	DISABLE_CHILD_SECTOR("blk_gunshop_int_Props01x");
	ENABLE_CHILD_SECTOR("blk_gunshop_int_shade_01x");
	//bw tailor disable
	DISABLE_CHILD_SECTOR("blk_tailor01_int_Props01x");
	DISABLE_CHILD_SECTOR("blk_tailor_int_01x");
	ENABLE_CHILD_SECTOR("blk_tailor_int_shade_01x");
	DISABLE_CHILD_SECTOR("dlc_blk_tailor01_int_Props01x");
	//sp trainstation disable??
	ENABLE_CHILD_SECTOR("blk_trainstation_int_01x");
	ENABLE_CHILD_SECTOR("blk_trainstation_int_Props01x");
	//doctors office back to normal
	DISABLE_CHILD_SECTOR("blk_doctorsOffice_int_01x");
	DISABLE_CHILD_SECTOR("blk_doctorsOffice_int_Props01x");
	ENABLE_CHILD_SECTOR("blk_doctorsOffice_int_shade_01x");
	//hotel back to normal
	ENABLE_CHILD_SECTOR("blk_hotel_int_01x");
	ENABLE_CHILD_SECTOR("blk_hotel01Props01x");
	ENABLE_CHILD_SECTOR("blk_hotel_int_shade_01x");
	DISABLE_CHILD_SECTOR("dlc_blk_hotel01Props01x");
	//general store mp removed
	DISABLE_CHILD_SECTOR("blk_generalStore_int_01x");
	DISABLE_CHILD_SECTOR("blk_generalStore_int_Props02x");
	DISABLE_CHILD_SECTOR("blk_generalStore_int_Props01x");
	ENABLE_CHILD_SECTOR("blk_generalStore_int_shade_01x");
	//bank 2nd floor removed
	DISABLE_CHILD_SECTOR("blk_bank_int_02x");
	DISABLE_CHILD_SECTOR("dlc_blk_bank01_int_Props02x");
	ENABLE_CHILD_SECTOR("blk_bank_int_shade_01x");
	DISABLE_CHILD_SECTOR("blk_bank01_int_Props02x");
	//police station 2nd floor removed
	DISABLE_CHILD_SECTOR("blk_policeStation_int_02x");
	DISABLE_CHILD_SECTOR("blk_policeStation01_int_props02x");
	ENABLE_CHILD_SECTOR("blk_policeStation_int_shades01x");
	//anthropology disable
	DISABLE_CHILD_SECTOR("blk_archeologist01Props01x");
	//ridge wood farms normal
	ENABLE_CHILD_SECTOR("rwf_barn01xprops01x");
	DISABLE_CHILD_SECTOR("rwf_barn01xprops02x");
	DISABLE_CHILD_SECTOR("rwf_livingRoom01props02x");
	ENABLE_CHILD_SECTOR("rwf_livingRoom01props01x");
	//mp gangmatch shit
	DISABLE_CHILD_SECTOR("mp_tum_base01x");
	DISABLE_CHILD_SECTOR("mp_arm_base01x");
	print2("<orange>All Disabled", 4000);
}
unsafe void ClearBountyStat()
{
	__push(0);
	__getGlobalP(26361);
	__getImm(8);
	__getGlobalP(26401);
	__setArray(1);
	__push(0);
	__callNative(0x67116627, 1, 1);
	__getGlobalP(26361);
	__getImm(8);
	__getGlobalP(26401);
	__addImm(2220);
	__getArray(1);
	__getGlobalP(34581);
	__setArray(1);
	__push(0);
	__getGlobalP(26401);
	__setImm(2212);
	__push(0);
	__push(3);
	__push(11);
	__getGlobalP(26361);
	__getImm(8);
	__getGlobalP(26401);
	__addImm(36);
	__getArrayP(181);
	__getArrayP(5);
	__setArray(1);
}
void GivePedWepz(int WeaponID)
{
	print2("You May Have To Press a Few Times", 2000);
	for (int i = 0; i <= 9; i++)
	{
		_REMOVE_WEAPONS(SpawnPed[i]);
		GIVE_WEAPON_TO_ACTOR(SpawnPed[i], WeaponID, 0, 0, 0);
		ACTOR_HOLSTER_WEAPON(SpawnPed[i], WeaponID);
		_ADD_AMMO_OF_TYPE(SpawnPed[i], GET_AMMO_ENUM(WeaponID), TO_FLOAT(100), 1, 1);
		TASK_CLEAR(SpawnPed[i]);
		ACTOR_RESET_ANIMS(SpawnPed[i], 1);
		ACTOR_HOLSTER_WEAPON(SpawnPed[i], WeaponID);
		ACTOR_DRAW_WEAPON(SpawnPed[i], WeaponID, 1);
		ACTOR_DRAW_WEAPON(SpawnPed[i], WeaponID, 1);
	}
}
void CreateObject(const char* propName)
{
	char propit[256];
	strcpy(propit, "$/fragments/", 255);
	stradd(propit, propName, 255);
	REQUEST_ASSET(propit, 0);
	int id = GET_ASSET_ID(propit, 0);
	while (!STREAMING_IS_PROP_LOADED(id))
	{
		STREAMING_REQUEST_PROP(id, 1);
		WAIT(0);
	}
	Layout l;
	l = FIND_NAMED_LAYOUT("PlayerLayout");
	GET_POSITION(self, &ve1);
	WTFCAN = CREATE_PROP_IN_LAYOUT(l, propName, propit, ve1, ve1, 1);
}
void FixBG()
{
	for (int i = 0; i <= 9; i++)
	{
		CLEAR_ACTOR_PROOF(SpawnPed[i], -1);
		SET_ACTOR_FACTION(SpawnPed[i], 0);
		TASK_CLEAR(SpawnPed[i]);
	}
}
unsafe void FHSelect()
{
	__push(10000);
	__callNative(0x67116627, 1, 1);
	__push(3);
	__getGlobalP(34581);
	__setArray(1);
	__pushString("sr_ntr6");
	__push(4);
	__getGlobalP(35278);
	__getArrayP(20);
	__addImm(16);
	__strCopy(32);
	__push(5);
	__getGlobalP(12976);
	__setImm(156);
	WAIT(1000);
	__push(60536);
	__callNative(0x67116627, 1, 1);
	__push(3);
	__getGlobalP(34581);
	__setArray(1);
	__pushString("sr_hnr1");
	__push(2);
	__getGlobalP(35278);
	__getArrayP(20);
	__addImm(16);
	__strCopy(32);
	__push(0);
	__getGlobalP(12976);
	__setImm(156);
}
unsafe void GIVE_MONEY()
{
	__push(0);
	__getGlobalP(34581);
	__getArray(1);
	__push(1000);
	__callNative(0x67116627, 1, 1);
	__addF();
	__push(0);
	__getGlobalP(34581);
	__setArray(1);
	__pushString("MoneyText");
	__pushString("Dmoney_amount");
	__push(0);
	__getGlobalP(34581);
	__getArray(1);
	__callNative(0x32E9BE04, 1, 1);
	__callNative(0xF71BD93A, 3, 0);
}
void HorseFx(int x, int y, int z, const char* FXType)
{
	DESTROY_OBJECT(testwtf); DESTROY_OBJECTSET(testwtf2); DESTROY_OBJECT(deafx2); DESTROY_OBJECTSET(deafx); DESTROY_OBJECT(war2); DESTROY_OBJECT(war4); DESTROY_OBJECT(war6); DESTROY_OBJECT(war8); DESTROY_OBJECT(war10); DESTROY_OBJECT(war12); DESTROY_OBJECT(war14); DESTROY_OBJECT(war16); DESTROY_OBJECT(war18); DESTROY_OBJECTSET(war1); DESTROY_OBJECTSET(war3); DESTROY_OBJECTSET(war4); DESTROY_OBJECTSET(war7); DESTROY_OBJECTSET(war9); DESTROY_OBJECTSET(war11); DESTROY_OBJECTSET(war13); DESTROY_OBJECTSET(war15); DESTROY_OBJECTSET(war17);
	testwtf2 = UNK_0x921B5F2B("emitter_set", GET_MOUNT(self), -1, 1);
	testwtf = UNK_0xFF8CBD07(0, FXType, GET_MOUNT(self), TO_FLOAT(x), TO_FLOAT(y), TO_FLOAT(z), 1, GET_MOUNT(self));//script_unicorn_rainbow, script_4Horsemen_death_01, script_4Horsemen_famine_01, script_4Horsemen_pestilence_01
	UNK_0x6745191B(testwtf, TO_FLOAT(0), TO_FLOAT(0), TO_FLOAT(0));
	UNK_0x43FBBDE1(testwtf, testwtf2);
}
void HorseFxDea(int x1, int y1, int z1, float x2, float y2, float z2, const char* FXType1, const char* FXType2)
{
	DESTROY_OBJECT(testwtf); DESTROY_OBJECTSET(testwtf2); DESTROY_OBJECT(deafx2); DESTROY_OBJECTSET(deafx); DESTROY_OBJECT(war2); DESTROY_OBJECT(war4); DESTROY_OBJECT(war6); DESTROY_OBJECT(war8); DESTROY_OBJECT(war10); DESTROY_OBJECT(war12); DESTROY_OBJECT(war14); DESTROY_OBJECT(war16); DESTROY_OBJECT(war18); DESTROY_OBJECTSET(war1); DESTROY_OBJECTSET(war3); DESTROY_OBJECTSET(war4); DESTROY_OBJECTSET(war7); DESTROY_OBJECTSET(war9); DESTROY_OBJECTSET(war11); DESTROY_OBJECTSET(war13); DESTROY_OBJECTSET(war15); DESTROY_OBJECTSET(war17);
	deafx = UNK_0x921B5F2B("emitter_set", GET_MOUNT(self), -1, 1);
	deafx2 = UNK_0xFF8CBD07(0, FXType1, GET_MOUNT(self), TO_FLOAT(x1), TO_FLOAT(y1), TO_FLOAT(z1), 1, GET_MOUNT(self));
	UNK_0x6745191B(deafx2, TO_FLOAT(0), TO_FLOAT(0), TO_FLOAT(0));
	UNK_0x43FBBDE1(deafx2, deafx);
	testwtf2 = UNK_0x921B5F2B("emitter_set", GET_MOUNT(self), -1, 1);
	testwtf = UNK_0x2A902148(0, FXType2, "spine00", GET_MOUNT(self), x2, y2, z2, GET_MOUNT(self));
	UNK_0x6745191B(testwtf, TO_FLOAT(0), TO_FLOAT(0), TO_FLOAT(0));
	UNK_0x43FBBDE1(testwtf, testwtf2);
}
void HorseFxWar(const char* FXType1, const char* FXType2)
{
	DESTROY_OBJECT(testwtf); DESTROY_OBJECTSET(testwtf2); DESTROY_OBJECT(deafx2); DESTROY_OBJECTSET(deafx); DESTROY_OBJECT(war2); DESTROY_OBJECT(war4); DESTROY_OBJECT(war6); DESTROY_OBJECT(war8); DESTROY_OBJECT(war10); DESTROY_OBJECT(war12); DESTROY_OBJECT(war14); DESTROY_OBJECT(war16); DESTROY_OBJECT(war18); DESTROY_OBJECTSET(war1); DESTROY_OBJECTSET(war3); DESTROY_OBJECTSET(war4); DESTROY_OBJECTSET(war7); DESTROY_OBJECTSET(war9); DESTROY_OBJECTSET(war11); DESTROY_OBJECTSET(war13); DESTROY_OBJECTSET(war15); DESTROY_OBJECTSET(war17);
	testwtf2 = UNK_0x921B5F2B("emitter_set", GET_MOUNT(self), -1, 1);
	testwtf = UNK_0xFF8CBD07(0, FXType1, GET_MOUNT(self), TO_FLOAT(0), TO_FLOAT(0), TO_FLOAT(0), 1, GET_MOUNT(self));
	UNK_0x6745191B(testwtf, TO_FLOAT(0), TO_FLOAT(0), TO_FLOAT(0));
	UNK_0x43FBBDE1(testwtf, testwtf2);
	war1 = UNK_0x921B5F2B("emitter_set", GET_MOUNT(self), -1, 1);
	war2 = UNK_0x2A902148(0, FXType2, "nail_r", GET_MOUNT(self), TO_FLOAT(0), TO_FLOAT(0), TO_FLOAT(0), GET_MOUNT(self));
	UNK_0x6745191B(war2, TO_FLOAT(0), TO_FLOAT(0), TO_FLOAT(0));
	UNK_0x43FBBDE1(war2, war1);
	war3 = UNK_0x921B5F2B("emitter_set", GET_MOUNT(self), -1, 1);
	war4 = UNK_0x2A902148(0, FXType2, "nail_l", GET_MOUNT(self), TO_FLOAT(0), TO_FLOAT(0), TO_FLOAT(0), GET_MOUNT(self));
	UNK_0x6745191B(war4, TO_FLOAT(0), TO_FLOAT(0), TO_FLOAT(0));
	UNK_0x43FBBDE1(war4, war3);
	war5 = UNK_0x921B5F2B("emitter_set", GET_MOUNT(self), -1, 1);
	war6 = UNK_0x2A902148(0, FXType2, "toe_r", GET_MOUNT(self), TO_FLOAT(0), TO_FLOAT(0), TO_FLOAT(0), GET_MOUNT(self));
	UNK_0x6745191B(war6, TO_FLOAT(0), TO_FLOAT(0), TO_FLOAT(0));
	UNK_0x43FBBDE1(war6, war5);
	war7 = UNK_0x921B5F2B("emitter_set", GET_MOUNT(self), -1, 1);
	war8 = UNK_0x2A902148(0, FXType2, "toe_l", GET_MOUNT(self), TO_FLOAT(0), TO_FLOAT(0), TO_FLOAT(0), GET_MOUNT(self));
	UNK_0x6745191B(war8, TO_FLOAT(0), TO_FLOAT(0), TO_FLOAT(0));
	UNK_0x43FBBDE1(war8, war7);
	war9 = UNK_0x921B5F2B("emitter_set", GET_MOUNT(self), -1, 1);
	war10 = UNK_0x2A902148(0, FXType2, "tail_m_02", GET_MOUNT(self), TO_FLOAT(0), TO_FLOAT(0), TO_FLOAT(0), GET_MOUNT(self));
	UNK_0x6745191B(war10, TO_FLOAT(0), TO_FLOAT(0), TO_FLOAT(0));
	UNK_0x43FBBDE1(war10, war9);
	war11 = UNK_0x921B5F2B("emitter_set", GET_MOUNT(self), -1, 1);
	war12 = UNK_0x2A902148(0, FXType2, "tail_l_03", GET_MOUNT(self), TO_FLOAT(0), TO_FLOAT(0), TO_FLOAT(0), GET_MOUNT(self));
	UNK_0x6745191B(war12, TO_FLOAT(0), TO_FLOAT(0), TO_FLOAT(0));
	UNK_0x43FBBDE1(war12, war11);
	war13 = UNK_0x921B5F2B("emitter_set", GET_MOUNT(self), -1, 1);
	war14 = UNK_0x2A902148(0, FXType2, "hair03_04_l", GET_MOUNT(self), TO_FLOAT(0), TO_FLOAT(0), TO_FLOAT(0), GET_MOUNT(self));
	UNK_0x6745191B(war14, TO_FLOAT(0), TO_FLOAT(0), TO_FLOAT(0));
	UNK_0x43FBBDE1(war14, war13);
	war15 = UNK_0x921B5F2B("emitter_set", GET_MOUNT(self), -1, 1);
	war16 = UNK_0x2A902148(0, FXType2, "hair04_04_r", GET_MOUNT(self), TO_FLOAT(0), TO_FLOAT(0), TO_FLOAT(0), GET_MOUNT(self));
	UNK_0x6745191B(war16, TO_FLOAT(0), TO_FLOAT(0), TO_FLOAT(0));
	UNK_0x43FBBDE1(war16, war15);
	war17 = UNK_0x921B5F2B("emitter_set", GET_MOUNT(self), -1, 1);
	war18 = UNK_0x2A902148(0, FXType2, "hair05_04_l", GET_MOUNT(self), TO_FLOAT(0), TO_FLOAT(0), TO_FLOAT(0), GET_MOUNT(self));
	UNK_0x6745191B(war18, TO_FLOAT(0), TO_FLOAT(0), TO_FLOAT(0));
	UNK_0x43FBBDE1(war18, war17);
}
void WaitForWorldToLoad(bool usePrint)
{
	while (!STREAMING_IS_WORLD_LOADED())
	{
		SET_PLAYER_CONTROL(0, 0, 0, 0);
		if (usePrint)
			print2("Waiting for the <orange>world to load...</orange>", 5000);
		WAIT(0);
	}
	SET_PLAYER_CONTROL(0, 1, 0, 0);
}
void MainLRSwitches()
{
	if (ToggleSpoof13)
	{
		HUD_CLEAR_HELP_QUEUE();
		test123 = 1;
		char modmsg[255];
		char modmsg2[255];
		if (PedWepz == 1)
		{
			stradd(modmsg, "Peds Weapon Editor\n<x>:Confirm\n<cancel>:Cancel\n<dpadleftright>:Weapon:<orange> ", 255 - sizeof(modmsg) - 1);
			if (wepzint == 21 || wepzint == 30)stradd(modmsg, "BLOCKED WEP", 255 - sizeof(modmsg) - 1);
			if (wepzint == 25)stradd(modmsg, "Throwing Knife - Buggy", 255 - sizeof(modmsg) - 1);
			if (wepzint == 29)stradd(modmsg, "Tomahawk - Buggy", 255 - sizeof(modmsg) - 1);
			if (wepzint == 32)stradd(modmsg, "Remove Weapons", 255 - sizeof(modmsg) - 1);
			if (wepzint != 21 && wepzint != 25 && wepzint != 29 && wepzint != 30 && wepzint != 32)stradd(modmsg, UI_GET_STRING(GET_WEAPON_DISPLAY_NAME(wepzint)), 255 - sizeof(modmsg) - 1);
		}
		if (PedWepz == 3)
		{
			stradd(modmsg, "Vehicle Spawner\n<x>:Confirm\n<cancel>:Cancel\n<dpadleftright>:Vehicle: ", 255 - sizeof(modmsg) - 1);
			stradd(modmsg, VSChar[vehintz], 255 - sizeof(modmsg) - 1);
		}
		if (PedWepz == 4)
		{
			stradd(modmsg, "New Austin Teleports\n<x>:Confirm\n<cancel>:Cancel\n<dpadleftright>:Teleport: ", 255 - sizeof(modmsg) - 1);
			stradd(modmsg, NAChar[austel], 255 - sizeof(modmsg) - 1);
		}
		if (PedWepz == 5)
		{
			stradd(modmsg, "West Elizabeth Teleports\n<x>:Confirm\n<cancel>:Cancel\n<dpadleftright>:Teleport: ", 255 - sizeof(modmsg) - 1);
			stradd(modmsg, WEChar[westeli], 255 - sizeof(modmsg) - 1);
		}
		if (PedWepz == 6)
		{
			stradd(modmsg, "Mexico Teleports\n<x>:Confirm\n<cancel>:Cancel\n<dpadleftright>:Teleport: ", 255 - sizeof(modmsg) - 1);
			stradd(modmsg, MTChar[mextel], 255 - sizeof(modmsg) - 1);
		}
		if (PedWepz == 7)
		{
			stradd(modmsg, "Hidden Interior Teleports\n<x>:Confirm\n<cancel>:Cancel\n<dpadleftright>:Teleport: ", 255 - sizeof(modmsg) - 1);
			stradd(modmsg, HIChar[hidint], 255 - sizeof(modmsg) - 1);
		}
		if (PedWepz == 8)
		{
			stradd(modmsg, "Out of Map Teleports\n<x>:Confirm\n<cancel>:Cancel\n<dpadleftright>:Teleport: ", 255 - sizeof(modmsg) - 1);
			stradd(modmsg, OoMChar[outmapz], 255 - sizeof(modmsg) - 1);
		}
		if (PedWepz == 9)
		{
			stradd(modmsg, "Weather Types\n<x>:Confirm\n<cancel>:Cancel\n<dpadleftright>:Weather: ", 255 - sizeof(modmsg) - 1);
			stradd(modmsg, WTChar[weathint], 255 - sizeof(modmsg) - 1);
		}
		if (PedWepz == 10)
		{
			stradd(modmsg, "Mount Spawner\n<x>:Confirm\n<cancel>:Cancel\n<dpadleftright>:Mount: ", 255 - sizeof(modmsg) - 1);
			stradd(modmsg, MSChar[mspz], 255 - sizeof(modmsg) - 1);
		}
		if (PedWepz == 14)
		{
			stradd(modmsg, "Mount Accessory Editor\n<x>:Confirm\n<cancel>:Cancel\n<dpadleftright>:Accessory: ", 255 - sizeof(modmsg) - 1);
			stradd(modmsg, MAChar[muit], 255 - sizeof(modmsg) - 1);
		}
		if (PedWepz == 16)
		{
			stradd(modmsg, "Choose Rank [Must Choose a Prestige]\n<x>:Confirm\n<cancel>:Cancel\n<dpadupdown>:Prestige: ", 255 - sizeof(modmsg) - 1);
			stradd(modmsg, INT_TO_STRING(prerank), 255 - sizeof(modmsg) - 1);
			stradd(modmsg, "\n<dpadleftright>:Level: ", 255 - sizeof(modmsg) - 1);
			stradd(modmsg, INT_TO_STRING(testrank2), 255 - sizeof(modmsg) - 1);
		}
		if (PedWepz == 17)
		{
			stradd(modmsg, "Stat Editor [Doesnt Modify Every Stat]\n<x>:Confirm\n<cancel>:Cancel\n<dpadleftright>:Stats: ", 255 - sizeof(modmsg) - 1);
			stradd(modmsg, SEChar[statset], 255 - sizeof(modmsg) - 1);
		}
		if (PedWepz == 18)
		{
			stradd(modmsg, "Script Loader\n<x>:Confirm\n<cancel>:Cancel\n<y>:Terminate All\n<lb>:Script Info\n<dpadleftright>:Script To Load: ", 255 - sizeof(modmsg) - 1);
			stradd(modmsg, SLChar[Cscript], 255 - sizeof(modmsg) - 1);
			if (GetButton(BUTTON_LB))
			{
				print2("<orange>Custom Scripts Go In /content/release/scripting/</orange> \n <blue>Name Them As DRS1-10</blue> \n <green>Example: DRS1.xsc/DRS1.csc</green> \nUse AreDeAre To Import Scripts", 7000);
			}
		}
		if (PedWepz == 19)
		{
			stradd(modmsg, "Quick Model\n<x>:Confirm\n<cancel>:Cancel\n<dpadleftright>:Model: ", 255 - sizeof(modmsg) - 1);
			stradd(modmsg, QuickM[QModel], 255 - sizeof(modmsg) - 1);
			stradd_s(modmsg2, "Current Player Info\n");
			straddi_s(modmsg2, GET_ACTOR_ENUM(self));
			stradd_s(modmsg2, " - ");
			stradd_s(modmsg2, UNK_0xD98CB6F6(self));
			print2(modmsg2, 1000);
		}
		if (PedWepz == 20)
		{
			stradd(modmsg, "Quick Ped Spawner\n<x>:Confirm\n<cancel>:Cancel\n<dpadupdown>:Ped Class:<red> ", 255 - sizeof(modmsg) - 1);
			stradd(modmsg, LectChar[selectorz], 255 - sizeof(modmsg) - 1);
			stradd(modmsg, "\n</red><dpadleftright>:Ped:<blue> ", 255 - sizeof(modmsg) - 1);
			if (selectorz == 0)stradd(modmsg, ZombChar[zombi], 255 - sizeof(modmsg) - 1);
			if (selectorz == 1)stradd(modmsg, WorkChar[workz], 255 - sizeof(modmsg) - 1);
			if (selectorz == 2)stradd(modmsg, GangChar[gangz], 255 - sizeof(modmsg) - 1);
			if (selectorz == 3)stradd(modmsg, LawChar[lawz], 255 - sizeof(modmsg) - 1);
			if (selectorz == 4)stradd(modmsg, ProstChar[prostz], 255 - sizeof(modmsg) - 1);
			if (selectorz == 5)stradd(modmsg, AniChar[animalzz], 255 - sizeof(modmsg) - 1);
			if (selectorz == 6)stradd(modmsg, MiscChar[miscz], 255 - sizeof(modmsg) - 1);
		}
		if (PedWepz == 21)
		{
			stradd(modmsg, "Outfit Editor\n<x>:Confirm\n<cancel>:Cancel\n<y>:Toggle Hat\n<rb>:Toggle Bandana\n<dpadleftright>:John/Jack Outfit: ", 255 - sizeof(modmsg) - 1);
			stradd(modmsg, INT_TO_STRING(jtest1), 255 - sizeof(modmsg) - 1);
		}
		if (PedWepz == 22)
		{
			stradd(modmsg, "Menu Editor - (MUST SELECT EVERY COLOR)\n<x>:Confirm\n<cancel>:Cancel\n<dpadupdown>:Title Color:<orange> ", 255 - sizeof(modmsg) - 1);
			stradd(modmsg, ColOp1Char[opcol1], 255 - sizeof(modmsg) - 1);
			stradd(modmsg, "\n </orange><dpadleftright>:Option Color:<orange> ", 255 - sizeof(modmsg) - 1);
			stradd(modmsg, ColOp2Char[opcol2], 255 - sizeof(modmsg) - 1);
			stradd(modmsg, "\n </orange><lb><rb>:Hover Option Color:<orange> ", 255 - sizeof(modmsg) - 1);
			stradd(modmsg, ColOp3Char[opcol3], 255 - sizeof(modmsg) - 1);
		}
		if (PedWepz == 23)
		{
			stradd(modmsg, "Ped Spawner\n<x>:Confirm\n<cancel>:Cancel\n<dpadleftright>:Ped ID: ", 255 - sizeof(modmsg) - 1);
			stradd(modmsg, INT_TO_STRING(pedname), 255 - sizeof(modmsg) - 1);
		}
		if (PedWepz == 24)
		{
			stradd(modmsg, "Model Changer\n<x>:Confirm\n<cancel>:Cancel\n<dpadleftright>:Model ID: ", 255 - sizeof(modmsg) - 1);
			straddi_s(modmsg, modelname);
			stradd_s(modmsg2, "Current Player Info\n");
			straddi_s(modmsg2, GET_ACTOR_ENUM(self));
			stradd_s(modmsg2, " - ");
			stradd_s(modmsg2, UNK_0xD98CB6F6(self));
			print2(modmsg2, 1000);
		}
		if (PedWepz == 25)
		{
			stradd(modmsg, "Time Editor\n<x>:Confirm\n<cancel>:Cancel\n<dpadleftright>:Time: ", 255 - sizeof(modmsg) - 1);
			stradd(modmsg, INT_TO_STRING(todg), 255 - sizeof(modmsg) - 1);
		}
		if (PedWepz == 26)
		{
			stradd(modmsg, "Weapon Spawner\n<x>:Confirm\n<cancel>:Cancel\n<dpadleftright>:Weapon:<orange> ", 255 - sizeof(modmsg) - 1);
			if (wepspawn == 26 || wepspawn == 27 || wepspawn == 28 || wepspawn == 30)stradd(modmsg, "BLOCKED WEP", 255 - sizeof(modmsg) - 1);
			if (wepspawn == 32)stradd(modmsg, "Zombie Spit", 255 - sizeof(modmsg) - 1);
			if (wepspawn == 33)stradd(modmsg, "Torch", 255 - sizeof(modmsg) - 1);
			if (wepspawn == 34)stradd(modmsg, "Blunderbuss", 255 - sizeof(modmsg) - 1);
			if (wepspawn == 35)stradd(modmsg, "Holy Water", 255 - sizeof(modmsg) - 1);
			if (wepspawn == 36)stradd(modmsg, "Zombie Bait", 255 - sizeof(modmsg) - 1);
			if (wepspawn == 37)stradd(modmsg, "Zombie Boom Bait", 255 - sizeof(modmsg) - 1);
			if (wepspawn != 26 && wepspawn != 27 && wepspawn != 28 && wepspawn != 30 && wepspawn != 32 && wepspawn != 33 && wepspawn != 34 && wepspawn != 35 && wepspawn != 36 && wepspawn != 37)stradd(modmsg, UI_GET_STRING(GET_WEAPON_DISPLAY_NAME(wepspawn)), 255 - sizeof(modmsg) - 1);
		}
		_PRINT_HELP(modmsg, 500.0f, false, 1, 2, 1, 0, 0);
		if (GetButton(DPAD_LEFT))
		{
			if (PedWepz == 1)
			{
				wepzint--;
				if (wepzint < 0) wepzint = 32;
			}
			if (PedWepz == 3)
			{
				vehintz--;
				if (vehintz < 0) vehintz = 25;
			}
			if (PedWepz == 4)
			{
				austel--;
				if (austel < 0) austel = 13;
			}
			if (PedWepz == 5)
			{
				westeli--;
				if (westeli < 0) westeli = 6;
			}
			if (PedWepz == 6)
			{
				mextel--;
				if (mextel < 0) mextel = 12;
			}
			if (PedWepz == 7)
			{
				hidint--;
				if (hidint < 0) hidint = 22;
			}
			if (PedWepz == 8)
			{
				outmapz--;
				if (outmapz < 0) outmapz = 5;
			}
			if (PedWepz == 9)
			{
				weathint--;
				if (weathint < 0) weathint = 22;
			}
			if (PedWepz == 10)
			{
				mspz--;
				if (mspz < 0) mspz = 47;
			}
			if (PedWepz == 14)
			{
				muit--;
				if (muit < 0) muit = 11;
			}
			if (PedWepz == 17)
			{
				statset--;
				if (statset < 0) statset = 4;
			}
			if (PedWepz == 18)
			{
				Cscript--;
				if (Cscript < 0) Cscript = 9;
			}
			if (PedWepz == 19)
			{
				QModel--;
				if (QModel < 0) QModel = 9;
			}
			if (PedWepz == 20)
			{
				if (selectorz == 0)
				{
					zombi--;
					if (zombi < 0) zombi = 7;
				}
				if (selectorz == 1)
				{
					workz--;
					if (workz < 0) workz = 7;
				}
				if (selectorz == 2)
				{
					gangz--;
					if (gangz < 0) gangz = 6;
				}
				if (selectorz == 3)
				{
					lawz--;
					if (lawz < 0) lawz = 7;
				}
				if (selectorz == 4)
				{
					prostz--;
					if (prostz < 0) prostz = 6;
				}
				if (selectorz == 5)
				{
					animalzz--;
					if (animalzz < 0) animalzz = 6;
				}
				if (selectorz == 6)
				{
					miscz--;
					if (miscz < 0) miscz = 6;
				}
			}
			if (PedWepz == 21)
			{
				jtest1--;
				if (jtest1 < 0) jtest1 = 24;
			}
			if (PedWepz == 22)
			{
				opcol2--;
				if (opcol2 < 0) opcol2 = 8;
			}
			if (PedWepz == 25)
			{
				todg--;
				if (todg < 0) todg = 24;
			}
			if (PedWepz == 26)
			{
				wepspawn--;
				if (wepspawn < 0) wepspawn = 37;
			}
		}
		if (GetButtonDown(DPAD_LEFT))
		{
			if (PedWepz == 16)
			{
				testrank2--;
				if (testrank2 < 1) testrank2 = 50;
				WAIT(50);
			}
			if (PedWepz == 23)
			{
				pedname--;
				if (pedname < 0) pedname = 1286;
				WAIT(50);
			}
			if (PedWepz == 24)
			{
				modelname--;
				if (modelname < 0) modelname = 1286;
				WAIT(50);
			}
		}
		if (GetButtonDown(DPAD_RIGHT))
		{
			if (PedWepz == 16)
			{
				testrank2++;
				if (testrank2 > 50) testrank2 = 1;
				WAIT(50);
			}
			if (PedWepz == 23)
			{
				pedname++;
				if (pedname > 1286) pedname = 0;
				WAIT(50);
			}
			if (PedWepz == 24)
			{
				modelname++;
				if (modelname > 1286) modelname = 0;
				WAIT(50);
			}
		}
		if (GetButton(DPAD_RIGHT))
		{
			if (PedWepz == 1)
			{
				wepzint++;
				if (wepzint > 32) wepzint = 0;
			}
			if (PedWepz == 3)
			{
				vehintz++;
				if (vehintz > 25) vehintz = 0;
			}
			if (PedWepz == 4)
			{
				austel++;
				if (austel > 13) austel = 0;
			}
			if (PedWepz == 5)
			{
				westeli++;
				if (westeli > 6) westeli = 0;
			}
			if (PedWepz == 6)
			{
				mextel++;
				if (mextel > 12) mextel = 0;
			}
			if (PedWepz == 7)
			{
				hidint++;
				if (hidint > 22) hidint = 0;
			}
			if (PedWepz == 8)
			{
				outmapz++;
				if (outmapz > 5) outmapz = 0;
			}
			if (PedWepz == 9)
			{
				weathint++;
				if (weathint > 22) weathint = 0;
			}
			if (PedWepz == 10)
			{
				mspz++;
				if (mspz > 47) mspz = 0;
			}
			if (PedWepz == 14)
			{
				muit++;
				if (muit > 11) muit = 0;
			}
			if (PedWepz == 17)
			{
				statset++;
				if (statset > 4) statset = 0;
			}
			if (PedWepz == 18)
			{
				Cscript++;
				if (Cscript > 9) Cscript = 0;
			}
			if (PedWepz == 19)
			{
				QModel++;
				if (QModel > 9) QModel = 0;
			}
			if (PedWepz == 20)
			{
				if (selectorz == 0)
				{
					zombi++;
					if (zombi > 7) zombi = 0;
				}
				if (selectorz == 1)
				{
					workz++;
					if (workz > 7) workz = 0;
				}
				if (selectorz == 2)
				{
					gangz++;
					if (gangz > 6) gangz = 0;
				}
				if (selectorz == 3)
				{
					lawz++;
					if (lawz > 7) lawz = 0;
				}
				if (selectorz == 4)
				{
					prostz++;
					if (prostz > 6) prostz = 0;
				}
				if (selectorz == 5)
				{
					animalzz++;
					if (animalzz > 6) animalzz = 0;
				}
				if (selectorz == 6)
				{
					miscz++;
					if (miscz > 6) miscz = 0;
				}
			}
			if (PedWepz == 21)
			{
				jtest1++;
				if (jtest1 > 24) jtest1 = 0;
			}
			if (PedWepz == 22)
			{
				opcol2++;
				if (opcol2 > 8) opcol2 = 0;
			}
			if (PedWepz == 25)
			{
				todg++;
				if (todg > 24) todg = 0;
			}
			if (PedWepz == 26)
			{
				wepspawn++;
				if (wepspawn > 37) wepspawn = 0;
			}
		}
		if (GetButton(DPAD_DOWN))
		{
			if (PedWepz == 16)
			{
				prerank--;
				if (prerank < 0) prerank = 6;
			}
			if (PedWepz == 20)
			{
				selectorz--;
				if (selectorz < 0) selectorz = 6;
			}
			if (PedWepz == 22)
			{
				opcol1--;
				if (opcol1 < 0) opcol1 = 9;
			}
		}
		if (GetButton(DPAD_UP))
		{
			if (PedWepz == 16)
			{
				prerank++;
				if (prerank > 6) prerank = 0;
			}
			if (PedWepz == 20)
			{
				selectorz++;
				if (selectorz > 6) selectorz = 0;
			}
			if (PedWepz == 22)
			{
				opcol1++;
				if (opcol1 > 9) opcol1 = 0;
			}
		}
		if (GetButton(BUTTON_Y))
		{
			if (PedWepz == 18)
			{
				print2("<0x00FFFF>All Loaded Scripts Terminated</0x>", 2000); CancelScr(drs1); CancelScr(drs2); CancelScr(drs3); CancelScr(drs4); CancelScr(drs5); CancelScr(drs6); CancelScr(drs7); CancelScr(drs8); CancelScr(drs9); CancelScr(drs10);
			}
			if (PedWepz == 21)
			{
				if (tghat == 0)
				{
					_REMOVE_HAT(self);
					GiveActorAllWeapons();
					tghat = 1;
				}
				else if (tghat == 1)
				{
					_ADD_HAT(self);
					GiveActorAllWeapons();
					tghat = 0;
				}
			}
		}
		if (GetButton(BUTTON_LB))
		{
			if (PedWepz == 22)
			{
				opcol3--;
				if (opcol3 < 0) opcol3 = 8;
			}
		}
		if (GetButton(BUTTON_RB))
		{
			if (PedWepz == 21)
			{
				if (tban == 0)
				{
					EQUIP_ACCESSORY(self, 1, 0); ACTOR_ENABLE_VARIABLE_MESH(self, 26, 0);tban = 1;
				}
				else if (tban == 1)
				{
					EQUIP_ACCESSORY(self, 1, 1); ACTOR_ENABLE_VARIABLE_MESH(self, 26, 1);tban = 0;
				}
			}
			if (PedWepz == 22)
			{
				opcol3++;
				if (opcol3 > 8) opcol3 = 0;
			}
		}
		if (PLATFORM == PLATFORM_X360 && GetButton(BUTTON_X))
		{
			if (PedWepz == 1 && wepzint != 21 && wepzint != 30)
			{
				GivePedWepz(wepzint);
			}
			if (PedWepz == 1 && wepzint == 32)
			{
				for (int i = 0; i <= 9; i++)
				{
					_REMOVE_WEAPONS(SpawnPed[i]);
				}
			}
			if (PedWepz == 3)
			{
				if (vehintz == 0) { HUD_CLEAR_HELP_QUEUE(); SpawnThatVehicle(1177, 1177); SpawnDraft(993, 993); SpawnDraft(993, 993); ATTACH_DRAFT_TO_VEHICLE(SpawnDra1, SpawnCar1, 0, 1); ATTACH_DRAFT_TO_VEHICLE(SpawnDra2, SpawnCar1, 1, 1); UNK_0xD85CA776(SpawnCar1); UNK_0xB12584C8(SpawnCar1, 5); SpawnTheDra = 0; }
				if (vehintz == 1) { HUD_CLEAR_HELP_QUEUE(); SpawnThatVehicle(1178, 1178); SpawnDraft(992, 992); SpawnDraft(992, 992); SpawnDraft(992, 992); SpawnDraft(992, 992); ATTACH_DRAFT_TO_VEHICLE(SpawnDra1, SpawnCar1, 0, 1); ATTACH_DRAFT_TO_VEHICLE(SpawnDra2, SpawnCar1, 1, 1); ATTACH_DRAFT_TO_VEHICLE(SpawnDra3, SpawnCar1, 2, 1); ATTACH_DRAFT_TO_VEHICLE(SpawnDra4, SpawnCar1, 3, 1); UNK_0xD85CA776(SpawnCar1); UNK_0xB12584C8(SpawnCar1, 5); SpawnTheDra = 0; }
				if (vehintz == 2) { HUD_CLEAR_HELP_QUEUE(); SpawnThatVehicle(1179, 1179); SpawnDraft(979, 979); SpawnDraft(979, 979); SpawnDraft(979, 979); SpawnDraft(979, 979); ATTACH_DRAFT_TO_VEHICLE(SpawnDra1, SpawnCar1, 0, 1); ATTACH_DRAFT_TO_VEHICLE(SpawnDra2, SpawnCar1, 1, 1); ATTACH_DRAFT_TO_VEHICLE(SpawnDra3, SpawnCar1, 2, 1); ATTACH_DRAFT_TO_VEHICLE(SpawnDra4, SpawnCar1, 3, 1); UNK_0xD85CA776(SpawnCar1); UNK_0xB12584C8(SpawnCar1, 5); SpawnTheDra = 0; }
				if (vehintz == 3) { HUD_CLEAR_HELP_QUEUE(); SpawnThatVehicle(1180, 1180); SpawnDraft(992, 992); SpawnDraft(992, 992); SpawnDraft(992, 992); SpawnDraft(992, 992); ATTACH_DRAFT_TO_VEHICLE(SpawnDra1, SpawnCar1, 0, 1); ATTACH_DRAFT_TO_VEHICLE(SpawnDra2, SpawnCar1, 1, 1); ATTACH_DRAFT_TO_VEHICLE(SpawnDra3, SpawnCar1, 2, 1); ATTACH_DRAFT_TO_VEHICLE(SpawnDra4, SpawnCar1, 3, 1); UNK_0xD85CA776(SpawnCar1); UNK_0xB12584C8(SpawnCar1, 5); SpawnTheDra = 0; }
				if (vehintz == 4) { HUD_CLEAR_HELP_QUEUE(); DESTROY_ACTOR(SpawnCar1); DESTROY_ACTOR(SpawnDra1); DESTROY_ACTOR(SpawnDra2); DESTROY_ACTOR(SpawnDra3); DESTROY_ACTOR(SpawnDra4); SpawnTheDra = 0; print2("This Vehicle Was Never Implemented Into RDR, Sorry", 4000); }
				if (vehintz == 5) { HUD_CLEAR_HELP_QUEUE(); SpawnThatVehicle(1182, 1182); SpawnDraft(993, 993); SpawnDraft(993, 993); SpawnDraft(993, 993); SpawnDraft(993, 993); ATTACH_DRAFT_TO_VEHICLE(SpawnDra1, SpawnCar1, 0, 1); ATTACH_DRAFT_TO_VEHICLE(SpawnDra2, SpawnCar1, 1, 1); ATTACH_DRAFT_TO_VEHICLE(SpawnDra3, SpawnCar1, 2, 1); ATTACH_DRAFT_TO_VEHICLE(SpawnDra4, SpawnCar1, 3, 1); UNK_0xD85CA776(SpawnCar1); UNK_0xB12584C8(SpawnCar1, 5); SpawnTheDra = 0; }
				if (vehintz == 6) { HUD_CLEAR_HELP_QUEUE(); SpawnThatVehicle(1183, 1183); SpawnDraft(976, 976); ATTACH_DRAFT_TO_VEHICLE(SpawnDra1, SpawnCar1, 0, 1); UNK_0xD85CA776(SpawnCar1); UNK_0xB12584C8(SpawnCar1, 5); SpawnTheDra = 0; }
				if (vehintz == 7) { HUD_CLEAR_HELP_QUEUE(); SpawnThatVehicle(1184, 1184); SpawnDraft(977, 977); ATTACH_DRAFT_TO_VEHICLE(SpawnDra1, SpawnCar1, 0, 1); UNK_0xD85CA776(SpawnCar1); UNK_0xB12584C8(SpawnCar1, 5); SpawnTheDra = 0; }
				if (vehintz == 8) { HUD_CLEAR_HELP_QUEUE(); SpawnThatVehicle(1185, 1185); SpawnDraft(980, 980); ATTACH_DRAFT_TO_VEHICLE(SpawnDra1, SpawnCar1, 0, 1); UNK_0xD85CA776(SpawnCar1); UNK_0xB12584C8(SpawnCar1, 5); SpawnTheDra = 0; }
				if (vehintz == 9) { HUD_CLEAR_HELP_QUEUE(); SpawnThatVehicle(1186, 1186); SpawnDraft(978, 978); ATTACH_DRAFT_TO_VEHICLE(SpawnDra1, SpawnCar1, 0, 1); UNK_0xD85CA776(SpawnCar1); UNK_0xB12584C8(SpawnCar1, 5); SpawnTheDra = 0; }
				if (vehintz == 10) { HUD_CLEAR_HELP_QUEUE(); SpawnThatVehicle(1187, 1187); SpawnDraft(982, 982); ATTACH_DRAFT_TO_VEHICLE(SpawnDra1, SpawnCar1, 0, 1); UNK_0xD85CA776(SpawnCar1); UNK_0xB12584C8(SpawnCar1, 5); SpawnTheDra = 0; }
				if (vehintz == 11) { HUD_CLEAR_HELP_QUEUE(); SpawnThatVehicle(1188, 1188); SpawnDraft(981, 981); ATTACH_DRAFT_TO_VEHICLE(SpawnDra1, SpawnCar1, 0, 1); UNK_0xD85CA776(SpawnCar1); UNK_0xB12584C8(SpawnCar1, 5); SpawnTheDra = 0; }
				if (vehintz == 12) { HUD_CLEAR_HELP_QUEUE(); SpawnThatVehicle(1189, 1189); SpawnTheDra = 0; }
				if (vehintz == 13) { HUD_CLEAR_HELP_QUEUE(); SpawnThatVehicle(1190, 1190); SpawnTheDra = 0; }
				if (vehintz == 14) { HUD_CLEAR_HELP_QUEUE(); SpawnThatVehicle(1191, 1191); SpawnTheDra = 0; }
				if (vehintz == 15) { HUD_CLEAR_HELP_QUEUE(); SpawnThatVehicle(1192, 1192); SpawnTheDra = 0; }
				if (vehintz == 16) { HUD_CLEAR_HELP_QUEUE(); SpawnThatVehicle(1193, 1193); SpawnTheDra = 0; }
				if (vehintz == 17) { HUD_CLEAR_HELP_QUEUE(); SpawnThatVehicle(1194, 1194); SpawnTheDra = 0; }
				if (vehintz == 18) { HUD_CLEAR_HELP_QUEUE(); SpawnThatVehicle(1195, 1195); SpawnDraft(988, 988); SpawnDraft(988, 988); ATTACH_DRAFT_TO_VEHICLE(SpawnDra1, SpawnCar1, 0, 1); ATTACH_DRAFT_TO_VEHICLE(SpawnDra2, SpawnCar1, 1, 1); UNK_0xD85CA776(SpawnCar1); UNK_0xB12584C8(SpawnCar1, 5); SpawnTheDra = 0; }
				if (vehintz == 19) { HUD_CLEAR_HELP_QUEUE(); SpawnThatVehicle(1196, 1196); SpawnDraft(976, 976); SpawnDraft(976, 976); ATTACH_DRAFT_TO_VEHICLE(SpawnDra1, SpawnCar1, 0, 1); ATTACH_DRAFT_TO_VEHICLE(SpawnDra2, SpawnCar1, 1, 1); UNK_0xD85CA776(SpawnCar1); UNK_0xB12584C8(SpawnCar1, 5); SpawnTheDra = 0; }
				if (vehintz == 20) { HUD_CLEAR_HELP_QUEUE(); SpawnThatVehicle(1197, 1197); SpawnDraft(979, 979); SpawnDraft(979, 979); ATTACH_DRAFT_TO_VEHICLE(SpawnDra1, SpawnCar1, 0, 1); ATTACH_DRAFT_TO_VEHICLE(SpawnDra2, SpawnCar1, 1, 1); UNK_0xD85CA776(SpawnCar1); UNK_0xB12584C8(SpawnCar1, 5); SpawnTheDra = 0; }
				if (vehintz == 21) { HUD_CLEAR_HELP_QUEUE(); SpawnThatVehicle(1198, 1198); SpawnDraft(993, 993); SpawnDraft(993, 993); ATTACH_DRAFT_TO_VEHICLE(SpawnDra1, SpawnCar1, 0, 1); ATTACH_DRAFT_TO_VEHICLE(SpawnDra2, SpawnCar1, 1, 1); UNK_0xD85CA776(SpawnCar1); UNK_0xB12584C8(SpawnCar1, 5); SpawnTheDra = 0; }
				if (vehintz == 22) { HUD_CLEAR_HELP_QUEUE(); SpawnThatVehicle(1199, 1199); SpawnDraft(996, 996); SpawnDraft(996, 996); ATTACH_DRAFT_TO_VEHICLE(SpawnDra1, SpawnCar1, 0, 1); ATTACH_DRAFT_TO_VEHICLE(SpawnDra2, SpawnCar1, 1, 1); UNK_0xD85CA776(SpawnCar1); UNK_0xB12584C8(SpawnCar1, 5); SpawnTheDra = 0; }
				if (vehintz == 23) { HUD_CLEAR_HELP_QUEUE(); SpawnThatVehicle(1200, 1200); SpawnDraft(984, 984); SpawnDraft(984, 984); ATTACH_DRAFT_TO_VEHICLE(SpawnDra1, SpawnCar1, 0, 1); ATTACH_DRAFT_TO_VEHICLE(SpawnDra2, SpawnCar1, 1, 1); UNK_0xD85CA776(SpawnCar1); UNK_0xB12584C8(SpawnCar1, 5); SpawnTheDra = 0; }
				if (vehintz == 24) { HUD_CLEAR_HELP_QUEUE(); SpawnThatVehicle(1201, 1201); SpawnDraft(987, 987); SpawnDraft(987, 987); ATTACH_DRAFT_TO_VEHICLE(SpawnDra1, SpawnCar1, 0, 1); ATTACH_DRAFT_TO_VEHICLE(SpawnDra2, SpawnCar1, 1, 1); UNK_0xD85CA776(SpawnCar1); UNK_0xB12584C8(SpawnCar1, 5); SpawnTheDra = 0; }
				if (vehintz == 25) { HUD_CLEAR_HELP_QUEUE(); SpawnThatVehicle(1202, 1202); SpawnDraft(979, 979); SpawnDraft(979, 979); ATTACH_DRAFT_TO_VEHICLE(SpawnDra1, SpawnCar1, 0, 1); ATTACH_DRAFT_TO_VEHICLE(SpawnDra2, SpawnCar1, 1, 1); UNK_0xD85CA776(SpawnCar1); UNK_0xB12584C8(SpawnCar1, 5); SpawnTheDra = 0; }
			}
			if (PedWepz == 4)
			{
				SET_PLAYER_CONTROL(self, 0, 0, 0);
				if (austel == 0) { TeleportActor(-2175.62f, 16.31f, 2613.50f); }
				if (austel == 1) { TeleportActor(-887.08f, 90.19f, 2420.53f); }
				if (austel == 2) { TeleportActor(-4007.25f, 28.46f, 2935.45f); }
				if (austel == 3) { TeleportActor(-2622.53f, 68.08f, 3390.51f); }
				if (austel == 4) { TeleportActor(-4461.66f, 7.78f, 3310.42f); }
				if (austel == 5) { TeleportActor(-2425.06f, 25.00f, 2138.93f); }
				if (austel == 6) { TeleportActor(-3126.40f, 43.57f, 3724.13f); }
				if (austel == 7) { TeleportActor(-3661.76f, 42.23f, 2124.73f); }
				if (austel == 8) { TeleportActor(-3275.14f, 15.89f, 2719.86f); }
				if (austel == 9) { TeleportActor(111.55f, 73.29f, 2318.82f); }
				if (austel == 10) { TeleportActor(-3686.96f, 8.62f, 3493.24f); }
				if (austel == 11) { TeleportActor(-1955.07f, 24.82f, 3255.67f); }
				if (austel == 12) { TeleportActor(-1793.48f, 23.78f, 2836.85f); }
				if (austel == 13) { TeleportActor(-1226.26f, 74.29f, 2369.10f); }
				SET_PLAYER_CONTROL(self, 1, 0, 0);
			}
			if (PedWepz == 5)
			{
				SET_PLAYER_CONTROL(self, 0, 0, 0);
				if (westeli == 0) { TeleportActor(711.18f, 78.31f, 1252.76f); }
				if (westeli == 1) { TeleportActor(-739.29f, 179.10f, 784.69f); }
				if (westeli == 2) { TeleportActor(-83.45f, 117.68f, 1374.10f); }
				if (westeli == 3) { TeleportActor(-428.16f, 151.34f, 1615.59f); }
				if (westeli == 4) { TeleportActor(-221.09f, 84.31f, 2124.10f); }
				if (westeli == 5) { TeleportActor(-1043.06f, 184.05f, 1361.10f); }
				if (westeli == 6) { TeleportActor(325.34f, 74.29f, 1939.81f); }
				SET_PLAYER_CONTROL(self, 1, 0, 0);
			}
			if (PedWepz == 6)
			{
				SET_PLAYER_CONTROL(self, 0, 0, 0);
				if (mextel == 0) { TeleportActor(-4279.04f, 18.07f, 4447.64f); }
				if (mextel == 1) { TeleportActor(-2714.70f, 32.37f, 4251.90f); }
				if (mextel == 2) { TeleportActor(-1700.31f, 8.08f, 4242.14f); }
				if (mextel == 3) { TeleportActor(-3288.00f, 38.20f, 4547.00f); }
				if (mextel == 4) { TeleportActor(-698.10f, 63.25f, 3323.25f); }
				if (mextel == 5) { TeleportActor(-788.78f, 13.04f, 3729.81f); }
				if (mextel == 6) { TeleportActor(-4701.72f, 3.04f, 3958.90f); }
				if (mextel == 7) { TeleportActor(-455.44f, 20.84f, 3926.91f); }
				if (mextel == 8) { TeleportActor(-1545.03f, 15.03f, 3913.46f); }
				if (mextel == 9) { TeleportActor(376.66f, 76.30f, 3459.57f); }
				if (mextel == 10) { TeleportActor(-1153.43f, 26.15f, 4829.81f); }
				if (mextel == 11) { TeleportActor(-82.37f, 53.01f, 2844.53f); }
				if (mextel == 12) { TeleportActor(-2136.35f, 16.03f, 4938.61f); }
				SET_PLAYER_CONTROL(self, 1, 0, 0);
			}
			if (PedWepz == 7)
			{
				SET_PLAYER_CONTROL(self, 0, 0, 0);
				if (hidint == 0) { TeleportActor(-789.04f, 93.07f, 2402.02f); }
				if (hidint == 1) { TeleportActor(-2068.08f, 19.05f, 2648.07f); }
				if (hidint == 2) { TeleportActor(-2159.03f, 19.09f, 2597.04f); }
				if (hidint == 3) { TeleportActor(-2158.06f, 19.09f, 2588.07f); }
				if (hidint == 4) { TeleportActor(133.00f, 73.07f, 2296.06f); }
				if (hidint == 5) { TeleportActor(773.08f, 79.05f, 1235.01f); }
				if (hidint == 6) { TeleportActor(775.08, 78.06f, 1284.04f); }
				if (hidint == 7) { TeleportActor(709.09f, 78.09f, 1290.02f); }
				if (hidint == 8) { TeleportActor(747.09f, 86.09f, 1265.09f); }
				if (hidint == 9) { TeleportActor(749.03f, 78.04f, 1277.05f); }
				if (hidint == 10) { TeleportActor(751.04f, 78.06f, 1302.00f); }
				if (hidint == 11) { TeleportActor(678.07f, 83.05f, 1236.09f); }
				if (hidint == 12) { TeleportActor(751.06f, 82.07f, 1270.02f); }
				if (hidint == 13) { TeleportActor(583.10f, 85.80f, 1326.80f); }
				if (hidint == 14) { TeleportActor(-106.07f, 119.05f, 1361.02f); }
				if (hidint == 15) { TeleportActor(-4307.00f, 31.02f, 4384.01f); }
				if (hidint == 16) { TeleportActor(-4333.05f, 30.00f, 4374.07f); }
				if (hidint == 17) { TeleportActor(-4355.02f, 29.03f, 4405.08f); }
				if (hidint == 18) { TeleportActor(-4356.02f, 42.03f, 4329.08f); }
				if (hidint == 19) { TeleportActor(-1692.01f, 8.00f, 4188.05f); }
				if (hidint == 20) { TeleportActor(-1709.09f, 13.00f, 4199.06f); }
				if (hidint == 21) { TeleportActor(-2690.02f, 31.03f, 4295.08f); }
				if (hidint == 22) { TeleportActor(-2742.02f, 32.03f, 4247.08f); }
				SET_PLAYER_CONTROL(self, 1, 0, 0);
			}
			if (PedWepz == 8)
			{
				SET_PLAYER_CONTROL(self, 0, 0, 0);
				if (outmapz == 0) { TeleportActor(-112.10f, 128.50f, 898.37f); }
				if (outmapz == 1) { TeleportActor(-1085.06f, 354.03f, 1081.01f); }
				if (outmapz == 2) { TeleportActor(1398.61f, 86.31f, 1876.81f); }
				if (outmapz == 3) { TeleportActor(-1048.06f, 189.02f, 5609.07f); }
				if (outmapz == 4) { TeleportActor(-5068.03f, 28.01f, 4163.07f); }
				if (outmapz == 5) { TeleportActor(-177.03f, 36.08f, 4473.09f); }
				SET_PLAYER_CONTROL(self, 1, 0, 0);
			}
			if (PedWepz == 9)
			{
				if (weathint == 0) { SET_WEATHER(0, 0); }
				if (weathint == 1) { SET_WEATHER(1, 0); }
				if (weathint == 2) { SET_WEATHER(2, 0); }
				if (weathint == 3) { SET_WEATHER(3, 0); SET_RAIN_AMOUNT((RAND_FLOAT_RANGE(0.0f, 10000.0f) / 10000.0f));UNK_0xF0C9645A((RAND_FLOAT_RANGE(0.0f, 100.0f) / 10000.0f));UNK_0xEB866555(); }
				if (weathint == 4) { SET_WEATHER(4, 0); SET_RAIN_AMOUNT((RAND_FLOAT_RANGE(0.0f, 10000.0f) / 10000.0f));UNK_0xF0C9645A((RAND_FLOAT_RANGE(0.0f, 100.0f) / 10000.0f));UNK_0xEB866555(); }
				if (weathint == 5) { SET_WEATHER(5, 0); }
				if (weathint == 6) { SET_WEATHER(12, 0); }
				if (weathint == 7) { SET_WEATHER(13, 0); }
				if (weathint == 8) { SET_WEATHER(14, 0); }
				if (weathint == 9) { SET_WEATHER(15, 0); }
				if (weathint == 10) { SET_WEATHER(16, 0); }
				if (weathint == 11) { SET_WEATHER(17, 0); }
				if (weathint == 12) { SET_WEATHER(6, 0); }
				if (weathint == 13) { SET_WEATHER(7, 0); }
				if (weathint == 14) { SET_WEATHER(8, 0); }
				if (weathint == 15) { SET_WEATHER(9, 0); }
				if (weathint == 16) { SET_WEATHER(10, 0); }
				if (weathint == 17) { SET_WEATHER(11, 0); }
				if (weathint == 18) { SET_WEATHER(18, 0); }
				if (weathint == 19) { SET_WEATHER(19, 0); }
				if (weathint == 20) { SET_WEATHER(20, 0); }
				if (weathint == 21) { SET_WEATHER(21, 0); }
				if (weathint == 22) { SET_WEATHER(22, 0); }
				setGlobalAtIndex(16524, weathint);//host set weather test?
				SET_TIME_OF_DAY(GET_TIME_OF_DAY());
			}
			if (PedWepz == 10)
			{
				if (mspz == 0) { SpawnHorse(999, 999); }
				if (mspz == 1) { SpawnHorse(1003, 1003); }
				if (mspz == 2) { SpawnHorse(1269, 1269); }
				if (mspz == 3) { SpawnHorse(1268, 1268); }
				if (mspz == 4) { SpawnHorse(1271, 1271); }
				if (mspz == 5) { SpawnHorse(1270, 1270); }
				if (mspz == 6) { SpawnHorse(1267, 1267); }
				if (mspz == 7) { SpawnHorse(1248, 1248); }
				if (mspz == 8) { SpawnHorse(1249, 1249); }
				if (mspz == 9) { SpawnHorse(1250, 1250); }
				if (mspz == 10) { SpawnHorse(1251, 1251); }
				if (mspz == 11) { SpawnHorse(994, 994); }
				if (mspz == 12) { SpawnHorse(995, 995); }
				if (mspz == 13) { SpawnHorse(976, 976); }
				if (mspz == 14) { SpawnHorse(977, 977); }
				if (mspz == 15) { SpawnHorse(978, 978); }
				if (mspz == 16) { SpawnHorse(979, 979); }
				if (mspz == 17) { SpawnHorse(980, 980); }
				if (mspz == 18) { SpawnHorse(981, 981); }
				if (mspz == 19) { SpawnHorse(982, 982); }
				if (mspz == 20) { SpawnHorse(983, 983); }
				if (mspz == 21) { SpawnHorse(984, 984); }
				if (mspz == 22) { SpawnHorse(985, 985); }
				if (mspz == 23) { SpawnHorse(986, 986); }
				if (mspz == 24) { SpawnHorse(987, 987); }
				if (mspz == 25) { SpawnHorse(988, 988); }
				if (mspz == 26) { SpawnHorse(989, 989); }
				if (mspz == 27) { SpawnHorse(990, 990); }
				if (mspz == 28) { SpawnHorse(991, 991); }
				if (mspz == 29) { SpawnHorse(992, 992); }
				if (mspz == 30) { SpawnHorse(993, 993); }
				if (mspz == 31) { SpawnHorse(996, 996); }
				if (mspz == 32) { SpawnHorse(997, 997); }
				if (mspz == 33) { SpawnHorse(998, 998); }
				if (mspz == 34) { SpawnHorse(1000, 1000); }
				if (mspz == 35) { SpawnHorse(1001, 1001); }
				if (mspz == 36) { SpawnHorse(1002, 1002); }
				if (mspz == 37) { SpawnHorse(1004, 1004); UNK_0x6C939AA7(GET_MOUNT(self), 8); }
				if (mspz == 38) { SpawnHorse(1005, 1005); UNK_0x6C939AA7(GET_MOUNT(self), 8); }
				if (mspz == 39) { SpawnHorse(1012, 1012); }
				if (mspz == 40) { SpawnHorse(1013, 1013); }
				if (mspz == 41) { SpawnHorse(1014, 1014); }
				if (mspz == 42) { SpawnHorse(1006, 1006); UNK_0x6C939AA7(GET_MOUNT(self), 8); }
				if (mspz == 43) { SpawnHorse(1007, 1007); UNK_0x6C939AA7(GET_MOUNT(self), 8); }
				if (mspz == 44) { SpawnHorse(1008, 1008); }
				if (mspz == 45) { SpawnHorse(1009, 1009); }
				if (mspz == 46) { SpawnHorse(1010, 1010); }
				if (mspz == 47) { SpawnHorse(1011, 1011); }
			}
			if (PedWepz == 14)
			{
				if (muit == 0) { DESTROY_OBJECT(testwtf); DESTROY_OBJECTSET(testwtf2); DESTROY_OBJECT(deafx2); DESTROY_OBJECTSET(deafx); DESTROY_OBJECT(war2); DESTROY_OBJECT(war4); DESTROY_OBJECT(war6); DESTROY_OBJECT(war8); DESTROY_OBJECT(war10); DESTROY_OBJECT(war12); DESTROY_OBJECT(war14); DESTROY_OBJECT(war16); DESTROY_OBJECT(war18); DESTROY_OBJECTSET(war1); DESTROY_OBJECTSET(war3); DESTROY_OBJECTSET(war4); DESTROY_OBJECTSET(war7); DESTROY_OBJECTSET(war9); DESTROY_OBJECTSET(war11); DESTROY_OBJECTSET(war13); DESTROY_OBJECTSET(war15); DESTROY_OBJECTSET(war17); REMOVE_HORSE_ACCESSORY(GET_MOUNT(self), 1); REMOVE_HORSE_ACCESSORY(GET_MOUNT(self), 2); REMOVE_HORSE_ACCESSORY(GET_MOUNT(self), 3); REMOVE_HORSE_ACCESSORY(GET_MOUNT(self), 4); REMOVE_HORSE_ACCESSORY(GET_MOUNT(self), 5); REMOVE_HORSE_ACCESSORY(GET_MOUNT(self), 6); REMOVE_HORSE_ACCESSORY(GET_MOUNT(self), 7); REMOVE_HORSE_ACCESSORY(GET_MOUNT(self), 8); }
				if (muit == 1) { UNK_0x6C939AA7(GET_MOUNT(self), 3); }
				if (muit == 2) { UNK_0x6C939AA7(GET_MOUNT(self), 4); }
				if (muit == 3) { UNK_0x6C939AA7(GET_MOUNT(self), 1); }
				if (muit == 4) { REMOVE_HORSE_ACCESSORY(GET_MOUNT(self), 8); UNK_0x6C939AA7(GET_MOUNT(self), 7); }
				if (muit == 5) { REMOVE_HORSE_ACCESSORY(GET_MOUNT(self), 7); UNK_0x6C939AA7(GET_MOUNT(self), 8); }
				if (muit == 6) { HorseFx(0, 1, 0, "script_unicorn_rainbow"); }
				if (muit == 7) { HorseFxDea(0, 0, 0, 0.0f, -0.5, -0.75, "script_4Horsemen_death_01", "script_4Horsemen_death_02"); }
				if (muit == 8) { HorseFx(0, 0, 0, "script_4Horsemen_famine_01"); }
				if (muit == 9) { HorseFx(0, 0, 0, "script_4Horsemen_pestilence_01"); }
				if (muit == 10) { HorseFxWar("script_4Horsemen_war_01", "script_4Horsemen_war_blaze"); }
				if (muit == 11) { HorseFxWar("script_4Horsemen_war_01", "weap_torch_flame_blueFire"); }
			}
			if (PedWepz == 16)
			{
				if (testrank2 == 1) { rankxp = 0; }
				if (testrank2 == 2) { rankxp = 150; }
				if (testrank2 == 3) { rankxp = 510; }
				if (testrank2 == 4) { rankxp = 1080; }
				if (testrank2 == 5) { rankxp = 1860; }
				if (testrank2 == 6) { rankxp = 2850; }
				if (testrank2 == 7) { rankxp = 4050; }
				if (testrank2 == 8) { rankxp = 5460; }
				if (testrank2 == 9) { rankxp = 7080; }
				if (testrank2 == 10) { rankxp = 8910; }
				if (testrank2 == 11) { rankxp = 10950; }
				if (testrank2 == 12) { rankxp = 13290; }
				if (testrank2 == 13) { rankxp = 15930; }
				if (testrank2 == 14) { rankxp = 18870; }
				if (testrank2 == 15) { rankxp = 22110; }
				if (testrank2 == 16) { rankxp = 25650; }
				if (testrank2 == 17) { rankxp = 29490; }
				if (testrank2 == 18) { rankxp = 33630; }
				if (testrank2 == 19) { rankxp = 38070; }
				if (testrank2 == 20) { rankxp = 42810; }
				if (testrank2 == 21) { rankxp = 47850; }
				if (testrank2 == 21) { rankxp = 47850; }
				if (testrank2 == 21) { rankxp = 47850; }
				if (testrank2 == 21) { rankxp = 47850; }
				if (testrank2 == 22) { rankxp = 53190; }
				if (testrank2 == 23) { rankxp = 58830; }
				if (testrank2 == 24) { rankxp = 64770; }
				if (testrank2 == 25) { rankxp = 71010; }
				if (testrank2 == 26) { rankxp = 77550; }
				if (testrank2 == 27) { rankxp = 84390; }
				if (testrank2 == 28) { rankxp = 91530; }
				if (testrank2 == 29) { rankxp = 98970; }
				if (testrank2 == 30) { rankxp = 106710; }
				if (testrank2 == 31) { rankxp = 114810; }
				if (testrank2 == 32) { rankxp = 123270; }
				if (testrank2 == 33) { rankxp = 132190; }
				if (testrank2 == 34) { rankxp = 141270; }
				if (testrank2 == 35) { rankxp = 150810; }
				if (testrank2 == 36) { rankxp = 160710; }
				if (testrank2 == 37) { rankxp = 170970; }
				if (testrank2 == 38) { rankxp = 181590; }
				if (testrank2 == 39) { rankxp = 192570; }
				if (testrank2 == 40) { rankxp = 203910; }
				if (testrank2 == 41) { rankxp = 215810; }
				if (testrank2 == 42) { rankxp = 227670; }
				if (testrank2 == 43) { rankxp = 240090; }
				if (testrank2 == 44) { rankxp = 252870; }
				if (testrank2 == 45) { rankxp = 266010; }
				if (testrank2 == 46) { rankxp = 279510; }
				if (testrank2 == 47) { rankxp = 293370; }
				if (testrank2 == 48) { rankxp = 307590; }
				if (testrank2 == 49) { rankxp = 322170; }
				if (testrank2 == 50) { rankxp = 337110; }
				WAIT(1000);
				SetStatArrayValue(487, rankxp);
				SetGlobalPrestige(prerank);
				WAIT(2000);
				int prestige = GetGlobalPrestige();
				int level = testrank2 + (prestige * 50);
				UNK_0x50C18480("Rank", level);
				UNK_0xF2FA1DE8("MpLevel", TO_FLOAT(level), true);
			}
			if (PedWepz == 17)
			{
				if (statset == 0) { SetStats(0, 1000); }
				if (statset == 1) { SetStats(2000, 9000); }
				if (statset == 2) { SetStats(12000, 60000); }
				if (statset == 3) { SetStats(10000000, 20000000); }
				if (statset == 4) { SetStats(2147483647, 2147483647); }
				print2("<green>Stats Have Been Set", 4000);
			}
			if (PedWepz == 18)
			{
				if (Cscript == 0) { drsa = 1; LaunchDRS(DRS1); drsa = 0; }
				if (Cscript == 1) { drsa = 2; LaunchDRS(DRS2); drsa = 0; }
				if (Cscript == 2) { drsa = 3; LaunchDRS(DRS3); drsa = 0; }
				if (Cscript == 3) { drsa = 4; LaunchDRS(DRS4); drsa = 0; }
				if (Cscript == 4) { drsa = 5; LaunchDRS(DRS5); drsa = 0; }
				if (Cscript == 5) { drsa = 6; LaunchDRS(DRS6); drsa = 0; }
				if (Cscript == 6) { drsa = 7; LaunchDRS(DRS7); drsa = 0; }
				if (Cscript == 7) { drsa = 8; LaunchDRS(DRS8); drsa = 0; }
				if (Cscript == 8) { drsa = 9; LaunchDRS(DRS9); drsa = 0; }
				if (Cscript == 9) { drsa = 10; LaunchDRS(DRS10); drsa = 0; }
			}
			if (PedWepz == 19)
			{
				if (QModel == 0) { print2("This model only has super run if required files \nwere replaced in your rpf", 5000); ChangeModel(self, 61); }
				if (QModel == 1) { ChangeModel(self, 1222); }
				if (QModel == 2) { ChangeModel(self, 638); }
				if (QModel == 3) { ChangeModel(self, 786); }
				if (QModel == 4) { ChangeModel(self, 620); }
				if (QModel == 5) { ChangeModel(self, 604); }
				if (QModel == 6) { ChangeModel(self, 619); }
				if (QModel == 7) { ChangeModel(self, 630); }
				if (QModel == 8) { ChangeModel(self, 349); }
				if (QModel == 9) { ChangeModel(self, 118); }
			}
			if (PedWepz == 20)
			{
				if (selectorz == 0)
				{
					if (zombi == 0) { SpawnItzPedz(1222, 1222); }
					if (zombi == 1) { SpawnItzPedz(1214, 1214); }
					if (zombi == 2) { SpawnItzPedz(1204, 1204); }
					if (zombi == 3) { SpawnItzPedz(542, 542); }
					if (zombi == 4) { SpawnItzPedz(543, 543); }
					if (zombi == 5) { SpawnItzPedz(1252, 1252); }
					if (zombi == 6) { SpawnItzPedz(1253, 1253); }
					if (zombi == 7) { SpawnItzPedz(1254, 1254); }
				}
				if (selectorz == 1)
				{
					if (workz == 0) { SpawnItzPedz(80, 80); }
					if (workz == 1) { SpawnItzPedz(81, 81); }
					if (workz == 2) { SpawnItzPedz(86, 86); }
					if (workz == 3) { SpawnItzPedz(93, 93); }
					if (workz == 4) { SpawnItzPedz(96, 96); }
					if (workz == 5) { SpawnItzPedz(64, 64); }
					if (workz == 6) { SpawnItzPedz(180, 180); }
					if (workz == 7) { SpawnItzPedz(108, 108); }
				}
				if (selectorz == 2)
				{
					if (gangz == 0) { SpawnItzPedz(476, 476); }
					if (gangz == 1) { SpawnItzPedz(485, 485); }
					if (gangz == 2) { SpawnItzPedz(495, 495); }
					if (gangz == 3) { SpawnItzPedz(504, 504); }
					if (gangz == 4) { SpawnItzPedz(512, 512); }
					if (gangz == 5) { SpawnItzPedz(529, 529); }
					if (gangz == 6) { SpawnItzPedz(539, 539); }
				}
				if (selectorz == 3)
				{
					if (lawz == 0) { SpawnItzPedz(424, 424); }
					if (lawz == 1) { SpawnItzPedz(426, 426); }
					if (lawz == 2) { SpawnItzPedz(439, 439); }
					if (lawz == 3) { SpawnItzPedz(450, 450); }
					if (lawz == 4) { SpawnItzPedz(453, 453); }
					if (lawz == 5) { SpawnItzPedz(455, 455); }
					if (lawz == 6) { SpawnItzPedz(463, 463); }
					if (lawz == 7) { SpawnItzPedz(184, 184); }
				}
				if (selectorz == 4)
				{
					if (prostz == 0) { SpawnItzPedz(66, 66); }
					if (prostz == 1) { SpawnItzPedz(69, 69); }
					if (prostz == 2) { SpawnItzPedz(72, 72); }
					if (prostz == 3) { SpawnItzPedz(691, 691); }
					if (prostz == 4) { SpawnItzPedz(692, 692); }
					if (prostz == 5) { SpawnItzPedz(696, 696); }
					if (prostz == 6) { SpawnItzPedz(695, 695); }
				}
				if (selectorz == 5)
				{
					if (animalzz == 0) { SpawnItzPedz(1102, 1102); }
					if (animalzz == 1) { SpawnItzPedz(1047, 1047); }
					if (animalzz == 2) { SpawnItzPedz(1247, 1247); }
					if (animalzz == 3) { SpawnItzPedz(1244, 1244); }
					if (animalzz == 4) { SpawnItzPedz(1072, 1072); }
					if (animalzz == 5) { SpawnItzPedz(1116, 1116); }
					if (animalzz == 6) { SpawnItzPedz(1058, 1058); }
				}
				if (selectorz == 6)
				{
					if (miscz == 0) { SpawnItzPedz(786, 786); }
					if (miscz == 1) { SpawnItzPedz(118, 118); }
					if (miscz == 2) { SpawnItzPedz(349, 349); }
					if (miscz == 3) { SpawnItzPedz(638, 638); }
					if (miscz == 4) { SpawnItzPedz(189, 189); }
					if (miscz == 5) { SpawnItzPedz(61, 61); }
					if (miscz == 6) { SpawnItzPedz(630, 630); }
				}
			}
			if (PedWepz == 21)
			{
				if (GET_ACTOR_ENUM(self) == 0 || GET_ACTOR_ENUM(self) == 1)
				{
					UNK_0x7AB17813(self, jtest1);
					WAIT(1000);
					_NET_VISIBILITY(self, 0);
					WAIT(1000);
					_NET_VISIBILITY(self, 3);
				}
				else
				{
					print2("Sorry In Order To Use Outfits You Must Be Player Model ID 0 or 1", 4000);
				}
			}
			if (PedWepz == 22)
			{
				if (opcol1 == 0) { SetStatArrayValue(351, 200); }
				if (opcol1 == 1) { SetStatArrayValue(351, 300); }
				if (opcol1 == 2) { SetStatArrayValue(351, 400); }
				if (opcol1 == 3) { SetStatArrayValue(351, 500); }
				if (opcol1 == 4) { SetStatArrayValue(351, 600); }
				if (opcol1 == 5) { SetStatArrayValue(351, 700); }
				if (opcol1 == 6) { SetStatArrayValue(351, 800); }
				if (opcol1 == 7) { SetStatArrayValue(351, 1000); }
				if (opcol1 == 8) { SetStatArrayValue(351, 1100); }
				if (opcol1 == 9) { SetStatArrayValue(351, 1200); }
				if (opcol2 == 0) { SetStatArrayValue(352, 200); }
				if (opcol2 == 1) { SetStatArrayValue(352, 300); }
				if (opcol2 == 2) { SetStatArrayValue(352, 400); }
				if (opcol2 == 3) { SetStatArrayValue(352, 500); }
				if (opcol2 == 4) { SetStatArrayValue(352, 600); }
				if (opcol2 == 5) { SetStatArrayValue(352, 700); }
				if (opcol2 == 6) { SetStatArrayValue(352, 800); }
				if (opcol2 == 7) { SetStatArrayValue(352, 1000); }
				if (opcol2 == 8) { SetStatArrayValue(352, 1100); }
				if (opcol3 == 0) { SetStatArrayValue(353, 200); }
				if (opcol3 == 1) { SetStatArrayValue(353, 300); }
				if (opcol3 == 2) { SetStatArrayValue(353, 400); }
				if (opcol3 == 3) { SetStatArrayValue(353, 500); }
				if (opcol3 == 4) { SetStatArrayValue(353, 600); }
				if (opcol3 == 5) { SetStatArrayValue(353, 700); }
				if (opcol3 == 6) { SetStatArrayValue(353, 800); }
				if (opcol3 == 7) { SetStatArrayValue(353, 1000); }
				if (opcol3 == 8) { SetStatArrayValue(353, 1100); }
				print2("Menu Color Options Set, Save The Game To Fully Save Menu Colors Forever", 4000);
			}
			if (PedWepz == 23)
			{
				SpawnItzPedz(pedname, pedname);
				for (int i = 0; i <= 9; i++)
				{
					SET_OBJECT_ORIENTATION(SpawnPed[i], 0, 0, 0);
				}
			}
			if (PedWepz == 24)
			{
				ChangeModel(self, modelname);
			}
			if (PedWepz == 25)
			{
				SET_TIME_OF_DAY(MAKE_TIME_OF_DAY(todg, 0, 0));
			}
			if (PedWepz == 26)
			{
				if (wepspawn != 26 && wepspawn != 27 && wepspawn != 28)
				{
					ACTOR_HOLSTER_WEAPON(self, wepspawn);
					UNK_0xBFD6D55F(self, wepspawn);
					testcus.x = 0.0f; testcus.y = 0.0f; testcus.z = 0.0f;
					int wepzcus[50];
					REMOVE_ALL_PICKUPS(); REMOVE_ALL_PICKUPS();
					GET_POSITION(self, &lasit);
					float heading = GET_HEADING(self);
					float dist1 = 5.0;
					float a = dist1 * SIN(heading);
					float b = dist1 * COS(heading);
					lasit.x -= a; lasit.z -= b; lasit.y += 1.5;
					for (int i = 0; i <= 3; i++)
					{
						wepzcus[i] = CREATE_WEAPON_PICKUP(FIND_NAMED_LAYOUT("playerlayout"), wepspawn, &lasit, TO_FLOAT(1), TO_FLOAT(1), 1, TO_FLOAT(1));
						ACTIVATE_PHYSINST(wepzcus[i]);
						SET_PROP_VELOCITY(wepzcus[i], &testcus);
						WAIT(500);
					}
				}
				if (wepspawn == 32)
				{
					_REMOVE_WEAPONS(self); GIVE_WEAPON_TO_ACTOR(self, 32, 0, 0, 0);
				}
				if (wepspawn == 37)
				{
					_REMOVE_WEAPONS(self); GIVE_WEAPON_TO_ACTOR(self, 37, 0, 0, 0);
				}
				if (value == 30 || value == 32 || value == 37) { ACTOR_HOLSTER_WEAPON(self, value); TASK_DRAW_HOLSTER_WEAPON(self, 1); }
			}
		}
		if (GetButton(BUTTON_B))
		{
			PedWepz = 0;
			test123 = 0;
			ToggleSpoof13 = false;
			DisplayMenu();
		}
	}
}
void GIVE_ITEMS()
{
	for (int items = 0; items <= 100; items++)
	{
		ADD_ITEM(SS_GET_STRING(1, items), self, 1);
	}
}
void GIVE_UNDEADPRO()
{
	char* collectables[49] = { "sn_z_t", "sn_z_e", "sn_z_to", "sn_z_r", "sn_z_ea", "sn_zb_t", "sn_zb_e", "sn_zb_c", "sn_zb_h", "sn_zc_t", "sn_zc_e", "sn_zc_c", "sn_zc_h", "sn_zy_t", "sn_zy_e", "sn_zy_c", "sn_zy_h", "sn_zw_t", "sn_zw_e", "sn_zw_c", "sn_zw_h", "sn_zh_e", "sn_zh_h", "sn_zchT", "sn_zchE", "sn_zchC", "sn_zchH", "sn_zsqT", "sn_zsqE", "sn_zsqH", "sn_zunH", "sn_zunR", "sn_zbat", "sn_zd_t", "sn_zd_e", "sn_zbuH", "sn_zbuE", "sn_zboT", "sn_zboE", "sn_h_bw", "sn_h_ds", "sn_h_gc", "sn_h_hs", "sn_h_pp", "sn_h_po", "sn_h_rs", "sn_h_vs", "sn_h_wf", "sn_h_wo" };
	for (int i = 0; i < (sizeof(collectables) / sizeof(collectables[0])) - 1; i++)
	{
		ADD_COLLECTABLE(collectables[i], self, 0);
	}
}
unsafe vector3 GetWaypointPos()
{
	__push(3);
	__getGlobalP(28210);
	__addImm(24);
	__toStack();
	return __popV();
}
unsafe void BountyINC()
{
	__getGlobalP(26361);
	__getImm(8);
	__getGlobalP(26401);
	__getArray(1);
	__push(500);
	__add();
	__getGlobalP(26361);
	__getImm(8);
	__getGlobalP(26401);
	__setArray(1);
	__getGlobalP(26361);
	__getImm(8);
	__getGlobalP(26401);
	__addImm(2220);
	__getArray(1);
	__getGlobalP(34581);
	__getArray(1);
	__push(500);
	__callNative(0x67116627, 1, 1);
	__addF();
	__getGlobalP(26361);
	__getImm(8);
	__getGlobalP(26401);
	__addImm(2220);
	__getArray(1);
	__getGlobalP(34581);
	__setArray(1);
	__push(222);
	__getGlobalP(34581);
	__getArray(1);
	__push(500);//
	__callNative(0x67116627, 1, 1);
	__addF();
	__push(222);
	__getGlobalP(34581);
	__setArray(1);
}
void SlotRap(int Pointer, int SlotType, int RapidType, int RapidType2)
{
	int a = *(int*)Pointer;
	int *b = (int*)a;
	for (int i = 0; i <= 31; i++)
	{
		int BaseWeaponType = (b[i] + 0x10);
		int P = *(int*)(BaseWeaponType)+12;
		int R = *(int*)(BaseWeaponType)+1159;
		short *SlotID = (short*)P;
		short *Rapid = (short*)R;
		if (i == 29 || i == 30 || i == 31)
		{
			*(short*)SlotID = SlotType;
		}
		if (cusweps)
		{
			if (i != 0 && i != 3)
			{
				*(short*)Rapid = RapidType;
			}
		}
		if (!cusweps)
		{
			*(short*)Rapid = RapidType2;
			if (i == 14)
			{
				*(short*)Rapid = RapidType;
			}
		}
	}
}
void WepEn()
{
	cusweps = !cusweps;
	if (GET_GAME_EDITION() == 10 && (cusweps)) { SlotRap(0x8307DCF8, 6, 255, 0); }
	if (GET_GAME_EDITION() == 10 && (!cusweps)) { SlotRap(0x8307DCF8, 1, 63, 61); }
	if (cusweps) { CannonGun = 1; print2("<green>ModWeps Enabled - [Gatling, Browning, Cannon + Rapid Tap Fire</green> \n <purple>Best With a Modded Controller + Inf Ammo/No Reload On", 11000); }
	if (!cusweps) { CannonGun = 0; print2("<red>ModWeps Disabled, However Rapid Tap Fire Stays On Till Full Game Reboot", 5000); }
	if (CannonGun) { CreateObject("p_gen_cannon02x"); }
	if (!CannonGun) { DESTROY_OBJECT(WTFCAN); }
}
void TeleportWaypoint()
{
	GET_POSITION(self, &waypointpos1);
	positionWP = GetWaypointPos();
	if (positionWP.x != 0.0f && positionWP.y != 0.0f && positionWP.z != 0.0f) //If waypoint isn't set or have been removed
	{
		positionWP.y = 360.0f;
		TeleportActor2(self, positionWP);
		WaitForWorldToLoad(true);
		Time timer2 = _GET_CURRENT_TIME();

		while (!IS_ACTOR_ON_GROUND(self))
		{
			if (_GET_CURRENT_TIME() > (timer2 + 12.0f))
			{
				//If we don't reach the ground after all this time, means we are below the map, break and teleport to old position.
				TeleportActor2(self, waypointpos1);
				print2("Couldn't teleport to <red>waypoint</red>", 2000);
				return;
			}
			positionWP.y -= 5.0f;
			TeleportActor2(self, positionWP);
			WAIT(0);
		}
		print2("Teleported to <green>waypoint</green>", 2000);
	}
	else
		print2("You must set a <red>waypoint</red> first!", 2000);
}
void SpectatePlayerV3(int SlotID)
{
	if (specit)
	{
		if (spectest == 1)
		{
			if (!IS_SLOT_VALID(SlotID))
			{
				print2("Failed !\n<red>Invalid player</red>", 2000);
				spectest = 0;
				specit = 0;
				return;
			}
			GET_POSITION(self, &savedPos2);
			GET_SLOT_POSITION(SlotID, &ve34);
			_NET_VISIBILITY(self, 0);
			TeleportActor2(self, ve34);
			SET_PLAYER_CONTROL(0, 0, 0, 0);
			WaitForWorldToLoad(true);
			if (!IS_ACTOR_VALID(GET_SLOT_ACTOR(SlotID)))
			{
				print2("Failed to spectate player", 2000);
				_NET_VISIBILITY(self, 3);
				TeleportActor2(self, savedPos2);
				SET_PLAYER_CONTROL(0, 1, 0, 0);
				spectest = 0;
				specit = 0;
				return;
			}
			SET_CAMERA_FOLLOW_ACTOR(GET_SLOT_ACTOR(SlotID));
			actorNowInvalid = false;
			float camX = 0.0f, camY = 0.0f, xStickRight, yStickRight;
		}
		if (!actorNowInvalid)
		{
			spectest = 0;
			print2("Press <y> to stop spectating", 1000);
			SET_CAMERA_FOLLOW_ACTOR(GET_SLOT_ACTOR(SlotID));
			if (!IS_ACTOR_VALID(GET_SLOT_ACTOR(SlotID)))
				actorNowInvalid = true;
			xStickRight = GET_STICK_X(0, 1, 0);
			yStickRight = GET_STICK_Y(0, 1, 0);
			if ((yStickRight < -0.2f) || (yStickRight > 0.2f))
				if ((yStickRight > 0.2f && (camX > -50.0f)) || (yStickRight < -0.2f && (camX < 50.0f)))
					camX += (yStickRight * -5.0f);
			if ((xStickRight > 0.2f) || (xStickRight < -0.2f))
				camY += (xStickRight * -5.0f);
			SET_CAMERA_ORIENTATION(GET_GAME_CAMERA(), camX, camY, 0.0f, 0);
		}
		if (GetButton(BUTTON_Y) || (actorNowInvalid))
		{
			print2("Player is now invalid or spectate canceled!\nResetting <green>camera and position</green>", 3000);
			SET_CAMERA_FOLLOW_ACTOR(self);
			TeleportActor2(self, savedPos2);
			_NET_VISIBILITY(self, 3);
			SET_PLAYER_CONTROL(0, 1, 0, 0);
			spectest = 0;
			specit = 0;
		}
	}
}
void VehTeleportV2(int SlotID)
{
	savedPos2 = (vector3) { 0.0f, 0.0f, 0.0f };
	vector3 ppos2, ppos3;
	ve34 = (vector3) { 0.0f, 0.0f, 0.0f };
	ppos2 = (vector3) { 0.0f, 0.0f, 0.0f };
	ppos3 = (vector3) { 0.0f, 0.0f, 0.0f };
	SET_CAMERA_FOLLOW_ACTOR(self);
	if (!IS_SLOT_VALID(SlotID))
	{
		print2("Failed! <red>Invalid player</red>", 2000);
		return;
	}
	if (!IS_ACTOR_VALID(GET_SLOT_ACTOR(SlotID)))
	{
		GET_POSITION(self, &savedPos2);
		GET_SLOT_POSITION(SlotID, &ve34);
		_NET_VISIBILITY(self, 0);
		TeleportActor2(self, ve34);
		WaitForWorldToLoad(true);
		if (IS_ACTOR_VALID(GET_SLOT_ACTOR(SlotID)))
		{
			GET_POSITION(GET_SLOT_ACTOR(SlotID), &ppos2);
		}
		if (!IS_ACTOR_VALID(GET_SLOT_ACTOR(SlotID)))
		{
			GET_SLOT_POSITION(SlotID, &ppos2);
		}
		TeleportActor2(self, ppos2);
		WaitForWorldToLoad(true);
		WAIT(2500);
		if (!IS_ACTOR_VALID(GET_SLOT_ACTOR(SlotID)))
		{
			print2("Player is dead, not valid, or failed\nTry again", 2000);
			TeleportActor2(self, savedPos2);
			_NET_VISIBILITY(self, 3);
			SET_CAMERA_FOLLOW_ACTOR(self);
			return;
		}
	}
	if (IS_ACTOR_VALID(GET_SLOT_ACTOR(SlotID)) && (!IS_ACTOR_INSIDE_VEHICLE(GET_SLOT_ACTOR(SlotID))))
	{
		print2("Player isn't in a vehicle or failed", 2000);
		if (savedPos2.x != 0.0f && savedPos2.y != 0.0f && savedPos2.z != 0.0f)
		{
			TeleportActor2(self, savedPos2);
			_NET_VISIBILITY(self, 3);
			SET_CAMERA_FOLLOW_ACTOR(self);
		}
		return;
	}
	for (int seat = 1; seat <= _GET_MAX_SEATS_IN_VEHICLE(GET_VEHICLE(GET_SLOT_ACTOR(SlotID))); seat++)
	{
		if (IS_SEAT_OCCUPIED(GET_VEHICLE(GET_SLOT_ACTOR(SlotID)), seat)) continue;
		TASK_VEHICLE_LEAVE(self);
		WAIT(100);
		RESET_ANIM_SET_FOR_ACTOR(self, 1);
		TASK_CLEAR(self);
		//WAIT(2500);
		_NET_VISIBILITY(self, 3);
		//WAIT(1000);
		GET_POSITION(GET_SLOT_ACTOR(SlotID), &ppos3);
		TeleportActor2(self, ppos3);
		SET_CAMERA_FOLLOW_ACTOR(GET_SLOT_ACTOR(SlotID));
		WAIT(2500);
		SET_ACTOR_IN_VEHICLE(self, GET_VEHICLE(GET_SLOT_ACTOR(SlotID)), seat);
		SET_CAMERA_FOLLOW_ACTOR(self);
		print2("Entered Vehicle", 2000);
		return;
	}
	print2("Player's vehicle is currently inacessible", 3000);
	SET_CAMERA_FOLLOW_ACTOR(self);
}
void SetMountHorse()
{
	if (IS_ACTOR_RIDING(self) && CurrentMount >= 976 && CurrentMount <= 1014 || IS_ACTOR_RIDING(self) && CurrentMount >= 1248 && CurrentMount <= 1251 || IS_ACTOR_RIDING(self) && CurrentMount >= 1267 && CurrentMount <= 1271)
	{
		setGlobalAtIndex(13038, CurrentMount);
		SetStatArrayValue(162, CurrentMount);
		print2("<green>Current Mount Saved\n<blue>This Saves To Your Gamesave(Doesn't Overwrite Outfitter Mount/Does Overwrite SP Mount)\n<orange>You must save now.", 15000);
	}
	else
		print2("<red>Failed</red>: Not On a Mount or Incompatible Mount", 4000);
}
unsafe void SetGoldWeapon(int weapon)
{
	__push(1);
	__getFrame(0);
	__getGlobalP(83823);
	__setArray(1);
}
void UnlockGoldGuns()
{
	print2("All Gold Guns Unlocked Including Lasso, Explosive Rifle, Bait, Blunderbuss, and Invisible Holywater \nMust use give all weps to give yourself lasso in mp\n and for undead weapons in undead overun", 7000);
	for (int weapon = 0; weapon <= 37; weapon++)
	{
		if (weapon != 26 && weapon != 27 && weapon != 28 && weapon != 30 && weapon != 32)
		{
			SetGoldWeapon(weapon);
			SET_WEAPON_GOLD(self, weapon, 1);
		}
	}
}
void ModdedMount()
{
	if (horsetest == 0) { strcpy((char*)getGlobalPtrAtIndex(76870), UNK_0x990614C1(999), 64); print2("Mount Set To Dead Horse", 2000); horsetest = 1; }
	else if (horsetest == 1) { strcpy((char*)getGlobalPtrAtIndex(76870), UNK_0x990614C1(993), 64); print2("Mount Set To Dark Horse", 2000); horsetest = 2; }
	else if (horsetest == 2) { strcpy((char*)getGlobalPtrAtIndex(76870), UNK_0x990614C1(994), 64); print2("Mount Set To Male Horse", 2000); horsetest = 3; }
	else if (horsetest == 3) { strcpy((char*)getGlobalPtrAtIndex(76870), UNK_0x990614C1(992), 64); print2("Mount Set To War Horse", 2000); horsetest = 4; }
	else if (horsetest == 4) { strcpy((char*)getGlobalPtrAtIndex(76870), UNK_0x990614C1(995), 64); print2("Mount Set To No Saddle Horse", 2000); horsetest = 0; }
}
void ModdedTitle()
{
	if (modtit == 0) { setGlobalAtIndex(76886, 1038); print2("Title Set To Immune Lawbringer(ps3 exclusive works on xbox)", 5000); modtit = 1; }
	else if (modtit == 1) { setGlobalAtIndex(76886, 1062); print2("Title Set To Dirty Justice(ps3 exclusive works on xbox)", 5000); modtit = 2; }
	else if (modtit == 2) { setGlobalAtIndex(76886, 1064); print2("Title Set To Untouchable Gunslinger(ps3 exclusive works on xbox)", 5000); modtit = 3; }
	else if (modtit == 3) { setGlobalAtIndex(76886, 1068); print2("Title Set To Half-A-Baby(ps3 exclusive works on xbox)", 5000); modtit = 4; }
	else if (modtit == 4) { setGlobalAtIndex(76886, 4009); print2("Title Set To Tumbleweed(unused title)", 5000); modtit = 5; }
	else if (modtit == 5) { setGlobalAtIndex(76886, 4010); print2("Title Set To Speedy(unused title)", 5000); modtit = 0; }
}
void TPMe(int SlotID)//
{
	vector3 mounttp;
	int mountobjlol = GET_MOUNT(GET_SLOT_ACTOR(SlotID));
	int mountobjveh = GET_VEHICLE(GET_SLOT_ACTOR(SlotID));
	if (!freecam || !specit){GET_POSITION(self, &mounttp);}
	if (freecam){GET_CAMERA_POSITION(camera, &mounttp);}
	if (specit){GET_CAMERA_POSITION(GET_GAME_CAMERA(), &mounttp);}
	if (IS_ACTOR_VALID(mountobjlol))
	{
		if (IS_ACTOR_MOUNTED(mountobjlol))
		{
			mount_obj = UNK_0x4A2063EC(mountobjlol);//request object from actor
			NET_REQUEST_OBJECT(mount_obj);
			SET_OBJECT_POSITION(mount_obj, mounttp);
		}
	}
	if (IS_ACTOR_VALID(mountobjveh))
	{
		if (IS_ACTOR_INSIDE_VEHICLE(GET_SLOT_ACTOR(SlotID)))
		{
			mount_objveh = UNK_0x4A2063EC(mountobjveh);//request object from actor
			NET_REQUEST_OBJECT(mount_objveh);
			SET_OBJECT_POSITION(mount_objveh, mounttp);
		}
	}
}
void SET_BIT(int* n, int k)
{
	*n |= 1 << k;
}
//egg npcs
int Checkpoint1NPC;
int Checkpoint2NPC;
int Checkpoint3NPC;
int DutchFirstTalk = 0;
int SpawnNPC1 = 0;
int SpawnNPC2 = 0;
int SpawnNPC3 = 0;
//
void Looped_Functions()
{
	if (IS_ACTOR_RIDING(self))//Horse FX Modifiers, best I could do
	{
		int HorseAttackTarget = GET_LAST_ATTACK_TARGET(self);
		if (IS_OBJECT_VALID(war2))
		{
			if (HorseAttackTarget != self && !IS_ACTOR_PLAYER(HorseAttackTarget))
			{
				int ourFire2 = FIRE_CREATE_HANDLE();
				UNK_0x9679CF84(ourFire2, HorseAttackTarget);
				UNK_0x3D5D3B26(ourFire2, 1);
				FIRE_RELEASE_HANDLE(ourFire2, HorseAttackTarget);
			}
		}
		if (IS_OBJECT_VALID(deafx2))
		{
			if (HorseAttackTarget != self && !IS_ACTOR_PLAYER(HorseAttackTarget))
			{
				KILL_ACTOR(HorseAttackTarget);
			}
		}
	}
	DefautSavedModel = GetStatArrayValue(161);
	SavedMount = GetStatArrayValue(162);
	SET_ACTOR_RIDEABLE(GET_ACTORS_HORSE(self), 1);//make sure our mount is always rideable at all times!
	if (SavedMountON)
	{
		setGlobalAtIndex(13038, SavedMount);
	}
	if (specit)
	{
		SpectatePlayerV3(NetSlotId);
	}
	if (freecam)
	{
		if (freetest == 1)
		{
			camera = CREATE_CAMERA_IN_LAYOUT(GET_AMBIENT_LAYOUT(), "", 0);
			INIT_CAMERA_FROM_GAME_CAMERA(camera);
			SET_CURRENT_CAMERA_ON_CHANNEL(camera, 0, 0, 0, 0, 0, 0, 0, 0, 0);
		}
		if (freecam)
		{
			freetest = 0;
			vector3 flycr;
			float heading = GET_HEADING(self);
			float a = 1.0 * SIN(heading);
			float b = 1.0 * COS(heading);
			flycr.x -= a;
			flycr.z -= b;
			vector3 CamRotation2 = GetGameCameraRotation();
			float Heading = CamRotation2.z;
			print2("Press <LB> to stop the <green>free camera!</green> \n Press <y> to teleport to <orange>cam position</orange>", 1000);
			SET_PLAYER_CONTROL(0, 0, 0, 0);
			xStickLeft = GET_STICK_X(0, 0, 0);
			yStickLeft = GET_STICK_Y(0, 0, 0);
			xStickRight = GET_STICK_X(0, 1, 0);
			yStickRight = GET_STICK_Y(0, 1, 0);
			GET_CAMERA_POSITION(camera, &positionFC);
			GET_CAMERA_DIRECTION(camera, &camDirection);
			if (yStickLeft < -0.2f)
			{
				positionFC.x = (positionFC.x + (camDirection.x * yStickLeft));
				positionFC.y = (positionFC.y + (camDirection.y * yStickLeft));
				positionFC.z = (positionFC.z + (camDirection.z * yStickLeft));
			}
			if (yStickLeft > 0.2f)
			{
				positionFC.x = (positionFC.x + (camDirection.x * yStickLeft));
				positionFC.y = (positionFC.y + (camDirection.y * yStickLeft));
				positionFC.z = (positionFC.z + (camDirection.z * yStickLeft));
			}
			if (xStickLeft < -0.2f)
			{
				positionFC.x = (positionFC.x + (COS_DEGREE(camY) * xStickLeft));
				positionFC.z = (positionFC.z + (SIN_DEGREE((camY - 180.0f)) * xStickLeft));
			}
			if (xStickLeft > 0.2f)
			{
				positionFC.x = (positionFC.x - (COS_DEGREE((camY - 180.0f)) * xStickLeft));
				positionFC.z = (positionFC.z - (SIN_DEGREE(camY) * xStickLeft));
			}
			if ((yStickRight < -0.2f) || (yStickRight > 0.2f))
				if ((yStickRight > 0.2f && (camX > -50.0f)) || (yStickRight < -0.2f && (camX < 50.0f))) //Y Axis security
					camX += (yStickRight * -5.0f);
			if ((xStickRight > 0.2f) || (xStickRight < -0.2f))
				camY += (xStickRight * -5.0f);
			SET_CAMERA_POSITION(camera, positionFC.x, positionFC.y, positionFC.z);
			SET_CAMERA_ORIENTATION(camera, camX, camY, 0.0f, 0);
			if (GetButton(BUTTON_Y))
			{
				TeleportActor2(self, positionFC);
			}
			if (IS_ACTOR_DRIVING_VEHICLE(self)) { TELEPORT_ACTOR_WITH_HEADING(GET_VEHICLE(self), positionFC, CamRotation2.z, 1, 1, 1); }
			if (IS_ACTOR_RIDING(self)) { TELEPORT_ACTOR_WITH_HEADING(GET_MOUNT(self), positionFC, CamRotation2.z, 1, 1, 1); }
		}
		if (GetButton(BUTTON_LB))
		{
			REMOVE_CAMERA_FROM_CHANNEL(camera, 0);
			DESTROY_CAMERA(camera);
			CAMERA_RESET(0);
			SET_PLAYER_CONTROL(0, 1, 0, 0);
			SET_CAMERA_FOLLOW_ACTOR(self);
			freecam = 0;
		}
	}
	if (NoWanted)//joshes original method, undid demonic rev method
	{
		ClearBountyStat();
		if (getGlobalAtIndex(3403) != 0)
		{
			setGlobalAtIndex(3403, 0);
			setGlobalAtIndex(3405, 0);
			if (IS_FACTION_VALID(getGlobalAtIndex(26361)))
			{
				UNK_0x4C28B11E(getGlobalAtIndex(26361), 2, 2);
			}
			UNK_0x4C28B11E(8, 2, 2);
			UNK_0x4C28B11E(10, 2, 2);
			int* ptr = getGlobalPtrAtIndex(26316);
			int script1 = *(ptr + 60 * 4);
			int script2 = *(ptr + 64 * 4);
			if (IS_SCRIPT_VALID(script1))
			{
				TERMINATE_SCRIPT(script1);
			}
			if (IS_SCRIPT_VALID(script2))
			{
				TERMINATE_SCRIPT(script2);
			}
			setGlobalAtIndex(13111, -1);
		}
		RELEASE_LAYOUT_OBJECTS(getGlobalAtIndex(26314));
		int* ptr = getGlobalPtrAtIndex(26316);
		int script1 = *(ptr + 60 * 4);
		if (IS_SCRIPT_VALID(script1))
		{
			TERMINATE_SCRIPT(script1);
		}
	}
	MainLRSwitches();
	if (CannonGun)
	{
		vector3 CanPos;
		GET_POSITION(self, &CanPos);
		CanPos.y = -25;
		SET_OBJECT_POSITION(WTFCAN, CanPos);
		SET_OBJECT_ORIENTATION(WTFCAN, 0, 0, 0);
		_NET_VISIBILITY(WTFCAN, 0);
	}
	if (aimbott)//more so a Aim Killbot, rather than aimbot bleh w.e
	{
		vector3 headpos;
		GET_OBJECT_NAMED_BONE_POSITION(_GET_ACTOR_IN_RETICLE(self, 1), "head", &headpos);
		if (GetButtonDown(BUTTON_LT))
		{
			if (IS_ACTOR_VALID(_GET_ACTOR_IN_RETICLE(self, 1)))
			{
				FIRE_PROJECTILE(self, PROJECTILE_BASE_SNIPERRIFLE, 3, &headpos, &headpos);
			}
		}
	}
	AutoBoolsOff();
	NetworkPlayerMods();
	AIOBools();
}