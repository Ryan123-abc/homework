#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	int dice1;
	int dice2;
	int answer;
	printf("Throwing two dice...\n");
	srand(time(NULL));
	dice1 = rand()%6 + 1;
	dice2 = rand()%6 + 1;
	printf("One dice shows %d and another dice shows %d.\n", dice1, dice2);
	answer = dice1 + dice2;
	printf("The score is %d + %d = %d.\n", dice1, dice2, answer);
}
