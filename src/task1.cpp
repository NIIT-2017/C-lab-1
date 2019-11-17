#include "task1.h"

inline int getRecommendation(char gender, float height, float weight) //weight analysis function
{
	if (gender == 'm' || gender == 'M') // check for male
	{
		int x = weight - (height - 100);
		if (x < 0) // if thin
			return -1;
		else if (x > 0) // if fat
			return 1;
		else // if perfect
			return 0;
	}
	if (gender == 'w' || gender == 'W') // check for female
	{
		int y = (weight - (height - 110));
		if (y < 0) // if thin
			return -1;
		else if (y > 0) // if fat
			return 1;
		else // if perfect
			return 0;
	}
}