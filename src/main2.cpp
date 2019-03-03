#include <stdio.h>
#include "task2.h"


int main()
{



	int tmin = 0;
	int thour = 0;
	int tsec = 0;
	printf("Enter a time hh:mm :");
	scanf("%d:%d:%d", &thour, &tmin, &tsec);
	printf(greet(thour, tmin));



	return 0;



}
