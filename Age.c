#include<stdio.h>

int main(){
	int a;
	int b;
	int c;
	printf("Please input the current year: ");
	scanf("%d", &a);
	printf("Please input the year of your birthday: ");
	scanf("%d", &b);
	c = a - b;
	printf("You are %d years old.\n", c);
}
