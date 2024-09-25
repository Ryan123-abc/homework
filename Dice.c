#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	int number;
	srand(time(NULL));
	number = rand()%6+1;
	printf("Thorwing the dice.... %d!\n", number);
}
