#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

typedef enum{
	E,
	D,
	C,
	B,
	A,
	S,
	MONARCH
}rank;

char *titleNames[] = {
    "E",
    "D",
    "C",
    "B",
    "A",
    "S",
    "MONARCH"};
    
typedef enum{
    UNDERWEIGHT,
    NORMAL_WEIGHT,
    OVERWEIGHT,
    OBESE_1,
    OBESE_2,
    OBESE_3
}bmi_category;
float calculateBMI(float height, float weight) {
	bmi = weight / (height * height);
}//aya

char *bmiCategoryNames[] = {
    "Underweight",
    "Normal Weight",
    "Overweight",
    "Obese (Type 1)",
    "Obese (Type 2)",
    "Obese (Type 3)"
};
typedef enum {
    PUSH_UP,
    SQUAT,
    PLANK,
	SWIMMING,
    CYCLING,
    CHAIR_SQUAT,
    WALL_PUSHUP,
    LUNGE,
    BICYCLE_CRUNCH,
    JOGGING,
    WALK,
    BURPEE
} WorkoutType;

char *workoutNames[] = {
    "Push-Up",
    "Squat",
    "Plank",
    "Swimming/Water Aerobics",
    "Cycling",
    "Chair Squats",
    "Wall Push Ups",
    "Lunges",
    "Bicycle Crunches"
};// tolong ditambahkan siapapun, gadiza deh sekalian

typedef struct {
    const char *name;
    WorkoutType type;
    int targetAmount;   // reps atau detik
    int expReward;
    const char *description;
    int completed;      // 0 = belum, 1 = sudah
} Quest;

bmi_category getBMICategory(float bmi) {
    if (bmi < 18.5f) return UNDERWEIGHT;
	else if (bmi < 25.0f) return NORMAL_WEIGHT;
    else if (bmi < 30.0f) return OVERWEIGHT;
    else if (bmi < 35.0f) return OBESE_1;
    else if (bmi < 40.0f) return OBESE_2;
    else return OBESE_3;    
}// shan

title updateRankByLevel(int level, enum title current) {
	enum title newRank = currentRank;

    if (level >= 30)      newRank = MONARCH;
    else if (level >= 25) newRank = S;
    else if (level >= 20) newRank = A;
    else if (level >= 15) newRank = B;
    else if (level >= 10) newRank = C;
    else if (level >= 5)  newRank = D;
    else                  newRank = E;

    return newRank;
}//farrel

void generateDailyQuests(int level, enum bmi_category bmiCat, enum title rank) {
    int rankIndex = (int)rank;      // E=0, D=1, C=2, ...
    int rankBonus = rankIndex * 2;  // tiap naik rank +2 reps/detik

    if (bmiCat == UNDERWEIGHT) {
    	dailyQuests[0].name = "Lower Body Mass Builder";
        dailyQuests[0].type = SQUAT;
        dailyQuests[0].targetAmount = 15 + level + rankBonus; 
        dailyQuests[0].expReward = 15 + level * 5; 
        dailyQuests[0].completed = 0; 
        dailyQuests[0].description = "Focused squats to increase lower body muscle mass.";

        dailyQuests[1].name = "Effective Cycling Workout";
        dailyQuests[1].type = CYCLING;
        dailyQuests[1].targetAmount = 30 + level * 5 + rankBonus; // minutes
        dailyQuests[1].expReward = 10 + level * 4; 
        dailyQuests[1].completed = 0;
        dailyQuests[1].description = "Blend endurance, speed, and stamina, for core stability.";

        dailyQuests[2].name = "Cardio Session";
        dailyQuests[2].type = JOGGING;
        dailyQuests[2].targetAmount = 30 + level * 5 + rankBonus; // minutes
        dailyQuests[2].expReward = 25 + level * 7; 
        dailyQuests[2].completed = 0;
        dailyQuests[2].description = "Moderate to intense long jogs.";

        dailyQuests[3].name = "Daily Supplemental Movement";
        dailyQuests[3].type = BURPEE;
        dailyQuests[3].targetAmount = 15 + level * 5 + rankBonus; // how maby times
        dailyQuests[3].expReward = 25 + level * 7; 
        dailyQuests[3].completed = 0;
        dailyQuests[3].description = "High-intensity burpees for explosive stamina";
    } else if (bmiCat == NORMAL_WEIGHT) {
        dailyQuests[0].name = "Endurance Run Challenge";
        dailyQuests[0].type = RUNNING;
        dailyQuests[0].targetAmount = 10 + level + rankBonus; // minutes
        dailyQuests[0].expReward = 15 + level * 5; 
        dailyQuests[0].completed = 0; 
        dailyQuests[0].description = "Test your stamina with a standard endurance run.";

        dailyQuests[1].name = "Core Endurance Hold";
        dailyQuests[1].type = PLANK;
        dailyQuests[1].targetAmount = 75 + level * 5 + rankBonus; // seconds
        dailyQuests[1].expReward = 10 + level * 4; 
        dailyQuests[1].completed = 0;
        dailyQuests[1].description = "Standard core hold to increase endurance.";

        dailyQuests[2].name = "Daily Supplemental Movement";
        dailyQuests[2].type = BURPEE; // higher intensity for fitter category
        dailyQuests[2].targetAmount = 20 + level * 5 + rankBonus; // how many times
        dailyQuests[2].expReward = 25 + level * 7; 
        dailyQuests[2].completed = 0;
        dailyQuests[2].description = "High-intensity burpees for explosive stamina.";

        dailyQuests[3].name = "Supported Lunges (Holding a chair/wall)";
        dailyQuests[3].type = LUNGE;
        dailyQuests[3].targetAmount = 30 + level * 5 + rankBonus; // 
        dailyQuests[3].expReward = 25 + level * 7; 
        dailyQuests[3].completed = 0;
        dailyQuests[3].description = "Focus on core to build up full-range lunges";
    } else if (bmiCat == OVERWEIGHT) {
        dailyQuests[0].name = "Moderate Push-Ups";
        dailyQuests[0].type = PUSH_UP; 
        dailyQuests[0].targetAmount = 10 + level + rankBonus;
        dailyQuests[0].expReward = 15 + level * 5; 
        dailyQuests[0].description = "Moderate push-ups to build supporting strength.";
        dailyQuests[0].completed = 0;

        dailyQuests[1].name = "Low-Joint Exercise";
        dailyQuests[1].type = LUNGE;
        dailyQuests[1].targetAmount = 30 + level * 5 + rankBonus; // how many times
        dailyQuests[1].expReward = 10 + level * 4; 
        dailyQuests[1].description = "Focus on core to build up full-range lunges.";
        dailyQuests[1].completed = 0;

        dailyQuests[2].name = "Freestyle Swimming";
        dailyQuests[2].type = SWIMMING;
        dailyQuests[2].targetAmount = 10 + level * 5 + rankBonus; // laps
        dailyQuests[2].expReward = 25 + level * 7; 
        dailyQuests[2].description = "Ideal calorie burn.";
        dailyQuests[2].completed = 0;

        dailyQuests[3].name = "Effective Cycling Workout";
        dailyQuests[3].type = CYCLING;
        dailyQuests[3].targetAmount = 30 + level * 5 + rankBonus; // minutes
        dailyQuests[3].expReward = 25 + level * 7; 
        dailyQuests[3].completed = 0;
        dailyQuests[3].description = "Blend endurance, speed, and stamina, for core stability";
	} // gadiza
	else {

		dailyQuests[0].name = "Swimming/Water Aerobics";
        dailyQuests[0].type = SWIMMING;
        dailyQuests[0].targetAmount =  10+ level + rankBonus;
        dailyQuests[0].expReward = 30 + level * 5;
        dailyQuests[0].description = "Since water supports your weight, it'll reduce joint strain.";
        dailyQuests[0].completed = 0;

        dailyQuests[1].name = "Cycling";
        dailyQuests[1].type = CYCLING;
        dailyQuests[1].targetAmount = 15 + level + rankBonus; 
        dailyQuests[1].expReward = 20 + level * 5;
        dailyQuests[1].description = "Using stationary bikes, this is a great joint friendly workout!";
        dailyQuests[1].completed = 0;
        
        dailyQuests[2].name = "Chair Squats";
        dailyQuests[2].type = CHAIR_SQUAT;
        dailyQuests[2].targetAmount = 10 + level + rankBonus; 
        dailyQuests[2].expReward = 10 + level * 5;
        dailyQuests[2].description = "Using a chair to support your weight while squats to reduce strain!";
        dailyQuests[2].completed = 0;
        
        dailyQuests[3].name = "Wall Push Ups";
        dailyQuests[3].type = WALL_PUSHUP;
        dailyQuests[3].targetAmount = 15 + level + rankBonus; 
        dailyQuests[3].expReward = 20 + level * 5;
        dailyQuests[3].description = "A wall to withstand your weight to reduce joint strain!";
        dailyQuests[3].completed = 0;
        
        dailyQuests[4].name = "Lunges";
        dailyQuests[4].type = LUNGE;
        dailyQuests[4].targetAmount = 15 + level + rankBonus; 
        dailyQuests[4].expReward = 10 + level * 5;
        dailyQuests[4].description = "Low physically heavy exercise to ensure joint free pain!";
        dailyQuests[4].completed = 0;
        
        dailyQuests[5].name = "Bicycle Crunches";
        dailyQuests[5].type = BICYCLE_CRUNCH;
        dailyQuests[5].targetAmount = 15 + level + rankBonus; 
        dailyQuests[5].expReward = 15 + level * 5;
        dailyQuests[5].description = "Low physical heavy exercise to ensure joint free pain!";
        dailyQuests[5].completed = 0;
	};
        // Semua obese sama
};

void showDailyQuests() {
	
	printf("DAILY QUEST-TRAIN TO BECOME A FORMIDABLE COMBATANT\n");
	printf("-----------------------GOALS-----------------------\n\n");
	printf("1.[] ");
	printf("2.[] ");
	printf("3.[] ");
	printf("4.[] ");
	printf("5.[] ");
	
	
};//shan

void printStatus(int day,
				char hunter[],
				int level,
                enum title rank,
                int level,
                float exp,
                float maxExp,
                float bmi,
                enum bmi_category bmiCat,
                int day){
	
	printf("==========================================\n");
	printf("              HUNTER STATUS\n");
	printf("==========================================\n");
	printf("DAY           :%s\n",day);
	printf("NAME          :%s\n",hunter);
	printf("LEVEL         :%f\n ",level);
	printf("EXP           :%d/%d\n ",exp,maxExp);
	printf("BMI           :%f\n ",bmi);
	printf("BMI CATEGORY  :%f\n ",bmiCat)
	printf("RANK          :%f\n ",rank);
	printf("------------------------------------------\n");
	
};

void showStatus(char hunter[],
                enum title rank,
                int level,
                float exp,
                float maxExp,
                float height,
                float weight,
                float bmi,
                enum bmi_category bmiCat,
                int day) {
};//varo

void attemptMultiQuest(int *level,
                       float *exp,
                       float *maxExp,
                       enum title *rank) {
                       	
}//farrel

void updateWeight(float *weight,
                  float height,
                  float *bmi,
                  enum bmi_category *bmiCat,
                  int level,
                  enum title rank) {
	printf("Enter your new weight (kg): ");
    scanf("%f", weight);

    *bmi = calculateBMI(height, *weight);
    *bmiCat = getBMICategory(*bmi);

    generateDailyQuests(level, *bmiCat, rank);

    printf("\n[System] Weight and BMI updated.\n");
    printf("New BMI: %.2f (%s)\n", *bmi, bmiCategoryNames[*bmiCat]);
}
}//farrel

int main(){
	
	char hunter[50];
	int age;
	float weight,height;
	int level=0;
	float exp=0;
	char bmi[50];
	int choice;
	
	printf("Hello Hunter Enter Your Name: ");
	scanf("%49[^\n]", hunter); 
	printf("\nWhat is your age?: ");
	scanf("%d",&age);
	printf("\nWhat is your weight: ");
	scanf("%f",&weight);
	printf("\nWhat is your height: ");
	scanf("%f",&height);
	printf("\n[ READING HUNTER DATA ]\n\n");
	sleep(2);
		
	printf("[>         ] 10%\n");
	sleep(1);
	printf("[==>       ] 30%\n");
	sleep(1);
	printf("[====>     ] 50%\n");
	sleep(1);
	printf("[======>   ] 70%\n");
	sleep(1);
	printf("[========> ] 90%\n");
	sleep(1);
	printf("[==========] 100%\n");
	sleep(2);
	printf(">>> SYSTEM MESSAGE <<<\n");
	printf("[ USER VERIFIED ]\n\n");

	sleep(3);
	
	do{
	 
	printf("WELCOME HUNTER %s TO THE SYSTEM!\n",hunter);
	printf(">>>>>>>>>THIS IS DAY %d<<<<<<<<<\n\n",day);
	
	printf("+----------------------------------------------+\n");
	printf("|                      MENU                    |\n");
	printf("+----------------------------------------------+\n");
	printf("| 1.HUNTER STATUS                              |\n");
	printf("| 2.DAILY QUESTS                               |\n");
	printf("| 3.QUESTS                                     |\n");
	printf("| 4.UPDATE WEIGHT                              |\n");
	printf("| 5.CONTINUE TO NEXT DAY                       |\n");
	printf("| 6.EXIT PROGRAM                               |\n");
	printf("+----------------------------------------------+\n");
	printf("\n");
	printf("CHOOSE YOUR ACTION (1-6): ");
	scanf("%d",&choice);
	
	if (choice ==1){

		printStatus(int day,char hunter[],int level,enum title rank,int level,float exp,float maxExp,float bmi,enum bmi_category bmiCat,int day);
		
	};
	
	printf("[WHAT ACTION WOULD YOU LIKE TO DO?]\n");
	printf("| 1.HUNTER STATUS                              |\n");
	printf("| 2.DAILY QUESTS                               |\n");
	printf("| 3.QUESTS                                     |\n");
	printf("| 4.UPDATE WEIGHT                              |\n");
	printf("| 5.CONTINUE TO NEXT DAY                       |\n");
	printf("| 6.EXIT PROGRAM                               |\n");
	printf("------------------------------------------------\n");
	
	}while(choice!=4);
	

	
	
	
	return 0;
	
	
	
	
}
