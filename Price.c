#include<stdio.h>

int main(){
	int price;
	int quantity;
	int total;
	printf("Please input the price: ");
	scanf("%d", &price);
	printf("Please input the quantity: ");
	scanf("%d", &quantity);
	total = price * quantity;
	printf("The total price is NT$%d.\n", total);
}

