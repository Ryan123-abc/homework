#include<stdio.h>

int main(){
	int x, y, answer;
	printf("Please input x: ");
	scanf("%d", &x);
	printf("Please input y: ");
	scanf("%d", &y);
	answer = (2*x + 3*y);
	printf("( 2x + 3y ) = %d.\n", answer);
}
