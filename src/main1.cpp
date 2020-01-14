#include "task1.h"
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main ()
{
	char gender='0';
	float height=0;
	float weight=0;
	int res=0;
	printf("vvedite pol (w,m):\n");
	scanf("%c", &gender);
	printf("vvedite ves:\n");
	scanf("%f", &weight);
	printf("vvedite rost:\n");
	scanf("%f", &height);
	res=getRecommendation(gender, height, weight);
	if (res==1)
		printf("ves isbytochnyi\n");
	else if (res==-1)
		printf("ves nedostatochnyi\n");
	else 
		printf("ves idealnyi\n");

	return 0;


}