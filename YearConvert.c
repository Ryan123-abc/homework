#include<stdio.h>

int main()
{
	int AD;
	int ROC;
	printf("Please input a year in ROC: ");
	scanf("%d",&ROC);
	AD = ROC + 1911;
	printf("ROC %d is AD %d.\n", ROC, AD);
}
