#include<stdio.h>

int main()
{
	int AD;
	int ROC;
	printf("Please input a year in AD: ");
	scanf("%d",&AD);
	ROC = AD - 1911;
	printf("AD %d is ROC %d.\n", AD, ROC);
}
