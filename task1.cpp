#include <stdio.h>

int Women(float height, float weight)
{
	if ((height - 110) > weight)
	{
		printf("Get fat!\n");
		return 1;
	}
	else if ((height - 110) < weight)
	{
		printf("lose weight!\n");
		return 1;
	}
	else
		printf("Normal\n");
		return 0;
}
int Men(float height, float weight)
{

	if ((height - 100) > weight)
	{
		printf("Get fat!\n");
		return 1;
	}
	else if ((height - 100) < weight)
	{
		printf("lose weight!\n");
		return 1;
	}
	else
	printf("Normal\n");
	return 0;
}