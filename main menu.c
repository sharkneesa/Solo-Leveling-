	#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

typedef enum title{
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
    
enum bmi_category {
    UNDERWEIGHT,
    NORMAL_WEIGHT,
    OVERWEIGHT,
    OBESE_1,
    OBESE_2,
    OBESE_3
};
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
    PLANK
} WorkoutType;

char *workoutNames[] = {
    "Push-Up",
    "Squat",
    "Plank"
};// tolong ditambahkan siapapun, gadiza deh sekalian

typedef struct {
    const char *name;
    WorkoutType type;
    int targetAmount;   // reps atau detik
    int expReward;
    const char *description;
    int completed;      // 0 = belum, 1 = sudah
} Quest;

enum bmi_category getBMICategory(float bmi) {
    if (bmi < 18.5f) return UNDERWEIGHT;
    
}// shan

enum title updateRankByLevel(int level, enum title current) {
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
    	dailyQuests[0].name = "Fundamental Push-Ups";
        dailyQuests[0].type = PUSH_UP;
        dailyQuests[0].targetAmount = 8 + level + rankBonus;
        dailyQuests[0].expReward = 15 + level * 5;
        dailyQuests[0].description = "Push-up ringan untuk massa otot pemula.";
        dailyQuests[0].completed = 0;
    } else if (bmiCat == NORMAL_WEIGHT) {
    } else if (bmiCat == OVERWEIGHT) {
	} else {
        // Semua obese sama
}

void showDailyQuests() {
	
	printf("DAILY QUEST-TRAIN TO BECOME A FORMIDABLE COMBATANT\n");
	printf("-----------------------GOALS-----------------------\n\n");
	printf("1.[] ");
	printf("2.[] ");
	printf("3.[] ");
	printf("4.[] ");
	printf("5.[] ");
	
	
}//shan

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
	printf("------------------------------------------\n");
	
	}while(choice!=4);
	

	
	
	
	return 0;
	
	
	
	
}
