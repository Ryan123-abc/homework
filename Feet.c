#include<stdio.h>

int main(){
	int chickens;
	int rabbits;
	int feets;
	printf("How many chickens are in the cage? ");
	scanf("%d", &chickens);
	printf("How many rabbits are in the cage? ");
	scanf("%d", &rabbits);
	feets = chickens*2 + rabbits*4;
	printf("There are %d feet in the cage.\n", feets);
}
