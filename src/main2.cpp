#include "task2.h"

int main()
{
	//time_t now = time(NULL);

	const char* tod;
	time_t now;
	time(&now);
	struct tm* t = localtime(&now);	// F12 для просмотра tm
	printf("%02d:%02d:%02d\n",
		t->tm_hour,
		t->tm_min,
		t->tm_sec);

	tod = greet(t->tm_hour, t->tm_min);
	printf("%s\n", tod);
	//tod = "\0";
	//printf("%s\n", tod);
	//system("time");

	//tod = greet(24, 0);
	//printf("%s\n", tod);

	return 0;
}
