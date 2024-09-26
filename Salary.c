#include<stdio.h>

int main(){
	int payment;
	int hour;
	int salary;
	printf("How much is the hourly payment? ");
	scanf("%d", &payment);
	printf("How many hours did you work in the last month? ");
	scanf("%d", &hour);
	salary = payment * hour;
	printf("Your salary is %d.\n", salary);
}
