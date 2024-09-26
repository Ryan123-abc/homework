#include<stdio.h>

int main(){
	int x, y, answer;
	printf("Please input x: ");
	scanf("%d", &x);
	printf("Please input y: ");
	scanf("%d", &y);
	answer = (4*x + 2*y);
	printf("( 4x + 2y ) = %d.\n", answer);
}
