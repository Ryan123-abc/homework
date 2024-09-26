#include <stdio.h>

int main()
{
	int length;
	int width;
	int height;
	int volume;
	printf("Please input the length: ");
	scanf("%d",&length);
	printf("Please input the width: ");
	scanf("%d",&width);
	printf("Please input the height: ");
	scanf("%d",&height);
	volume = length * width * height;
	printf("The volume is %dx%dx%d = %d.\n", length, width, height, volume);
}

