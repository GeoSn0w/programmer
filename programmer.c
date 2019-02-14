//Life of a programmer
//A simple programming joke by GeoSn0w (@FCE365)

#include <System/Motion>
#include <System/Vital/Heartbeat>
#include <Systen/Neural>
#include <System/Brain/PublicClass>
#include <System/AutoLife>
#include <System/HumanCommons.h>
#include "social.h"
#include "society.h"

#define elevation_ratio  0x10
#define seedRandomness 0xfffffff0076b0b08
#define HairColor rand(human->AvailableColors);

bool sleepModeReq = false;
bool lowEnergyMode = false;
bool kVitalSignsEntitlement = false;
bool kSMEntitlement = false;
bool kCellularLevelSanityEntitlement = false;

#define OrganismType Human
#define EvolutionLevel Homo Sapiens
#define RelativePath "/Universe/MilkyWay/Earth/"

int wakeUpSelfTest(){
		if (checkVitalSigns() == 0 && !sleepModeReq){
			kVitalSignsEntitlement = true;
			if (checkStateOfMind() == 0){
				kSMEntitlement = true;
				if (cellularLevelSanity == 0 && !sleepModeReq && !lowEnergyMode){
					kCellularLevelSanityEntitlement = true;
					return 0;
				}
			}
		} else {
			die(); //If safe mode is entered in less than 30 minutes, it may override the entitlements and wake();
			return -1;
		}
}
int beginSlowWakeUp(int WithStateOfMind){
	setStateOfMind(WithStateOfMind);
	initBrainActivity();
	stopStrangeAssDream(); //Note no sanity checks.
	return 0;
}
int returnHome(){
	if (hasPets && notIdiot){
		feedPets(); //Inherited from HumanCommons.h
	}
	sleep(); // You are too tired to do anything else
	return 0;
}
int continueTheDay(){
	int current_hour;
	if (workDay){
		beginWorkAsync();
		if (boredAsBalls && bossIsNotHere){
			//smokeWeedEveryDay();
			playTetris();
		} else {
			work(); // Pay rent
			if (blood_structure != pure_caffeine){
				drinkMoreCoffee();
			}
			setProcrastinationSeed(rand);
			fuckMyLife();
		}
		if (CodeWorks == FALSE) {
				getDepressed();
				drinkBleach();
		} else {
				continueCoding();
	}

		if (mood == 3 && bossIsAnnoying){
			//beginProcedureToKillBoss(now);
			suckItUpAndContinue();
		} else {
			drinkCoffee();
			beHappy();
			work();
		}
		initRandomThoughts(rand);
		while (current_hour < 12){
			energy -= 1;
			drinkMoreCoffee();
			doEnergyCheck();
		}
		if (waitForWorkDayEnd() == 0){
			returnHome();
		}
	} else {
		dontWorryBeHappy(rand);
	}
	return 0;
}
int main(){
	if (wakeUpSelfTest() == 0){
		//Prepare to exit Sleep mode. Has to be done in steps.
		if (REM) { sendSystemInterrupt(3); setEnergyLevel(100); }
		if (DeepSleep) { sendSystemInterrupt(6); setEnergyLevel(80); }
		if (SlowWaveSleep) { sendSystemInterrupt(5); setEnergyLevel(50); }
		//We have to reset the mood before we set a random state of mind;
		beginDeHumanization(clear);
		if (current_mood == prev_mood_snapshot){
			ShaiHuludMe() //Nothing can contain Shai Hulud. Actually, this forces a full clear() on the current mood.
		} else {
			beginSlowWakeUp();
			initializeBrainConnect(limbs, senses);
			setSkinSensitivity(MAX_DEFAULT);
			awakeFromSlumber(); //Triggers the sudden wake up moment by killing the sleep thread.
		}
		if (awake){
			if (Brain.CheckNeeds.BRM == true){
				clogTheToilet();
			} else {
				clogTheToiletWithPostpone(rand);
			}
			if (beginWakeUpCleanupRoutine() == 0){
				if (checkCoffeeSupplies() != 0){
					brewCoffee();
					continueTheDay();
				}
			}
		}
	}
	return 0;
}
