#include<stdio.h>

int main(){
	int number;
	printf("Please input a two-digit number (10-99): ");
	scanf("%d", &number);
	printf("The reversed number is %d%d!\n", number%10, number/10);
}
