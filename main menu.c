#include <stdio.h>
#include <stdlib.h>
#include <time.h>

enum title{
	E,
	D,
	C,
	B,
	A,
	S,
	MONARCH
};

char *titleNames[] = {
    "E",
    "D",
    "C",
    "B",
    "A",
    "S",
    "MONARCH"
    
enum bmi_category {
    UNDERWEIGHT,
    NORMAL_WEIGHT,
    OVERWEIGHT,
    OBESE_1,
    OBESE_2,
    OBESE_3
};
float calculateBMI(float height, float weight) {
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
	printf("--------------GOALS")
	
}//shan

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
}//varo

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
}//farrel

int main(){
	
	char hunter[50];
	int choice;
	int level=0;
	float exp=0;
	char somatotype[50];
	
	
	printf("Hello Hunter Enter Your Name: \n");
	scanf("%[^\\n]%*c", &hunter); 
	printf("What is your Somatotype: \n");
	printf("")
	printf("Hello %s Do you have any health restrictions (yes=1/no=2): \n",hunter);
	scanf("%d",&choice);
	
	printf("Welcome Hunter %s to the System!",hunter);
	
	printf("================ STATUS ================\n");
	printf("----------------------------------------\n");
	printf("Name      : %s      |Title      : %d\n",hunter,title);
	printf("Level     : %d      |EXP        : %f\n",level,exp);
	printf("Strength  : %f      |Endurance  : %f\n");
	printf("Balance   : %f      |Flexibility: %f \n");
	printf("Somatotype: %s      |Mobility   : %f\n");
	
	printf("         QUEST INFO\n");
	
	
	
	return 0;
	
	
	
	
}
