#include <stdio.h>

enum title{
	E,
	D,
	C,
	B,
	A,
	S,
	MONARCH
};

void DailyQuest(){
	
	printf("DAILY QUEST-TRAIN TO BECOME A FORMIDABLE COMBATANT\n");
	printf("--------------GOALS")
	
}

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
