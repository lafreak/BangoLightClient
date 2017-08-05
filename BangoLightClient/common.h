#ifndef _COMMON_
#define _COMMON_

#pragma once

#ifndef WIN32
#define SOCKET void*
#include <inttypes.h>
#include "minwindef.h"
#define __stdcall
#endif


static __int64 g_nNeedExp[] = {
	0, 5, 24, 60, 160,
		328, 542, 814, 1157, 1588,
		2250, 3086, 4135, 5444, 7068,
		9126, 11660, 14769, 18572, 23214,
		29155, 36409, 45245, 55988, 69026, 
		85569, 105656, 130009, 159494, 195150, 
		238225, 290216, 352918, 428488, 519513, 
		629149, 761081, 919784, 1110624, 1340045, 
		1615778, 1947099, 2345141, 2823265, 3397501, 
		4087087, 4915108, 5909267, 7102808, 8535623, 
		10255633, 12320243, 14798389, 17772795, 21342730, 
		25627317, 30769501, 36940820, 44347118, 53235407, 
		63902104, 76702906, 92064653, 110499551, 132622249, 
		159170373, 191028978, 229260177, 275138508, 330193415, 
		// 바뀜
		396260232,	1188853398,	1426699190,	1712116603,	2054620005, 
		2465626643 ,2958837208 ,3550692535 ,4260921625 ,5113199283 ,
		6135935388 ,7363221560 ,8835967855 ,10603266353 ,12724027540 ,
		15268944005 ,18322846853 ,21987533410 ,26385160468 ,31662316180 ,
		37994906328 ,45594017848 ,54712955065 ,65655683173 ,78786960398 ,
		94544496618 ,113453543683 ,136144403815 ,163373439683 ,196048286480 ,
};

static BYTE g_byNeedPU[] = {
	1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
	1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
	1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
	1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
	1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
	2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
	2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
	3, 3, 3, 3, 3, 3, 3, 3, 3, 3,
	3, 3, 3, 3, 3, 3, 3, 3, 3, 3,
	4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
	4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
	5, 5, 5, 5, 5, 5, 5, 5, 5, 5,
	5, 5, 5, 5, 5, 5, 5, 5, 5, 5,
	6, 6, 6, 6, 6, 6, 6, 6, 6, 6,
	6, 6, 6, 6, 6, 6, 6, 6, 6, 6,
	7, 7, 7, 7, 7, 7, 7, 7, 7, 7,
	7, 7, 7, 7, 7, 7, 7, 7, 7, 7,
	7, 7, 7, 7, 7, 7, 7, 7, 7, 7,
	7, 7, 7, 7, 7, 7, 7, 7, 7, 7,
	7, 7, 7, 7, 7, 7, 7, 7, 7, 7,
	8, 8, 8, 8, 8, 8, 8, 8, 8, 8,
	8, 8, 8, 8, 8, 8, 8, 8, 8, 8,
	8, 8, 8, 8, 8, 8, 8, 8, 8, 8,
	8, 8, 8, 8, 8, 8, 8, 8, 8, 8,
	8, 8, 8, 8, 8, 8, 8, 8, 8, 8
};

static BYTE g_byNeedPUEx[] = {
	1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
	1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
	1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
	1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
	1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
	1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
	2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
	2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
	2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
	3, 3, 3, 3, 3, 3, 3, 3, 3, 3,
	3, 3, 3, 3, 3, 3, 3, 3, 3, 3,
	3, 3, 3, 3, 3, 3, 3, 3, 3, 3,
	4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
	4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
	4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
	5, 5, 5, 5, 5, 5, 5, 5, 5, 5,
	5, 5, 5, 5, 5, 5, 5, 5, 5, 5,
	5, 5, 5, 5, 5, 5, 5, 5, 5, 5,
	6, 6, 6, 6, 6, 6, 6, 6, 6, 6,
	6, 6, 6, 6, 6, 6, 6, 6, 6, 6,
	6, 6, 6, 6, 6, 6, 6, 6, 6, 6,
	7, 7, 7, 7, 7, 7, 7, 7, 7, 7,
	7, 7, 7, 7, 7, 7, 7, 7, 7, 7,
	7, 7, 7, 7, 7, 7, 7, 7, 7, 7,
	8, 8, 8, 8, 8, 8, 8, 8, 8, 8
};

// Stat-up
static WORD FIND_NEED_PU(WORD cur, BYTE add) {
	WORD needPU=0;
	for ( ; add > 0; add--) {
		needPU += g_byNeedPU[cur++];
	}
	return needPU;
}

static WORD FIND_NEED_PU_EX(WORD cur, BYTE add) {
	WORD needPU=0;
	for ( ; add > 0; add--) {
		needPU += g_byNeedPUEx[cur++];
	}
	return needPU;
}

static int g_denoHP[] = { 10, 14, 13, 13 };
static int g_denoMP[] = { 13, 10, 12, 12 };

// (struct) /////////////////////////////////////////////////////////
struct DATE_TIME
{
	int year;
	int month;
	int day;
	int hour;
	int minute;
	int second;
};

struct NPC_DESC
{
	WORD wIndex;
	int nShape;
	int nHtml;
	int nX, nY, nZ;
	int nDirX, nDirY;
};

struct D2S_LOADPLAYER_DESC
{
	int nAID, nPID;
	WORD wStats[5];
	WORD wCurHP, wCurMP;
	__int64 n64Exp;
	WORD wPUPoint, wSUPoint, wContribute;
	int nAnger, nX, nY, nZ;
	BYTE byLevel, byClass, byJob;
	BYTE byFace, byHair;
	const char* szName;
};

struct FUSION_DESC
{
	BYTE byLevel;
	WORD wMeele, wMagic, wDefense, wAbsorb;
	BYTE byDodge, byHit, byHP, byMP;
	BYTE byStats[5];
};

struct ITEMINFO_DESC
{
	int nIID;
	WORD wIndex;
	int nNum, nInfo;
	BYTE byPrefix, byCurEnd, byMaxEnd, byXAttack, byXMagic, byXDefense, byXHit, byXDodge, byExplosiveBlow;
	FUSION_DESC fuse;
	BYTE byShot;
	WORD wPerforation;
	int nGongLeft, nGongRight;
};

//#if defined( MAINSVR) || defined( DBSVR)

struct BASEPROPERTY
{
	int prty[5];	// Str, Hth, Int, Wis, Dex
	int nHP;
	int nMP;
};

#define GAME_HERO 0x80

static BASEPROPERTY g_baseproperty[] = {
	18, 16, 8, 8, 10, 180, 120,		// knight
		8, 10, 18, 16, 8, 170, 140,		// mage
		14, 10, 8, 10, 18, 160, 160,	// archer
		14, 10, 8, 10, 18, 160, 160,	// thief
};
//#endif

// (define) /////////////////////////////////////////////////////////
#define COUNTRY(country) (country == g_nCountry)
#define COUNTRYMASK(mask) (mask & (1 << g_nCountry))

#define MAX_CHARACTER 5
#define MAX_PROTECT 30
#define MAX_NUM 0x7fffffff
#define INVALID_PROPERTY 0xffffffff
#define MAX_INVENTORY 60
#define MAX_INVENTORYEX 72
#define MAX_STORAGE 100
#define CLASS_NUM 3
#define BOOSTDECMP 6
#define MAX_BULLETININFO 20
#define NULL_CHECK( value) if( value == 0) return
#define MAX_BUY_ITEM_EACH	9999

// Length
#define LEN_ID				16
#define LEN_PWD				16
#define LEN_NMID			16
#define LEN_NMPWD			8
#define LEN_ACCOUNT			16
#define LEN_NAME			24
#define LEN_PLAYERNAME		20
#define LEN_GUILDNAME		16
#define LEN_NEWPLAYERNAME	14
#define LEN_NEWGUILDNAME	14
#define LEN_RANKNAME		14
#define LEN_ITEMNAME		30
#define LEN_FILENAME		20
#define LEN_PATH			128
#define LEN_CHATTING		128
#define LEN_MYTELPTNAME		20
#define LEN_GUILDNOTICE		180
#define LEN_MLMNOTICE		180
#define LEN_STALLTITLE		64

#define MAX_SHORTCUT		40
#define MAX_FRD				30

#define MAIL_MAX			100
#define MAIL_MAX_LEN		512
#define MAIL_MAX_LOAD		50
#define MAIL_COST_GENERAL	5
#define MAIL_COST_PARCEL	100

// Map
#define MAP_NONE			0x00000000
#define MAP_FIELD			0x00000001
#define MAP_DUNGEON			0x00000002

// NPC General State
#define NGS_ONMIRROR		0x00000001
#define NGS_ONMIRROREX		0x00000002
#define NGS_THRONEEFFECT1	0x00000004
#define NGS_THRONEEFFECT2	0x00000008
#define NGS_OPENDOOR		0x00000010	//시나리오2 문 열리면 ON
#define NGS_SIEGEGUNSET		0x00000020	//공성병기 설치됨
#define NGS_SIEGEGUNUSED	0x00000040	//공성병기 설치중


// Character General State
#define CGS_KNEE				0x00000001
#define CGS_KO					0x00000002
#define CGS_REST				0x00000004
#define CGS_ONREVIVAL			0x00000008
#define CGS_ONSTALL				0x00000010
#define CGS_FISH				0x00000020
#define CGS_COOKING				0x00000040
#define CGS_ONPVP				0x00000080
#define CGS_ONPK				0x00000100
#define CGS_ONTRANSFORM			0x00000200
#define CGS_WAR_UNFURLSTANDARD	0x00000400
#define CGS_PKSTATEOPEN			0x00000800
#define CGS_ONPORTAL			0x00001000
#define CGS_INVINCIBLE			0x00002000
#define CGS_PREASCENSION		0x00004000
#define CGS_OPENBOX				0x00008000
#define CGS_ASCENSION			0x00010000
#define CGS_LORDDECLARE			0x00020000
#define CGS_PET_FALCON 			0x00040000	// PET 매
#define CGS_PET_OWL 			0x00080000	// PET 부엉이
#define CGS_PET_CROW 			0x00100000	// PET 까마귀
#define CGS_SIEGEGUNCONTROL		0x00040000	// 공성병기가 조정중일때
#define CGS_SIEGEGUNDIE			0x00080000	// 공성 병기가 해체되는 상태

#define CGS_DARK				0x00100000	// 암흑석	// 조합시스템
#define CGS_SAINT				0x00200000	// 신성석
#define CGS_FLAME				0x00400000	// 화염석
#define CGS_ICE					0x00800000	// 빙염석
#define CGS_LIGHT				0x01000000	// 낙뢰석
#define CGS_POISON				0x02000000	// 독운석
#define CGS_PARAL				0x04000000	// 마비석
#define CGS_POWER				0x08000000	// 기운석
#define CGS_TECH				0x10000000	// 기술석
#define CGS_FANTA				0x20000000	// 신비석
#define CGS_BLOOD				0x40000000	// 혈마석
#define CGS_MIX_LEVEL2			0x80000000	// 업글2단계

#define CGS_MIX_HALFSETDEF_46  __int64(0x00000001) << 32	// 화주 하프셋트 46방어구
#define CGS_MIX_FULLSETDEF_46  __int64(0x00000002) << 32	// 화주 플펫트
#define CGS_MIX_HALFSETDEF_50  __int64(0x00000004) << 32	// 화주 하프셋트 50방어구
#define CGS_MIX_FULLSETDEF_50  __int64(0x00000008) << 32	// 화주 플펫트
#define CGS_MIX_HALFSETDEF_55  __int64(0x00000010) << 32	// 화주 하프셋트 55방어구
#define CGS_MIX_FULLSETDEF_55  __int64(0x00000020) << 32	// 화주 플펫트
#define CGS_MIX_HALFSETDEF_60  __int64(0x00000040) << 32	// 화주 하프셋트 60방어구
#define CGS_MIX_FULLSETDEF_60  __int64(0x00000080) << 32	// 화주 플펫트

#define CGS_EVENT_HALLOWEEN_GHOST_1		 __int64(0x00000100) << 32	// 할로윈 이벤트. 유령
#define CGS_EVENT_HALLOWEEN_GHOST_2		 __int64(0x00000200) << 32	// 할로윈 이벤트. 유령
#define CGS_EVENT_HALLOWEEN_GHOST_3		 __int64(0x00000400) << 32	// 할로윈 이벤트. 유령
#define CGS_EVENT_HALLOWEEN_WITCH_1		 __int64(0x00000800) << 32	// 할로윈 이벤트. 마녀
#define CGS_EVENT_HALLOWEEN_WITCH_2		 __int64(0x00001000) << 32	// 할로윈 이벤트. 마녀
#define CGS_EVENT_HALLOWEEN_WITCH_3		 __int64(0x00002000) << 32	// 할로윈 이벤트. 마녀
#define CGS_EVENT_HALLOWEEN_PUMPKIN_1    __int64(0x00004000) << 32	// 할로윈 이벤트. 호박
#define CGS_EVENT_HALLOWEEN_PUMPKIN_2    __int64(0x00008000) << 32	// 할로윈 이벤트. 호박
#define CGS_EVENT_HALLOWEEN_PUMPKIN_3    __int64(0x00010000) << 32	// 할로윈 이벤트. 호박
#define CGS_EVENT_HALLOWEEN_MIX		(CGS_EVENT_HALLOWEEN_GHOST_1|CGS_EVENT_HALLOWEEN_GHOST_2|CGS_EVENT_HALLOWEEN_GHOST_3|\
									 CGS_EVENT_HALLOWEEN_WITCH_1|CGS_EVENT_HALLOWEEN_WITCH_2|CGS_EVENT_HALLOWEEN_WITCH_3|\
									 CGS_EVENT_HALLOWEEN_PUMPKIN_1|CGS_EVENT_HALLOWEEN_PUMPKIN_2|CGS_EVENT_HALLOWEEN_PUMPKIN_3)	 

#define CGS_BATTLEFIELD_RED				__int64(0x00020000) << 32	// 시나리오3 전장상태 홍팀
#define CGS_BATTLEFIELD_BLUE			__int64(0x00040000) << 32	// 시나리오3 전장상태 청팀
#define CGS_BATTLEFIELD					(CGS_BATTLEFIELD_RED | CGS_BATTLEFIELD_BLUE)	// 시나리오3 전장상태
#define CGS_TOWERBURNING_1				__int64(0x00080000) << 32	// 탑의 HP가 일정 %이하일때 불타오름
#define CGS_TOWERBURNING_2				__int64(0x00100000) << 32	// 탑의 HP가 일정 %이하일때 불타오름
#define CGS_MIX (CGS_DARK|CGS_SAINT|CGS_FLAME|CGS_ICE|CGS_LIGHT|CGS_POISON|CGS_PARAL|CGS_POWER|CGS_TECH|CGS_FANTA|CGS_BLOOD)

// CGS 추가시 추가!! 찾아보시오~
#define CGS_PRAYCASTING					__int64(0x00200000) << 32	// 기원 캐스팅 중
#define CGS_PRAY						__int64(0x00400000) << 32	// 기원 상태
#define CGS_LOADPROTECTLEADER			__int64(0x00800000) << 32	// 군주 보호 모드 석상을 클릭할수 있는 대상자를 구분하기 위한 상태



// Character Magic State
#define CMS_BOOST			0x00000001
#define CMS_MOVESPEED		0x00000002
#define CMS_STONE			0x00000004
#define CMS_MEDITATION		0x00000008
#define CMS_FATALCHANCE	    0x00000010
#define CMS_REVIVALSEQUELA	0x00000020
#define CMS_ATTACKUP		0x00000040
#define CMS_MAGICUP			0x00000080
#define CMS_STUN			0x00000100
#define CMS_MOVESTOP		0x00000200
#define CMS_HITUP			0x00000400
#define CMS_ATTACKMINUP		0x00000800
#define CMS_POISON			0x00001000
#define CMS_HASTE			0x00002000
#define CMS_PROTECT			0x00004000
#define CMS_PROTECTRANGE	0x00008000
#define CMS_MAGICSTOP		0x00010000
//#define CMS_CUTEXPHALF		0x00020000		// not used
//#define CMS_KILLEDNOCOUNT	0x00040000		// not used
#define CMS_HIDE         	0x00080000
#define CMS_HP              0x00100000
#define CMS_MP              0x00200000
#define CMS_ATTACKSPEED     0x00400000
#define CMS_HITUPPER        0x00800000
#define CMS_DAMAGEDEX       0x01000000
#define CMS_HITNICE         0x02000000
#define CMS_DODGEALL        0x04000000
#define CMS_FATALNICE       0x08000000
#define CMS_SLEEP           0x10000000
#define CMS_DEFENSEPER      0x20000000
#define CMS_CTDEFENSEPER    0x40000000
#define CMS_SUFFERING       0x80000000
#define CMS_INCHANTWEAPON   __int64(0x00000001) << 32
#define CMS_AURADEFENSE     __int64(0x00000002) << 32
#define CMS_CTHEALING       __int64(0x00000004) << 32
#define CMS_SPIRITDMG       __int64(0x00000008) << 32
#define CMS_FLAGMSPEED      __int64(0x00000010) << 32
#define CMS_FLAGATTACK      __int64(0x00000020) << 32
#define CMS_FLAGMAGIC       __int64(0x00000040) << 32
#define CMS_FLAGDEFENSE     __int64(0x00000080) << 32
#define CMS_FLAGRESIST      __int64(0x00000100) << 32
#define CMS_FLAGHP          __int64(0x00000200) << 32

#define CMS_SILENCESHOT     __int64(0x00000400) << 32
#define CMS_MANABURN        __int64(0x00000800) << 32
#define CMS_POISONCLOUD     __int64(0x00001000) << 32 
#define CMS_DESTROYSIGHT    __int64(0x00002000) << 32
#define CMS_DO_UPABSORB     __int64(0x00004000) << 32
#define CMS_DO_UPRESISTALL  __int64(0x00008000) << 32
#define CMS_HIDE_CANNON		__int64(0x00010000) << 32
#define CMS_MIX_LIGHT		__int64(0x00020000) << 32
#define CMS_MIX_ICE			__int64(0x00040000) << 32




#define CMS_HALLOWEEN_ATTACKUP		__int64(0x00080000) << 32
#define CMS_HALLOWEEN_MAGICUP		__int64(0x00100000) << 32

#define CMS_ATTACK_UP			__int64(0x00200000) << 32	// 크리스마스 이벤트 아이템 버프 공격력 업


#define CMS_CANNON_MASK		(CMS_HIDE_CANNON | CMS_HIDE)

#define CMSEX_STREN_STR			0x00000001
#define CMSEX_STREN_HTH			0x00000002
#define CMSEX_STREN_DEX			0x00000004
#define CMSEX_STREN_INT			0x00000008
#define CMSEX_STREN_FATAL		0x00000010
#define CMSEX_BERSERK			0x00000020
#define CMSEX_CTDEFLIGHTNING	0x00000040
#define CMSEX_CTDEFICE			0x00000080
#define CMSEX_CTDEFFIRE			0x00000100
#define CMSEX_CTACCURACY		0x00000200
#define CMSEX_CTBATTLE			0x00000400
#define CMSEX_SHIELDRESILIENCE	0x00000800
#define CMSEX_RESIST_LIGHTNING	0x00001000
#define CMSEX_RESIST_ICE		0x00002000
#define CMSEX_RESIST_FIRE		0x00004000
#define CMSEX_RESIST_CURSE		0x00008000
#define CMSEX_RESIST_PALSY		0x00010000
#define CMSEX_EMERGENCYESCAPE	0x00020000
#define CMSEX_CLOUDSIGHT		0x00040000
#define CMSEX_MESH_CHANCE      	0x00080000
#define CMSEX_MESH_STR         	0x00100000
#define CMSEX_MESH_HTH         	0x00200000
#define CMSEX_MESH_DEX         	0x00400000
#define CMSEX_MESH_INT         	0x00800000
#define CMSEX_MESH_WIS         	0x01000000
#define CMSEX_MESH_DEFENSE     	0x02000000
#define CMSEX_VANISHCONFI      	0x04000000
#define CMSEX_PET_HP			0x08000000
#define CMSEX_PET_MP			0x10000000
#define CMSEX_PET_ATTACK		0x20000000
#define CMSEX_PET_DEPENSE		0x40000000
#define CMSEX_HYDROCHLORICACID	0x80000000
#define CMSEX_ACCURACY_RATE		__int64(0x00000001) << 32	// 크리스마스 이벤트 아이템 버프 명중 점수 향상
#define CMSEX_CRITICAL_HIT		__int64(0x00000002) << 32	// 크리스마스 이벤트 아이템 버프 치명타 확률 증가


// Character Etc. State
#define CES_TRADEASKED			0x00000001
#define CES_TRADEDISPLAY		0x00000002
#define CES_TRADEAGREED			0x00000004
#define CES_REVIVALASKED		0x00000008
#define CES_KILLEDATPVP			0x00000010
#define CES_KILLEDATONPK		0x00000020
#define CES_KILLEDATOFFPK 		0x00000040
#define CES_KILLEDATCUTEXPHALF	0x00000080
#define CES_KILLEDATCASTLEWARPK	0x00000100
#define CES_BOKJOOMUNYOPEN		0x00000200	// 복주머니를 열고 있는 상태
#define CES_DANJIOPEN			0x00000400	// 금,은단지를 열고 있는 상태
#define CES_SIEGEGUNSET			0x00000800	// 공성 병기를 설치하고 있는 상태
#define CES_KILLEDATBATTLEFIELD 0x00001000

// Character Buff State
#define CBS_PCROOM          	__int64(0x00000001)
#define CBS_EXPADD130       	__int64(0x00000002)
#define CBS_MONEYADD120     	__int64(0x00000004)
#define CBS_FISHADD200      	__int64(0x00000008)
#define CBS_DROPUPCHARMARMOR	__int64(0x00000010)
#define CBS_DROPUPCHARMORNAMENT	__int64(0x00000020)
#define CBS_DROPUPCHARMWEAPON	__int64(0x00000040)
#define CBS_CUTEXPHALF			__int64(0x00000080)
#define CBS_KILLEDNOCOUNT		__int64(0x00000100)
#define CBS_PAY_UPATTACK		__int64(0x00000200)
#define CBS_PAY_CUTDAMAGE		__int64(0x00000400)
#define CBS_PAY_UPXBLOW3		__int64(0x00000800)
#define CBS_PAY_UPXBLOW5		__int64(0x00001000)
#define CBS_PAY_AUTOREFRESH		__int64(0x00002000)
#define CBS_PAY_UPHIT			__int64(0x00004000)
#define CBS_PAY_UPDODGE			__int64(0x00008000)
#define CBS_PAY_PERFECTDEF		__int64(0x00010000)
#define CBS_PAY_DRAINHP			__int64(0x00020000)
#define CBS_PAY_UPSTR			__int64(0x00040000)
#define CBS_PAY_UPHTH			__int64(0x00080000)
#define CBS_PAY_UPINT			__int64(0x00100000)
#define CBS_PAY_UPWIS			__int64(0x00200000)
#define CBS_PAY_UPDEX			__int64(0x00400000)
#define CBS_PLAYERNAMECHANGED	__int64(0x00800000)
#define CBS_GUILDNAMECHANGED	__int64(0x01000000)
#define CBS_LUCKYKEY			__int64(0x02000000)
#define CBS_LUCKYSTONE1			__int64(0x04000000)
#define CBS_LUCKYSTONE2			__int64(0x08000000)
#define CBS_CHANGEFACE			__int64(0x10000000)

#define CBS_UPHIT				__int64(0x20000000)			// 최종명중점수 상승
#define CBS_UPATTACK			__int64(0x40000000)			// 공격력(물리/마법) 상승
#define CBS_CUTDAMAGE			__int64(0x80000000)			// 모든 최종피해 감소
#define CBS_UPXBLOW5			__int64(0x00000001) << 32	// 참격발동 확률 증가
#define CBS_UPSTR				__int64(0x00000002) << 32	// 3 증가	BUFF_PAY_UPSTR	60
#define CBS_UPHTH				__int64(0x00000004) << 32	// 5 증가	BUFF_PAY_UPHTH	61
#define CBS_UPINT				__int64(0x00000008) << 32	// 3 증가	BUFF_PAY_UPINT	62
#define CBS_UPWIS				__int64(0x00000010) << 32	// 5 증가	BUFF_PAY_UPWIS	63
#define CBS_UPDEX				__int64(0x00000020) << 32	// 3 증가	BUFF_PAY_UPDEX	64
#define CBS_GUNNERY				__int64(0x00000040) << 32	// 포병술의 시간제 습득
#define CBS_EXPADD110_1			__int64(0x00000080) << 32	// 진달래꽃 이벤트 1
#define CBS_EXPADD110_2			__int64(0x00000100) << 32	// 진달래꽃 이벤트 2
#define CBS_EXPADD110_3			__int64(0x00000200) << 32	// 진달래꽃 이벤트 3
#define CBS_RETURNCOOLTIME		__int64(0x00000400) << 32	// 귀환 쿨타임
#define CBS_ATK10				__int64(0x00000800) << 32	// 공격력 10%
#define CBS_POWER_UP			__int64(0x00001000) << 32	// 공격력 상승.
#define CBS_EXP_UP				__int64(0x00002000) << 32	// 경험치 상승.
#define CBS_GUILD_DEF_UP		__int64(0x00004000) << 32	// 길드버프, 방어력 상승
#define CBS_BLOW_UP				__int64(0x00008000) << 32	// 크리스마스 이벤트 아이템 버프 참격 발동 확률
#define CBS_PKPENALTY			__int64(0x00010000) << 32	// 자객시스템 페널티 적용 1단계
//(CBS_PKPENALTY1 | CBS_PKPENALTY2 | CBS_PKPENALTY3 | CBS_PKPENALTY4 | CBS_PKPENALTY5)

// Monster AI
#define AI_NONE				0x00000000
#define AI_PASSIVE			0x00000001
#define AI_AGGRESSIVE		0x00000002

// Item Info
#define ITEM_PUTON			0x00000001
#define ITEM_SETGEM			0x00000002
#define ITEM_ONTRADE		0x00000004
#define ITEM_CHEAT			0x00000008
#define ITEM_STORAGE		0x00000010
#define ITEM_TRANSFORM		0x00000020
#define ITEM_PROTECTED		0x00000040
#define ITEM_OWN			0x00000080

#define ITEM_MIX_DARK		0x00000100	// 암흑석	// 조합시스템
#define ITEM_MIX_SAINT		0x00000200	// 신성석
#define ITEM_MIX_FLAME		0x00000400	// 화염석
#define ITEM_MIX_ICE		0x00000800	// 빙염석
#define ITEM_MIX_LIGHT		0x00001000	// 낙뢰석
#define ITEM_MIX_POISON		0x00002000	// 독운석
#define ITEM_MIX_PARAL		0x00004000	// 마비석
#define ITEM_MIX_POWER		0x00008000	// 기운석
#define ITEM_MIX_TECH		0x00010000	// 기술석
#define ITEM_MIX_FANTA		0x00020000	// 신비석
#define ITEM_MIX_BLOOD		0x00040000	// 혈마석
#define ITEM_MIX_LEVEL1		0x00080000	// 레벨1
#define ITEM_MIX_LEVEL2		0x00100000	// 레벨2
#define ITEM_MIX_FIREBALL	0x00200000	// 화주


#define ITEM_OWNMASK		( ITEM_CHEAT | ITEM_OWN)
#define ITEM_NOTMOVEMASK	( ITEM_PUTON | ITEM_OWNMASK)
#define ITEM_STORAGEMASK	( ITEM_OWNMASK | ITEM_TRANSFORM | ITEM_PROTECTED)
#define ITEM_MIX			( ITEM_MIX_DARK | ITEM_MIX_SAINT | ITEM_MIX_FLAME | ITEM_MIX_ICE | ITEM_MIX_LIGHT | ITEM_MIX_POISON | ITEM_MIX_PARAL | ITEM_MIX_POWER | ITEM_MIX_TECH | ITEM_MIX_FANTA | ITEM_MIX_BLOOD | ITEM_MIX_FIREBALL)

#define SVMAP_VERSION				1
#define SVMAP_SIZE					(SVMAP_TILE_SIZE * SVMAP_TILE_COUNT) // 8192
#define SVMAP_CELL_COUNT			(SVMAP_TILE_COUNT * SVMAP_CELL_COUNT_PER_TILE) // 1024
#define SVMAP_CELL_COUNT_PER_TILE	(SVMAP_TILE_SIZE / SVMAP_CELL_SIZE)	// 4
#define SVMAP_CELL_SIZE				8
#define SVMAP_TILE_COUNT			256
#define SVMAP_TILE_SIZE				32

#define MAX_PLAYER_SIGHT			1024
#define MAX_PLAYER_STEP				128

enum MOVE_ACTION_TYPE
{
	MV_AC_CREATE,
	MV_AC_DELETE,
	MV_AC_MOVE,
	MV_AC_NONE,
};

enum eSeverMapAttr
{
	SMA_NOTMOVEABLE = 0,	// 못가는곳
	SMA_PORTAL,				// 포탈지역
	SMA_VILLAGE,			// 마을속성
	SMA_SAFETY,				// 안전지역
	SMA_ATTACK_CASTLE,		// 공성지역
	SMA_DEFENCE_CASTLE,		// 수성지역
	SMA_OBJECT				// 오브젝트지역

	/*
	던전과 필드의 서버맵 읽는 순서가 틀리다.
	던전에서는 기타 마을, 안전, 공성, 수성 관련한 속성을 쓰지 않아서 그동안 문제가 없었던거 같다.
	*/
};

// Class Specialty

// (enum) /////////////////////////////////////////////////////////
enum COUNTRY_CODE
{
	N_KR,
	N_CN,
	N_EN,
};

enum MAP_STATE
{
	MS_NONE,
	MS_QUAKE1,
	MS_QUAKE2,
	MS_QUAKE3,
	MS_QUAKE4,
	MS_TB_CREATE,
};

enum MONSTER_RACE
{
	MR_MAGUNI,
	MR_NOTMAGUNI,
	MR_CASTLESTANDARD,
	MR_CASTLEGATE,
	MR_ITEM,
	MR_MAGIC,
	MR_INACTIVE,
	MR_EGG,
	MR_COCOON,
	MR_FIREFLOWER,
	MR_SIEGEGUN,
	MR_TOWER,
	MR_PRAY,
	MR_PRAYDOOR,
};

enum DROPITEMMASK
{
	G1_WEAPON = 1,
	G1_ARMOR,
	G1_ENCHANT,
	G1_GENERAL,
	G1_ORNAMENT,
	G2W_1HAND = 1,
	G2W_2HAND,
	G2A_MAIN,
	G2A_SUB,
	G2E_PREFIX,
	G2E_UPGRADE,
	G2E_ETC,
	G2G_USABLE,
	G2G_UNUSABLE,
	G2G_QUEST,
	G2G_MONEY,
	G2G_ETC,
	G2O_TRINKET,
	G2O_NECKLACE,
	G2O_RING,
	G3W_SHORT = 1,
	G3W_LONG,
	G3A_UPPER,
	G3A_HELMET,
	G3A_GAUNTLET,
	G3A_BOOTS,
	G3A_LOWER,
	G3A_SHIELD,
	G3A_MASK,
	G3A_FLAG,
	G3A_TRANSFORM,
	G3E_CHARM_WEAPON,
	G3E_CHARM_ARMOR,
	G3E_CHARM_ORNAMENT,
	G3E_CHARM_ATTACK,
	G3E_CHARM_MAGIC,
	G3E_CHARM_DEFENSE,
	G3E_CHARM_HIT,
	G3E_CHARM_DODGE,
	G3E_REPAIRKIT,
	G3E_PROTECT,
	G4A_SWORD = 1,
	G4A_BOW,
	G4A_WAND,
};

enum SKILL_ADD_VALUE
{
	SAV_DAMAGELIGHTNINGADD,
	SAV_DAMAGEWIDEICE,
	SAV_DAMAGEWIDEFIRE,
	SAV_DAMAGEPOISON,
	SAV_HEALINGPARTY,
	SAV_DAMAGESUFFERING,
	SAV_DAMAGESPIRIT,
	SAV_DAMAGEWIDECHAINLIGHTNING,
	SAV_DAMAGEWIDEICEREQUIEM,
	SAV_DAMAGEWIDEEXPLOSIVEBURST,
	SAV_HEALINGPARTYPLUS,
	SAV_HEALINGPARTYINS,
	SAV_DAMAGEPOISONCLOUD,
	SAV_DAMAGEPULLSWING,
	SAV_DAMAGEWIDEMDORAGE,
	SAV_DAMAGEWIDEMDOFURY,
	SAV_DAMAGEWIDEMDOGROUNDFEAL,
	SAV_DAMAGEWIDEMDOASCENSION1,
	SAV_DAMAGEWIDEMDOASCENSION2,
	SAV_DAMAGEWIDETHUNDERSTORM, //번개폭풍
	SAV_DAMAGEWIDEICESTORM,     //얼음폭풍
	SAV_DAMAGEWIDEFIRERAIN,  	//화염폭풍
	SAV_DAMAGEWIDEOVERRUN,		//어르신의분노
	SAV_DAMAGEWIDEMSWIING1,				//휘두르기1
	SAV_DAMAGEWIDEMSWIING2,				//휘두르기2
	SAV_DAMAGEWIDEMFURY, 
	SAV_DAMAGEWIDEFIREEXPLOSION,		//화염초 폭발
	SAV_DAMAGEWIDESIEGEGUNBALL,			//공성병기 포탄 폭발
	SAV_DAMAGEWIDEMVACCUMWAVE,			//진공파
	SAV_DAMAGEWIDEFUJIEXPLOSION,		//후지산폭발
	SAV_DAMAGEWIDEMSPRITOFGROUND,		//대지의혼
	SAV_DAMAGEWIDEMYAMATO,				//야마토 폭발
	SAV_DAMAGEWIDEMGHOST,				//귀혼술
};

// MLM Flag
enum MLM_FLAG
{
	M_FEE = 0,	// fee
	M_GMASTER,	// great master
	M_MASTER,	// master
	M_FELLA,	// fellas
	M_PUPIL,	// pupils
	// client
	MLM_C_ASK1 = 0,
	MLM_C_INFO,
	MLM_C_ASK2,
	MLM_C_MSG,
	// authsvr
	MLM_A_SET = 0,
	MLM_A_INFO1,
	MLM_A_INFO2,
	MLM_A_RESET,
	MLM_A_SETBREAK,
	// mainsvr
	MLM_M_ASKRELATION = 0,
	MLM_M_REPLYFROMCLNT,
	MLM_M_REPLYFROMAUTH,
	MLM_M_BREAKRELATION,
	MLM_M_INFORELATION,
	MLM_M_CONFIRM,
	MLM_M_SETMSG,
	MLM_M_GETMSG,
	MLM_M_SENDMSG,
	// dbsvr
	MLM_D_INSERT = 0,
	MLM_D_BREAKONPUPIL,
	MLM_D_BREAKONMASTER,
	MLM_D_SAVEFEE,
	MLM_D_SETMSG,
	MLM_D_GETMSG,
	// mlm answer
	MLMA_SETFAIL = 0,
	MLMA_SETFIRST,
	MLMA_SETSECOND,
};

// FRD Flag
enum FRD_FLAG
{
	// msg	
	FRD_MSG_LIMITMAX = 0,   //인원제한
	FRD_MSG_ALREADYINSERT,  //이미 등록되어있음
	FRD_MSG_NOTEXISTPLAYER, //없는플레이어
	// client
	FRD_C_INSERT = 0, //bdsb
	FRD_C_DELETE,	  //bd
	FRD_C_LIST,	      //bb
	FRD_C_REFRESH,    //bbdb
	// mainsvr
	FRD_M_INSERT = 0, //bs
	FRD_M_DELETE,     //bbd
	FRD_M_PID,
	FRD_M_LOAD,	
	FRD_M_REFRESH,    //b
	// dbsvr
	FRD_D_INSERT = 0,
	FRD_D_DELETE,
	FRD_D_PID,
	FRD_D_LOAD,
};

// MAIL Flag
enum MAIL_FLAG
{
	MAIL_SR_SUCCESS = 0,
	MAIL_SR_LIMITMAX,
	MAIL_SR_NOTEXISTPLAYER,
	MAIL_SR_NOTENOUGHMONEY,
	MAIL_SR_NOTEXISTITEM,
	MAIL_SR_NOTGETMID,
	MAIL_SR_FAILSCANPLAYER,

	MAIL_SFLAG_NONE = 0,
	MAIL_SFLAG_READ,	
	MAIL_SFLAG_SENDPROC,	
	MAIL_SFLAG_ITEMRECVPROC,

	MAIL_SF_SUCCESS = 0,
	MAIL_SF_FAIL,

	MAIL_IRF_SUCCESS = 0,
	MAIL_IRF_FAIL,

	MAIL_CR_ITEMRECVPROC = 1,
	MAIL_CR_ALREADYRETURN,

	// msg
	MAIL_MSG_NEWMAIL = 0,
	MAIL_MSG_RETURN,          //d MID
	MAIL_MSG_DELETE,          //d 
	MAIL_MSG_SENDPROC,        // 
	MAIL_MSG_ITEMRECVPROC,    //d 
	MAIL_MSG_ALREADYRETURN,   //d
	MAIL_MSG_NOTENOUGHMONEY,  //d
	MAIL_MSG_ITEMRECVSUCCESS, //d
	MAIL_MSG_ITEMRECVNOSLOT,  //d
	MAIL_MSG_ITEMATSTALL,  //d

	// Type	
	MAIL_T_GENERAL = 0,
	MAIL_T_PARCEL,
	MAIL_T_RETURN,
	MAIL_T_PAY,	
	MAIL_T_NOTICE,
	// client
	MAIL_C_SEND_RESULT = 0, //bs
	MAIL_C_LIST,            //b dbbbdsdsdddwbdd     
	MAIL_C_MSG,	            //dbdwm or dbdwmwbbdbbbbbbbbbbb
	MAIL_C_UPDATEINFO,      //dbb
	// mainsvr
	MAIL_M_SEND = 0,        //c2s bswm bswmdwbdd
	MAIL_M_SEND_RESULT,	    //d2s
	MAIL_M_REFRESH,         //c2s
	MAIL_M_LOAD,            //d2s    
	MAIL_M_RETURNPROC,      //d2s	
	MAIL_M_CHECK_RESULT,    //d2s
	MAIL_M_GETMSG,          //c2s d
	MAIL_M_SETMSG,          //d2s
	MAIL_M_RETURN,          //c2s d
	MAIL_M_DELETE,          //c2s d
	MAIL_M_ITEMRECV,        //c2s d
	MAIL_M_ITEMRECV_RESULT, //d2s
	// dbsvr
	MAIL_D_SEND = 0,
	MAIL_D_SEND_FLAG,
	MAIL_D_LOAD,
	MAIL_D_RETURNPROC,
	MAIL_D_GETMSG,
	MAIL_D_RETURN,
	MAIL_D_DELETE,
	MAIL_D_ITEMRECV,
	MAIL_D_ITEMRECV_FLAG,
};

// Event Flag
enum EVENT_FLAG
{
	EF_INVALIDCARDID,	// not used
	EF_USEDCARDID,		// not used
	EF_NOMORECHANCE,	// not used
	EF_SUCCESS_CARDEVENT,	// not used
	EF_ALREADYRECOMMAND,	// 이미 다른 계정을 추천하셨습니다.
	EF_INVALIDACCOUNT,		// 입력한 계정은 존재하지 않거나 유효하지 않은 계정입니다.
	EF_INVALIDPLAYER,		// 이미 추천 되어 있습니다.		<- 이미 추천 되어 있을때 보내 겠습니다.
	EF_NOTNEWACCOUNT,		// 당신은 신규 계정이 아닙니다.
	EF_SAMEACCOUNT,			// 자기 자신은 추천할 수 없습니다.
	EF_SUCCESS_SPONSOREVENT, //해당 계정이 정상적으로 추천되었습니다. 
	EF_OVERLEVEL10,
	EF_UNDERLEVEL16,
	EF_OVERPUPIL20,
	EF_ALREADYGOTMASTER,
	EF_REJECTEDTOBEMASTER,
	EF_PLAYERALREADYGOTMASTER,
	EF_CANTBREAKRELATION,
	EF_GOTPUPIL,
	EF_GOTMASTER,
	EF_GOT20KMONEYFOR16,
	EF_GOT20KMONEYFORPUPIL16,
	EF_BROKERELATION,
	EF_INVALIDMLMMSG,
	EF_MLMMSGUPDATED,
	EF_UNDERLEVEL10,
	EF_DEFICIENT_DICECOIN,
	EF_SUCCESS_DICEEVENT,
	EF_UNDERLEVEL20,			// 레벨이 20이상이지 않을때. 
	EF_UNDERLEVEL30,			// 레벨이 30이상이지 않을때.
	EF_UNDERLEVEL40,			// 추천자가 레벨 40이상이지 않을떄.
	EF_NOEVENTUSER,	// 이벤트 적용 대상이 아닐때
	EF_ITEMRECEIVE,	// 아이템 이미 받음
	EF_LIMITCOUNT,  // 선착순 지남
	EF_NOTPLAY,		// 플레이중이 아닙니다.		<- 추가
	
	// event bit
	EB_SPONSOR = 1,
	EB_MLM_MASTER = 2,
	EB_MLM_BROKEN = 4,
	// event answer
	EA_FROMDB = 0,
	EA_FROMAUTH,

	// event bit of 1주년 이벤트
    EB_REST_CHANCE	= 0x00000001,	// 휴면 - 기회의 돌
    EB_REST_L17	= 0x00000002,	// 휴면 - LV17무기
    EB_REST_L25	= 0x00000004,	// 휴면 - LV25무기
    EB_REST_L33	= 0x00000008,	// 휴면 - LV33무기
    EB_REST_L40	= 0x00000010,	// 휴면 - LV40무기
	EB_NEW_TELP_1	= 0x00000020,	// 신규 - 이동주문서_나루터
	EB_NEW_TELP_2	= 0x00000040,	// 신규 - 이동주문서_죽서하죽장
	EB_NEW_LV20_1	= 0x00000080,	// 신규 - LV20달성-무기
	EB_NEW_LV20_2	= 0x00000100,	// 신규 - LV20달성-방어구1
	EB_NEW_LV20_3	= 0x00000200,	// 신규 - LV20달성-방어구2
	EB_NEW_LV20_4	= 0x00000400,	// 신규 - LV20달성-방어구3
	EB_NEW_LV20_5	= 0x00000800,	// 신규 - LV20달성-방어구4
	EB_NEW_LV20_6	= 0x00001000,	// 신규 - LV20달성-방어구5

	

};

// Difference Level Type
enum DIFF_LV_TYPE
{
	DLT_GRAY,
	DLT_BLUE,
	DLT_GREEN,
	DLT_YELLOW,
	DLT_ORANGE,
	DLT_RED,
	DLT_VIOLET,
};

// System Code
enum SYS_CODE
{
	SYS_PK,
	SYS_COSMO,
	SYS_BILLING,
	SYS_NMSOCKET,
	SYS_FLAG,	// not used
	SYS_ENG,	// not used
	SYS_FRD,
	SYS_NMBILLING,
	SYS_TESTSRV,
	SYS_WAR,
	SYS_MAIL,
	SYS_GAMBLE,	// 도박시스템(금전교환, 투전, KAL21)
	SYS_WAR2,	// 점령전 2차 업데이트 (공성병기)
	SYS_HACKSHIELD,	// HackShield핵실드
	SYS_HACKSHIELD_PACKET,	// HackShield핵실드 패킷 암호화
	SYS_SET_DEFENCE,	// 셋트 방어구,화주
	SYS_BATTLEFIELD,	// 시나리오3 전반적인 시스템
	SYS_TOWER_CRASH,	// 시나리오3 거점파괴
	SYS_HONOR,
	SYS_LOAD_PROTECT,	// 시나리오3 군주보호
	SYS_SHOWDOWN,		//	결투장 시스템.

	SYS_END,
};

// Event Code
enum EVENT_CODE
{
	EVENT_DOUBLEEXP,	// 0
	EVENT_DICE,
	EVENT_MORA,
	EVENT_SPONSOR,
	EVENT_CHANGEFACE,
	EVENT_MLM,			// 5	// don't delete!!!
	EVENT_SNOW,
	EVENT_THXGIVING,
	EVENT_ANNUAL,		// 상용화 1주년
	EVENT_NEWSERVER,	// 신 서버 오픈
	EVENT_FISHING,		// 낚시왕 이벤트...	취소됨. 
	EVENT_CRAFTSMAN,	// 제작의 고수 이벤트
	EVENT_POWERUP,		//	공격력 업.
	EVENT_EXPUP,		//	경험치 업.
	EVENT_NAMCHEON,		// 남천촉 열매 이벤트
	EVENT_SNOWFALL,		// 눈 내리기 이벤트 (천하타설) 
	EVENT_CHRISTMAS,	// 크리스마스 이벤트 16 
	EVENT_NEWACCOUNT,	// 유저 추천 이벤트		17
	EVENT_SLEEPINGACCOUNT, // 휴면 계정 복귀 이벤트	18

	EVENT_END,
};
// Event Mora			( 가위바위보 이벤트 타입 )
enum EventMora
{
	// Mora
	MORA_KAWI,			//	가위
	MORA_BAWI,			//	바위
	MORA_BO,			//	보
	// C2S
	MORA_IS,			//	가위바위보 가능한지.
	MORA_MORA,			//	가위바위보.
	// S2C
	MORA_TIME,			//	가위바위보 가능한 시간.
	MORA_NO_TIME,		//	가위바위보 불가능한 시간.
	MORA_SHOW,			//	가뷔바위보 결과.
	MORA_LEVEL_LIMIT,	//	가위바위보 불가능한 레벨.
};

// 남천촉 열매 이벤트 
enum EventNamCheon
{
	NAMCHEON_REFRESH,	// 목록 갱신
	NAMCHEON_MOVE,		// 이동
	NAMCHEON_MOVE_END,	// 이동 완료
	NAMCHEON_MOVE_FAILED, // 이동 실패
	NAMCHEON_LOGOUT,	// 플레이어 비접속 상태
};

// Chatting Type
enum CHAT_TYPE
{
	CHAT_COMMON,
	CHAT_WHISPER,
	CHAT_PARTY,
	CHAT_GUILD,
};

// Base Attribute
enum ATTR
{
	ATTR_PLAYER = 1,
	ATTR_MONSTER,
	ATTR_NPC,
	ATTR_ITEM,
};

// NPC Kind
enum NPC_KIND
{
	NK_MERCHANT,
	NK_INFORMANT,
	NK_GUARD,
	NK_QUEST,
	NK_SCENARIO,
	NK_TELEPORT,
	NK_DOOR,
	NK_SIEGEGUNSTONE,
	NK_RETURNPOINT,
	NK_NEWDOOR,
	NK_BATTLEFIELD,
	NK_MERCHANT_HONOR,
	NK_BATTLEFIELD_DOOR,
};

// Effect Type
enum EFFECT_TYPE
{
	E_NONE,
	E_HP,
	E_MP,
	E_LEVELUP,
	E_CHARM_1,	 //부활주문서
	E_CHARM_2,	 //공격향상의주문서
	E_CHARM_3,     //피해감소의주문서
	E_CHARM_4,     //고급참격향상의주문서
	E_CHARM_5,     //명중향상의주문서
	E_CHARM_6,     //회피향상의주문서
	E_CHARM_7,     //상급완벽한방어의주문서
	E_CHARM_8,     //상급체력흡수의주문서
	E_POTION_1,    //호랑이발톱물약
	E_POTION_2,    //곰가죽의물약
	E_POTION_3,    //현명함의물약
	E_POTION_4,    //예지의물약
	E_POTION_5,    //독수리날개의물약
	E_FLUTE_1,	   //영혼의뿔피리,뿔피리
	E_STONE_1,     //어획의돌
	E_STONE_2,     //경험의돌
	E_STONE_3,     //부유의돌
	E_LUCKYKEY,
	E_LUCKSTONE,
	E_DAMAGED,
	E_PET_HP,			// 펫 HP증가
	E_PET_MP,			// 펫 MP증가
	E_PET_MINMAXATTACK,	// 펫 최소 공격력증가
	E_PET_DEFENSE,		// 펫 방어력증가
	E_MOD2NDJOB,		// 전직의 돌
	E_UPPER_CHANCE_STONE,	// 기회의 돌
	E_GUNNERY,
	E_MIX_FLAME,	// 화염석		// 조합시스템
	E_MIX_ICE,		// 빙염석
	E_MIX_LIGHT,	// 낙뢰석
	E_MIX_POISON,	// 독운석
	E_MIX_PARAL,	// 마비석
	E_TOOHON,		// 사루즈미 - 대지의혼
};

// Wear State
enum WEAR_STATE
{
	WS_WEAPON,
	WS_SHIELD,
	WS_HELMET,
	WS_UPPERARMOR,
	WS_LOWERARMOR,
	WS_GAUNTLET,
	WS_BOOTS,
	WS_PET,

	WS_MIRROR,
	WS_TAEGEUK,
	WS_TRIGRAM1,
	WS_TRIGRAM2,
	WS_TRIGRAM3,
	WS_TRIGRAM4,
	WS_TRIGRAM5,
	WS_TRIGRAM6,
	WS_TRIGRAM7,
	WS_TRIGRAM8,

	WS_RING,
	WS_NECKLACE,
	WS_TRINKET,
	WS_TRANSFORM,
	WS_MASK,
	WS_2HANDWEAPON,
	WS_STANDARD,
};

// player Class
enum PLAYER_CLASS
{
	PC_KNIGHT,
	PC_MAGE,
	PC_ARCHER,
	PC_THIEF,
	//PC_ASSASSIN,
	//PC_TALISMAN,
	//PC_SPIRITKNIGHT,
	//PC_MONK,
};

// Item Class
enum ITEM_CLASS
{
	IC_WEAPON,
	IC_DEFENSE,
	IC_ORNAMENT,
	IC_GENERAL,
	IC_QUEST,
	IC_MONEY,
	IC_TRANSFORM,
	IC_PET, // =?,

	IC_YINYANG,
};

enum ITEM_SUBCLASS
{
	ISC_SWORD,
	ISC_WAND,
	ISC_BOW,
	ISC_SHIELD,
	ISC_HELMET,
	ISC_UPPERARMOR,
	ISC_LOWERARMOR,
	ISC_GAUNTLET,
	ISC_BOOTS,
	ISC_RING,
	ISC_NECKLACE,
	ISC_TRINKET,
	ISC_REFRESH,
	ISC_CHARM,
	ISC_GEM,
	ISC_ETC,
	ISC_COIN,
	ISC_COMMON,
	ISC_REPAIR,
	ISC_COCOON,
	ISC_MASK,
	ISC_SWORD2HAND,
	ISC_STANDARD,

	ISC_DAGGER = 27,
	ISC_FISH, // =?

	ISC_YINYANGMIRROR,
	ISC_TAEGEUK,
	ISC_TRIGRAM1,
	ISC_TRIGRAM2,
	ISC_TRIGRAM3,
	ISC_TRIGRAM4,
	ISC_TRIGRAM5,
	ISC_TRIGRAM6,
	ISC_TRIGRAM7,
	ISC_TRIGRAM8,

	ISC_EGG,
};

// Resist Type
enum RESIST_TYPE
{
	RT_FIRE,
	RT_ICE,
	RT_LITNING,
	RT_CURSE,
	RT_PALSY,
};

// Action
enum ACTION_TYPE
{
	AT_COMMON,
	AT_GENERAL,
	AT_MOVE,
	AT_REST,
	AT_ATTACK,
	AT_SKILL,
	AT_DEFENSE,
	AT_DAMAGE,
	AT_KNEE,
	AT_DIE,
	AT_BEHEADED,
	AT_STALL,
	AT_PRETRANSFORM,
	AT_TRANSFORM,
	AT_REMOVE,
};

// Character Kind
enum CHAR_KIND
{
	CK_PLAYER,
	CK_MONSTER,
	CK_NPC,
	CK_HORSE,
};

// Character Admin Level
enum AdminType
{
	A_USER,
	A_BLOCKED,
	A_RESERVED1,
	A_ADMIN,	// 테스트용
	A_GM,	// Game Master	
	A_SUPERADMIN,	// 개발자
	A_GM2,			// 운영자 2
	A_SUPERADMIN2,	// 개발자 2
};

enum ANSWER
{
	ANS_ERROR,
	ANS_OK,
	ANS_MLMOK,
	ANS_ERROR_DISSOLUTION,
};

enum LOGIN_ANS
{
	LA_ERROR,
	LA_OK,
	LA_WRONGID,
	LA_WRONGPWD,
	LA_SAMEUSER,
	LA_BLOCKED,
	LA_EXPIRED,
	LA_AGELIMITED,
	LA_NOTPERMITTED,
	LA_LOGINLATER,

	LA_CREATE_SECONDARY=12,
};

enum NEWPLAYER_ANS
{
	NA_ERROR,
	NA_OK,
	NA_WRONGCLASS,
	NA_OVERPLAYERNUM,
	NA_OCCUPIEDID,
	NA_WRONGPROPERTY,
	NA_NOTAVAILABLE,
};

enum COPYPLAYER_ANS
{
	CP_ERROR,
	CP_OK,
	CP_VALIDNAME,
	CP_OVERPLAYERNUM,
	CP_OCCUPIEDNAME,
	CP_INVALIDSERVER,
	CP_INVALIDPLAYER,
	CP_BLOCKEDPLAYER,
};

enum CLOSE_CONNECT
{
	CC_NORMAL,
	CC_KICK,
	CC_SAMEPLAYER,
	CC_SAMEUSER,
	CC_HACK,
	CC_EXPIRED,
	CC_OVERPOPULATION,
	CC_ERROR,
	CC_RELOGINFORCOPYPLAYER,
	CC_RESTOREPLAYER,	// 캐릭 복구 후 리조인하기위해 연결해제
	CC_WRONG_PROTOCOL_VERSION,
	CC_DETECTED_HACK,
	CC_CHECKING,
};

enum LOGIN_TYPE
{
	LT_DELETED = 1,
	LT_BLOCKED = 2,
	//	LT_NOTPERMITTED = 4,
	LT_FREE = 8,
	LT_FLATRATE = 16,
	LT_PRORATE = 32,
	//	LT_PFIXCOST = 64,
	//	LT_PFIXAMOUNT = 128,
	LT_HOST = 256,
	LT_PCBANG = 512,
	LT_BILLINGMASK = (LT_PRORATE | LT_FLATRATE),
	LT_AUTHMASK = (LT_FREE | LT_BILLINGMASK),
};

enum TYPE_MAINLOG
{
	TML_PLAYER,	// 0
	TML_DELETEITEM,
	TML_INSERTITEM,
	TML_UPDATEITEMPID,
	TML_UPDATEITEMNUM,
	TML_PUTINSTORAGE,
	TML_PUTOUTSTORAGE,
	TML_QUEST,
	TML_ACCOUNT,
	TML_ENCHANTITEM,
	TML_UPDATETRANSFORM,	// 10
	TML_ALLIANCE,
	TML_CASTLEWAR,
	TML_UPGRADEITEM,
	TML_MAIL,
	TML_STOREDPROC,	// 저장프로시져관련
	TML_COPYPLAYER,	// 테섭 플레이어 복사
};

enum TYTE_LOG					// A : Auth   D : DB
{
	TL_LOGIN,			// 0	// A
	TL_LOGOUT,					// A
	TL_CREATE,					// D 아이템 정상 생성
	TL_CREATE_CHEAT,			// D 아이템 비정상 생성
	TL_DELETE,					// D 아이템 파괴
	TL_UPDATEPID,				// D 아이템 소유자 변화
	TL_UPDATENUM,				// D 아이템 갯수 변화
	TL_BUY,						// D 아이템 사기
	TL_SELL,					// D 아이템 팔기
	TL_USE,						// D 아이템 사용
	TL_TRADE,			// 10	// D 아이템 거래
	TL_DROP,					// D 아이템 떨구기
	TL_PICKUP,					// D 아이템 줍기
	TL_PERMIT,					// A 
	TL_SKILLUP,					// D 스킬레벨 업
	TL_STORAGE,					// D 창고
	TL_QUEST,					// D 퀘스트
	TL_SAVE_SP,					// D 스킬 포인트
	TL_UPDATE_PRTY,				// D 스탯 업데이트 관련
	TL_BLOCK,					// A 계정 블럭
	TL_FREE,			// 20	// A 계정 블럭 해제
	TL_CHARMING,				// D 부적 각인
	TL_SETGEM,					// D 속성의 돌 각인
	TL_UPDATEEND,				// D 내구도
	TL_EVENT,					// D 이벤트 관련
	TL_PARTYPICKUP,				// D 파티후 아이템 재분배
	TL_TRADEBYSTALL,			// D 좌판
	TL_CHANGEPREFIX,			// D 접두사 부적각인
	TL_UPDATE_CHEAT,
	TL_EXPLEVEL,				// D 
	TL_SKILLREDISTRIBUTE,// 30	// D 
	TL_GUILD,					// D 길드관련 비용
	TL_GUILD_EXP,				// D 
	TL_ALLIANCE_CREATE,			// D 
	TL_ALLIANCE_JOIN,			// D 
	TL_ALLIANCE_DELETE,			// D 
	TL_ALLIANCE_POSTPONE,		// D 
	TL_CASTLEWAR_ADD,			// D 
	TL_CASTLEWAR_END,			// D 
	TL_BLESS,					// D 
	TL_FORCEDIN,		// 40	// D 사제로 얻은 자모전
	TL_MLM,						// D 
	TL_BUYFORCEDIN,				// D 아이템 장터이용
	TL_USEPAYITEM,				// D 유료아이템 사용
	TL_UPDATEITEMINFO,			// D 연마제 사용
	TL_UPGRADE_DESTROY,			// D 보정석 추출
	TL_UPGRADE_RATE,			// D 
	TL_UPGRADE_LEVEL,			// D 참격
	TL_MAIL_SEND,				// D 쪽지 보냄
	TL_MAIL_POSTAGEL,			// D 소포보낼 때 요금받는 것
	TL_MAIL_ITEMSEND,	// 50	// D 소포(아이템 동봉)
	TL_MAIL_ITEMRECV,			// D 소포(아이템 받기)
	TL_CHANGEFACE,				// D 
	TL_MOVEITEM,				// SQL 저장프로시져 (EXEC MoveItem PID, IID)
								// GETDATE(), nMainType=15, nType=53, nID1=PID, nID2=0, nIID= IID, nVal1=0, nVal2=0, nVal3=0, nVal4=0
	TL_HACKING,
	TL_BATTLEFIELD,				// 전장관련
	TL_COPYPLAYER,				// 테섭 플레이어 복사 
	TL_COPYPLAYERITEM,				// 테섭 플레이어 복사로 아이템 생성 
	TL_CHANGEUSER,				// SQL 저장프로시져 (EXEC MoveItem PID, IID)
	TL_CHANGESERVER,				// SQL 저장프로시져 (EXEC MoveItem PID, IID)

};

enum PROPERTY_TYPE
{
	P_STR,	// 0
	P_HTH,
	P_INT,
	P_WIS,
	P_DEX,
	P_HP,
	P_MP,
	P_CURHP,
	P_CURMP,
	P_HIT,
	P_DODGE,	// 10
	P_MINATTACK,
	P_MAXATTACK,
	P_MINMAGIC,
	P_MAXMAGIC,
	P_DEFENSE,
	P_ABSORB,
	P_ASPEED,
	P_RESFIRE,
	P_RESICE,
	P_RESLITNING,	// 20
	P_RESCURSE,
	P_RESPALSY,
	P_PUPOINT,		// property upgrade point
	P_SUPOINT,	// skill upgrade point
	P_EXP,
	P_LEVEL,
	P_MINMAXATTACK,
	P_MINMAXMAGIC,
	P_RESISTALL,
	P_CONTRIBUTE,	// 30
	P_FATAL,
	P_MSPEED,
	P_BLOCK,
	P_HASTE,
	P_RAGE,
	P_MORTAL,
	P_HOST,	
	P_RANGE,
	P_MIX,
	P_CURHPR,		// 40
	P_CURMPR,


	P_PREFIX = 0xff,	// maximum
};

enum MESSAGE_TYPE
{
	MSG_SHUTDOWN_MIN,	// 0
	MSG_SHUTDOWN_SEC,
	MSG_SHUTDOWN_NOW,
	MSG_SHUTDOWN_CANCEL,
	MSG_INVALID_NAME,
	MSG_SAMEPLAYERONGAME,
	MSG_BLOCKEDPLAYER,
	MSG_FAILLOADPLAYER,
	MSG_NOTEXISTPLAYER,
	MSG_MOVEHACK,
	MSG_ALREADYPUTON,	// 10
	MSG_CANTDELPUTONITEM,
	MSG_CLASSLIMIT,
	MSG_CANTDROPPUTONITEM,
	MSG_DODGED,	// not use
	MSG_USERCOUNT,
	MSG_USERALLCOUNT,
	MSG_INVENISFULL,	// not use
	MSG_CURRENCY,
	MSG_DESTPLAYERONTRADE,
	MSG_NOTENOUGHPEERINVENSLOT,	// 20
	MSG_INVALID_ITEMLIST,
	MSG_TRADEAGREED,
	MSG_PRIORITYOFITEM,
	MSG_TOOFARFROMME,
	MSG_THEREISNOPLAYER,
	MSG_NEEDPUPOINT,
	MSG_NORIGHTOFPARTYHEAD,
	MSG_ASKJOINPARTY,
	MSG_JOINEDINPARTY,
	MSG_PARTYISFULL,	// 30
	MSG_JOINEDINOTHERPARTY,
	MSG_LEFTPARTY,
	MSG_EXILEDFROMPARTY,
	MSG_REJECTJOINPARTY,
	MSG_BECOMEPARTYHEAD,
	MSG_ENDPARTY,
	MSG_OFFLINE_OUTOFRANGE,
	MSG_SPECIALTYUP,
	MSG_NOTENOUGHSTORSLOT,
	MSG_NOTENOUGHINVENSLOT,	// 40
	MSG_SAVEDREVIVALPT,
	MSG_PARTYMEMGETITEM,
	MSG_EVENTRESULT,
	MSG_FISH_PROGRESS,					//	낚시진행바 시작메세지.
	MSG_SOLDOUT_SITEM,
	MSG_NOTENOUGH_SITEM,
	MSG_CANTBUY_SITEM,
	MSG_CHANGEDSTALLINFO,
	MSG_COOKING_PROGRESS,				//	요리진행바 시작메세지.
	MSG_ALREADYENDEDSTALL,				//	50
	MSG_COOKING_SCARCE_MATERIALS,		//	요리시 조건이 성립하지 않습니다.
	MSG_CANTPUTONSTALLITEM,
	MSG_ASKREVIVAL,
	MSG_ENCHANTFAILED,
	MSG_GIG_FAIL,						//	작살 낚시에 실패했습니다.
	MSG_REALTIMEEVENT,					//	실시간이벤트 치트 응답.
	MSG_REALTIMEEVENT_START,			//	실시간이벤트 시작메세지
	MSG_REALTIMEEVENT_END,				//	실시간이벤트 종료메세지
	MSG_DONEINITSTAT,
	MSG_NOTREADYTOTRADE,	// 60
	MSG_NOTREADYTOPARTY,
	MSG_NOTREADYTOPVP,
	MSG_OFFLINE_OUTOFPVPRANGE,
	MSG_REJECTPVP,
	MSG_ONPVP,
	MSG_NOTENOUGHRAGE,
	MSG_NOTTRANSFORMAREA,
	MSG_INVALIDTILE,
	MSG_TAXRATE,
	MSG_INFOSYS,            // 70
	MSG_REVIVAL_FAIL,
	MSG_CHANT_ALREADYUSE,
	MSG_MLMLOGIN,
	MSG_ADDBSTATE,
	MSG_SUBBSTATE,
	MSG_CANTSAVEREVIVALPT,
	MSG_NOTTRANSFORMBYFLAG,	// 깃발착용중 둔갑불가
	MSG_CANTDROPFLAG,	// 깃발 Drop 불가
	MSG_PUTOFFAFTER10SEC,	// 깃발착용후 10초간 벗기불가
	MSG_MYTELEPORTERROR,	// 80
	MSG_UPGRADELEVELSUBMONEY, //무기업그레이드 돈나감
	MSG_UPGRADELEVELDESTORY,  //무기업그레이드 치명적실패로 파괴
	MSG_FRD,  //친구
	MSG_NOTSTALLATCASTLE,
	MSG_MAIL,
	MSG_ITEMMONSTERUSED,		// 보물상자 : 다른 사람이 사용중입니다
	MSG_ITEMMONSTEROPEN,		// 보물상자 : 보물상자를 열고 있습니다
	MSG_ITEMMONSTEROPENED,		// 보물상자 : 보물상자가 열렸습니다
	MSG_ITEMMONSTERCANCELED,	// 보물상자 : 보물상자 열기가 취소되었습니다
	MSG_LUCKYBLOW,				// 행운의 일격 + "b", nLBLevel	// 90
	MSG_ALREADYMIRRORSET,
	MSG_NOMIRROR,
	MSG_MIRRORSET,
	MSG_MIRRORBROKEN,
	MSG_TB_CREATE0,
	MSG_TB_CREATE1,
	MSG_TB_CREATE2,
	MSG_TB_CREATE3,
	MSG_TB_CREATE4,
	MSG_CHANGENAME,	// 100
	MSG_SKILLBUFFALREADYUSE,
	MSG_ALREADYCHANGEDFACE,
	MSG_FAIL_DELETEGUILDMASTER,
	MSG_INSUFFICIENTITEM,
	MSG_REMAINTIME,
	MSG_INIT_2ND_JOB,			// 전직의 돌, "bb" 0 : 완료,  1 : 실패
	MSG_BILLINGEXTENDED,
	MSG_BILLINGTYPECHANGED,
	MSG_NOMOREPUTON,
	MSG_UPPER_CHANCE_STONE,	// 110	// 상급기회의 돌, "bb" 0 : 완료,  1 : 실패
	MSG_EX_GEUMJUN_JAMOJUN,		// "bb"	0:레벨제한, 1:자모전부족, 2:금전부족, 3:교환성립
	MSG_EVENT_LIMIT,	// 이벤트 대상이 아님
	MSG_ITEMDROP,		// "bbw"	b:드랍한 주체 0->어르신 , w:ItemIndex
	MSG_EXISTPARTYONPK,		// 파티에 자객이 있어 이동불가
	MSG_NODOORKEY,	//열쇠가 없습니다	//"w" 열쇠index
	MGS_DOOROPEN,	//***(문이름)가 열립니다.	//"w" NPC ID
	MGS_DOORCLOSE,	//***(문이름)가 닫힙니다.	//"w" NPC ID
	//MSG_SIEGEGUN					//공성 병기 관련 메세지
	MSG_SIEGEGUNSETCANCEL,			//설치가 취소 되었습니다. 
	MSG_SIEGEGUNIMPOSSIBLE,			//지금 설치가 불가능 합니다. 
	MSG_SIEGEGUNUSED,		// 120	//이미 다른 사람이 설치 중입니다. 
	MSG_SIEGEGUNUNSETUSED,			//이미 다른 사람이 해체 중입니다.
	MSG_SIEGEGUNSETCLASS,			//부의 1등급만 설치가 가능합니다. 
	MSG_SIEGEGUNCONDITION,			//재료가 부족합니다. 

	MSG_SIEGEGUNDIFFERNT,			//다른 부의 공성 병기입니다. 
	MSG_SIEGEGUNHANDLING,			//이미 다른 사람이 조종 중입니다. 
	
	MSG_SIEGEGUNREMOVECLASS,		//부의 1등급 만 해체 할수 있습니다. 
	MSG_SIEGEGUNREMOVEHANDLING,		//다른 사람이 조종 중이라서 해체 할수 없습니다. 
	MSG_SIEGEGUNREMOVECANCEL,		//해체가 취소 되었습니다. 

	MSG_SIEGEGUNSET,				//이미 공성 병기가 설치되어 있습니다
	MSG_SIEGEGUNNOSKILL,			//공성 병기 조종 스킬이 필요합니다.
	//130
	MSG_SIEGEGUNGUILD,				//다른 곳에 이미 "%s"부의 공성 병기가 존재합니다.   "s", szGuildName	//130
	MSG_SIEGEGUNUNSETIMPOSSIBLE,	//지금 해체가 불가능 합니다. 
	MSG_SIEGEGUNNOTGUILD,			//다른부의 병기는 해체할 수 없습니다.
	MSG_SIEGEGUNNORELATION,			//공성에 참여하는 부와 그 동맹부만 설치가 가능합니다.
	MSG_CANTSIEGEITEMUSE,			// "%s"아이템은 점령전이 시작되어야 사용이 가능합니다.
	MSG_LONGRESTUSER,				// 휴면유저
	MSG_RETURNCOOLTIME,				// 거점이동의 재사용 가능 시간이 "%d"분 남았습니다. w:남은 시간(분단위)
	MSG_MIXING,						// "b"	0:아이템부족/1:조합실패
	MSG_TOOHONBOSSPOP,				// 투혼이벤트 사루즈미(보스) 팝
	//140
	MSG_FIREBALL,					// "b" 0:장착성공, 1 장착 실패, 2 장착대상아님 HWC
	MSG_PLAYTIMEWARNING,			// 플레이시간 1시간 경과시 경고
	MGS_NEWDOOROPEN,	//***(문이름)가 열립니다.	//"w" NPC ID
	MGS_NEWDOORCLOSE,	//***(문이름)가 닫힙니다.	//"w" NPC ID
	MSG_EVENT_NOTLEVEL,	// 레벨 미달
	MSG_EVENT_FULL,		// 선착순 지남
	MSG_EVENT_RECEIVE,	// 이미 받음
	MSG_LIMIT_BATTLEFIELD,			// 전장 진행중일때에는 불가능합니다.
	MSG_BATTLEINPARTY,		// 파티에 전장참여 인원이 있어 이동불가
	MSG_NOPARTYWITHENEMY,			// 전장 참여중일때에는 상대편과 파티가 불가능 합니다.
	//150
	MSG_EVENT_SNOWFALL, // 천하타설 이벤트 수정이 1000개 모아져 눈이내릴때
	MSG_ADDBSTATEX,					// 
	MSG_HONORPOINT,			//"ds" 점수, 캐릭이름
	MSG_BEFOREWARREMAINSEC,			// "bd"	b:전장종류 (1:거점파괴 2:군주보호..) d:남은 초

	MSG_PRAYUSED,		// 기원의상 : 다른 플레이어가 이미 캐스팅 중.
	MSG_PRAYOPEN,		// 기원의상 : 캐스팅 중.
	MSG_PRAYOPENED,		// 기원의상 : 캐스팅 완료.
	MSG_PRAYCANCELED,	// 기원의상 : 캐스팅 취소 
	MSG_PRAYALREADY,    // 기원의상 : 상대팀이 이미 기원 상태.
	MSG_PRAYSTATENOTUSE, // 기원상태 아이템 사용 X
	MSG_REVIVALITEMNOTUSE, // 군주가 부활 아이템을 사용하려 할때. 
	MSG_REVIVALSKILLNOTUSE,	// 부활 스킬 사용시 대상이 군주보호에 참여중인 군주 일때.
};

// 길드원 등급.
enum GUILD_MEMBER_CLASS { 
	GUILD_LEADER = 1, 
	GUILD_SUBLEADER,
	GUILD_CENTURION,
	GUILD_TEN,
	GUILD_REGULAR,
	GUILD_TEMP,
	GUILD_CONSENT,
	GUILD_CONSENT_WAIT,
};

// 길드원스킬.
enum GUILD_SKILL {
	GUILD_CONFLUX,			// 합류.
	GUILD_BANISH,			// 추방.
	GUILD_NOTICE,			// 공지.
	GUILD_APPOINTMENT,		// 임명.
	GUILD_TITLE,			// 직위명.
};

#define GUILD_SUBLEADER_DEFAULT_SKILL	(1<<GUILD_CONFLUX) + (1<<GUILD_BANISH)
#define GUILD_CENTURION_DEFAULT_SKILL	(1<<GUILD_CONFLUX)
#define GUILD_TEN_DEFAULT_SKILL			(1<<GUILD_CONFLUX)
#define GUILD_REGULAR_DEFAULT_SKILL		0
#define GUILD_TEMP_DEFAULT_SKILL		0


enum GUILD_TYPE
{
	G_MSG,								// 메세지.(에러같은...)
	G_CREATE_TRIAL,						// 길드생성 시작.
	G_CREATE_CONSENT,					// 길드 동의창.
	G_CREATE_CONSENT_ANSWER,			// 길드 생성 동의 응답.
	G_CREATE_CONSENT_COMPLET,			// 길드생성 동의서 완료.
	G_CREATE_GUILDNAME,					// 길드생성 이름설정.
	G_MEMBERINFO,						// 길드원 정보.
	G_ADMININFO,						// 길드관리창.
	G_BASICINFO,						// 길드기본창.
	G_VIEW,								// 길드 이름과 문장을 보이다/안보이다
	G_SECESSION,						// 길드탈퇴.
	G_TODAYMESSAGE,						// 길드공지
	G_EXPADD,							// 길드경험치추가
	G_SETSKILLABLE,						// 길드등급별 스킬 셋.
	G_CONFLUX,							// 길드합류창
	G_CONFLUX_ANSWER,					// 길드합류 응답.
	G_DISSOLUTION,						// 길드 해체.
	G_ALLIANCEINFO,						// 동맹 정보.
	G_ALLIANCEANSWER,					// 동맹 신청 응답.
	G_WAR_DECLARE,						// 공성 선포.
	G_WAR_DECLARE_LIST,					// 공성 수성&공성 길드 리스트.
	G_WAR_UNFURL,						// 점령전 깃발 세우기.
	G_WAR_UNFURL_CANCEL,				// 점령전 깃발 세우기 취소.
	G_CASTLEINFO,						// 성 정보 보기.
	G_TAX_RATE_CONTROL,					// 성 세율 조정.
	G_CASTLEGATENPC,					// 성 NPC portal
	G_CASTLEGATE_SETLIMIT,				// 성문 NPC 사용제한 셋.
	G_TAX_LEVY,							// 세금 징수.
	G_CHECK_STANDARD,				// 생성가능 길드깃발 확인
	G_SET_STANDARD,			// 길드깃발 생성
};

enum GUILD_MSG
{
	GMSG_CONTINUE,
	GMSG_ERROR,
	GMSG_CONNECT,						// 뭐뭐님이 접속하였습니다.
	GMSG_DISCONNECT,					// 뭐뭐님이 접속을 끊었습니다.
	GMSG_NOMEMBER,						// 길드원이 아닙니다.
	GMSG_TODAYMESSAGE,					// 길드메세지를 보낸다.(오늘의 길드공지:뭐뭐뭐뭐~~~)
	GMSG_DATE_LIMIT,					// 뭐뭐님은 **/**/** **:** 이 지나야 길드합류나 길드생성이 가능합니다.
	GMSG_CREATE_LEVEL_LIMIT,			// 길드생성 레벨이 부족합니다.
	GMSG_CREATE_MONEY_LIMIT,			// 길드생성 비용이 부족합니다.
	GMSG_CREATE_POINT_LIMIT,			// 길드생성 공헌도가 부족합니다.
	GMSG_CREATE_NOPARTY,				// 길드생성시는 파티가 구성되야 합니다.
	GMSG_CREATE_NOHEAD,					// 부는 오직 일행의 장만이 선포할 수 있습니다. 현재 당신은 일행의 장이 아닙니다.
	GMSG_CREATE_NOFULLPARTY,			// 최소 6인의 일행이 찾아와야 부의 선포가 가능합니다.
	GMSG_CREATE_ALREADYMEMBER,			// 일행 구성원 중 누군가가 이미 다른 부에 소속되거나 길드생성중이기 때문에 부의 선포가 불가능합니다
	GMSG_CREATE_CONSENTWAIT,			// (임시길드원들의 동의를 기다린다.)
	GMSG_CREATE_ALREADYCANCEL,			// 이미 길드생성이 취소됬습니다.
	GMSG_CREATE_ALREADYCONSENT,			// 이미 길드동의를 했습니다.
	GMSG_CREATE_CONSENT,				// 길드생성 동의합니다/동의하지 않습니다.
	GMSG_CREATE_INVALID_NAME,			// 사용할 수없는 길드이름입니다.
	GMSG_CREATE_SAMENAME,				// 이미 사용하고 있는 부의 이름입니다. 다시 결정해주세요.
	GMSG_CREATE_NOT_ALLCONSENT,			// 길드 동의서가 완료되지 않았습니다.
	GMSG_CREATE_COMPLET,				// 뭐뭐길드가 결성되었습니다.
	GMSG_LACK_SKILL,					// 권한이 없습니다.
	GMSG_CONFLUX_TEMPMEMBERFULL,		// 임시길드원수을 이 이상 뽑을 수 없습니다.
	GMSG_CONFLUX_DISCONNECT,			// 접속하지 않거나 없는 플레이어입니다.
	GMSG_CONFLUX_ALREADYMEMBER,			// 대상 플레이어는 이미 다른 부에 소속되거나 길드생성 동의중입니다.
	GMSG_CONFLUX_OFFER_DISCONNECT,		// 가입신청한 플레이어가 비접속상태입니다.
	GMSG_CONFLUX_SENDOK,				// 뭐뭐님에게 부 가입을 권유하였습니다.
	GMSG_CONFLUX_CANCEL,				// 뭐뭐님께서 당신의 부 가입 권유를 거절하셨습니다.
	GMSG_CONFLUX_U_ALREADYMEMBER,		// 당신은 이미 다른 부에 소속되거나 길드생성 동의중입니다.
	GMSG_CONFLUX_COMPLET,				// 길드에 합류되었습니다.
	GMSG_SECESSION_LEADER,				// 길마는 탈퇴할 수 없습니다.
	GMSG_SECESSION,						// 뭐뭐님이 길드에서 탈퇴하였습니다.
	GMSG_SECESSION_COMPLET,				// 길드 탈퇴가 되었습니다.
	GMSG_BANISH_LEADER,					// 길마는 추방할 수 없습니다.
	GMSG_BANISH,						// 뭐뭐님은 길드에서 추방당했습니다.
	GMSG_BANISH_COMPLET,				// 추방이 되었습니다.
	GMSG_APPOINTMENT_LEADER,			// 길마는 직위를 바꿀수도 임명할수도 없습니다.
	GMSG_APPOINTMENT_FULL,				// 더 이상 임명할 수 없는 직위입니다.
	GMSG_SUBLEADER_DATE_LIMIT,			// 부길마는 ??/??/?? ??:?? 이후에 임명이 가능합니다.
	GMSG_APPOINTMENT_MEMBERFULL,		// 길드인원이 가득찾습니다.
	GMSG_APPOINTMENT_SAMECLASS,			// 임명할려는 직급과 현재의 직급이 같습니다.
	GMSG_APPOINTMENT_COMPLET,			// 임명이 되었습니다.
	GMSG_DISSOLUTION,					// 길드가 해체되었습니다.
	GMSG_DISSOLUTION_COMPLET,			// 길드가 해체 완료되었습니다.
	GMSG_TITLE_INVALID,					// 사용할 수 없는 명칭입니다.
	GMSG_TITLE_COMPLET,					// 명칭 변경이 완료되었습니다.
	GMSG_SETSKILL_COMPLET,				// 길드 직위기능 설정이 완료되었습니다.
	GMSG_SETSTANDARD_COMPLET,			// 길드 문장 설정이 완료되었습니다.
	GMSG_SETCONNECTTELL_SAME,			// 접속여부 설정값이 현재와 같습니다.
	GMSG_SETCONNECTTELL_COMPLET,		// 접속여부 설정 변경이 완료되었습니다.
	GMSG_HAVE_NO_EXP,					// 남은 경험치가 없습니다.
	GMSG_EXPADD,						// 뭐뭐 경험치를 투자했습니다.
	GMSG_EXPFULL,						// 부경험치를 더이상 투자 할 수 없습니다
	GMSG_MEMBERLEVELUP,					// 멤버 레벨업시 길드원들에게 알린다.
	GMSG_UNKNOWN_CLASS,					// 알 수 없는 직급명입니다.
	GMSG_GUILDNOTICE_INVALID,			// 길드공지에는 특수문자를 사용할 수 없습니다.

	GMSG_SKILL_LEVEL_LIMIT,				// 길드레벨이 부족합니다.
	GMSG_ALLIANCE_U_ALREADY,			// 동맹신청은 비동맹중이거나 동맹의맹주여야 합니다.
	GMSG_ALLIANCE_INVALID_DATE,			// 동맹신청은 1일과 15일사이여야 합니다.
	GMSG_ALLIANCE_DISCONNECT,			// 존재하지 않는 부거나 군주가 접속해있지 않습니다.
	GMSG_ALLIANCE_ALREADY,				// 이미 동맹중입니다.
	GMSG_ALLIANCE_OFFER,				// 뭐뭐부가 뭐뭐/뭐뭐/뭐뭐 뭐뭐:뭐뭐 까지 동맹을 신청했습니다. 수락할래?
	GMSG_ALLIANCE_OFFER_SEND,			// 뭐뭐부에게 동맹을 신청했습니다.
	GMSG_ALLIANCE_FULL,					// 더 이상 동맹을 할 수가 없습니다.
	GMSG_ALLIANCE_COMPLET,				// 뭐뭐부는 뭐뭐부의 동맹에 뭐뭐/뭐뭐/뭐뭐 뭐뭐:뭐뭐 까지의 동맹에 참여했습니다.
	GMSG_ALLIANCE_CANCEL,				// 뭐뭐부는 동맹을 거절했습니다.
	GMSG_ALLIANCE_EXPIRE,				// 동맹 기간이 종료되었습니다.
	GMSG_ALLIANCE_NO_PERIOD,			// 동맹신청을 할 수 없는 기간입니다.
	GMSG_ALLIANCE_POSTPONE,				// 점령전을 선포시 동맹기간이 점령전중이므로 뭐뭐/뭐뭐/뭐뭐 뭐뭐:뭐뭐 까지 연장됩니다.

	GMSG_WARDECLARE_NO_PERIOD,			// 점령전 신청기간이 아닙니다.
	GMSG_WARDECLARE_NO_LEADER,			// 동맹시는 맹주만이 점령전을 신청할 수 있습니다.
	GMSG_WARDECLARE_LORD,				// 당신의 성입니다.
	GMSG_WARDECLARE_ALLIANCE,			// 성주와 동맹관계입니다.
	GMSG_WARDECLARE_MONEY_LIMIT,		// 점령전 비용이 부족합니다.
	GMSG_WARDECLARE_ALREADYDECLARE,		// 이미 점령전을 선포하였습니다.
	GMSG_WARDECLARE,					// 뭐뭐부가 뭐뭐성에 점령전을 선포했습니다.
	GMSG_WARDECLARE_COUNT_OVER,			// 더 이상 점령전 신청을 받을 수 없습니다.

	GMSG_WARBEGIN,						// 뭐뭐성의 점령전이 시작됬습니다.
	GMSG_WAREND_WIN,					// 뭐뭐성의 점령전에 승리하였습니다.
	GMSG_WAREND_LOSE,					// 뭐뭐성의 점령전에 패하였습니다.
	GMSG_WARUNFURL_NO_DECLARE,			// 점령전을 선포한 곳이 아닙니다.
	GMSG_WARUNFURL_ALREADY,				// 이미 기를 세우는 중입니다.
	GMSG_WARUNFURL_STANDARDLIVE,		// 깃발이 파괴되기 전에는 설치할 수 없습니다.
	GMSG_WAR_UNFURLSTANDARD_BEGIN,		// 기를 새우기 시작.
	GMSG_WAR_UNFUELCOMPLET,				// XXX 부가 XXX 성에 깃발을 설치하였습니다.

	GMSG_TAX_NO_LORD,					// 성주가 아닙니다.
	GMSG_TAX_DEVIATE,					// 세율조정 범위를 벗어났습니다.
	GMSG_TAX_SET_RATE_COMPLET,			// 세율조정이 완료됬습니다.

	GMSG_GATE_LIMIT,					// 이동할 수 없습니다.
	GMSG_SET_GATELIMIT_COMPLET,			// 성문 제한 설정이 완료되었습니다.

	GMSG_WAR_NOPERIOD,					// 점령전중이 아닙니다.
	GMSG_WAR_NO_LEADER,					// 동맹의 맹주가 아닙니다.
	GMSG_WAR_NO_RELATION,				// 점령전과 관련이 없는 관계입니다.
	GMSG_CONFLUX_NOPERIOD,				// 부 가입 권유는 점령전에 공성 혹은 수성측으로 참여 중인 부는 점령전기간, 점령전 준비기간에는 할 수 없습니다.
	GMSG_WARUNFURL_U_ALREADY,			// 다른 부가 먼저 깃발을 설치하는 중입니다. 지금은 설치할 수 없습니다.

	GMSG_GATE_LIMIT_GUILD,				// 성을 점령한 부의 구성원만 사용할 수 있습니다.
	GMSG_GATE_LIMIT_ALLIANCE,			// 성을 점령한 부의 구성원과 동맹 부의 구성원만 사용할 수 있습니다

	GMSG_WAR_BROKEN_STANDARD,			// XXX성의 XXX 부의 깃발이 파괴 되었습니다 bbdsb
	GMSG_WAR_BROKEN_GATE,				// XXX성의 뭐뭐 성문이 파괴 되었습니다
	GMSG_WAR_TIME,						// 점령전 종료시간이 뭐뭐(분/초) 남았습니다.
	GMSG_TAX_LEVY,						// 세금이 ??전 징수되었습니다.
	GMSG_SETSTANDARD_FAILED,		// 부 문장 중복 (문장 설정 실패)
	GMSG_SETSTANDARD_FAILEDBYLEVEL,		// 설정 길드레벨 제한
	GMSG_WAR_LORDDECLARE_TIME,			// 군주선언남은 시간	bbbb
	GMSG_WAR_EXTENDED_TIME,				// 공성전 연장			bb
	GMSG_WAR_CHANGELORD,				// 성주가 바뀌었습니다. bbds
	GMSG_DISSOLUTION_FAIL,			// 성을 점령한 부나 공성전을 신청한 부는 해체를 할 수 없습니다.
	GMSG_DISSOLUTION_FAIL_BATTLE,			// 전장참여를 신청한 부는 해체를 할 수 없습니다.
	GMSG_SECESSION_FAIL_BATTLE,			// 전장참여리스트에 등록된 길드원은 탈퇴가 불가능합니다.
};

enum PK_MSG
{
	PKMSG_ONPK,                         //b  1당신은 자객 상태가 되었습니다.
	PKMSG_ONPKAROUND,                   //b  1근처에 누군가가 탈을 사용하고 있습니다.
	PKMSG_ONPKDIE,                      //b  1당신은 자객 상태에서 죽임을 당하였습니다.
	PKMSG_PKDIE,                        //bd 1당신은 자객 XXX에게 죽임을 당하였습니다.
	PKMSG_OFFPK,                        //b  1당신은 자객 상태를 해제하였습니다.
	PKMSG_ONPKKILL,                     //bd 1당신은 자객 XXX 를 척살하여 그명성을 남겼습니다. 당신의 공헌은 방에 공고 됩니다.
	PKMSG_LIMIT_OFFPKTICK,              //b  1자객 상태는 선언 후 1시간, 혹은 마직막 공격 후 180초 동안 상태변경을 할수 없습니다.	
	PKMSG_LIMIT_TRADESELF,              //b  1자객 상태에서는 다른 사람에게 거래를 신청할 수 없습니다. 먼저 자객 상태를 해제해야 합니다. 
	PKMSG_LIMIT_TRADEOTHER,             //b  1자객 상태의 대상에게는 거래가 불가능합니다.
};

enum SL_SECONDARY_LOGIN
{
	SL_CREATE_PASSWORD=1,
	SL_LOGIN=0,
	SL_CHANGE_PASSWORD=2,
	SL_RESULT_MSG=3,
};

enum MSL_SECONDARY_MSG
{
	MSL_NONE,
	MSL_WRONG_PWD,
	MSL_PWD_8_DIGIT_NUMBER=3,
	MSL_BLOCK,
	MSL_ALREADY_PWD,
	MSL_CREATE_PWD,
	MSL_SUCCESS,
};

enum MOVE_TYPE
{
	MOVE_ON,
	MOVE_STOP,
};

enum ITEM_FIND_OWNERSHIP
{
	IFO_ANY,
	IFO_MUSTOWN,
	IFO_CANTOWN,
};

#endif
