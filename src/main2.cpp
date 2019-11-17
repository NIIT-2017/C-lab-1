#include "task2.cpp"
#include <stdio.h>

void clean_stdin(void) // the option to clear the input buffer
{
	int c;
	do
	{
		c = getchar();
	} while (c != '\n' && c != EOF);
}

int main()
{
	int hour = 0, min = 0;
	printf("Enter time: ");
	scanf("%d %d", &hour, &min);
	clean_stdin();
	char result[50];
	*result =*greet(hour, min);
	printf("%c", result);
	return 0;
}