#include "task1.h"

int getRecommendation(char gender, float height, float weight)
{
	int result = 0;

	if (gender == 'm') {
		if (height - 100 == weight) {
			result = 0;
		}
		else if (height - 100 > weight) {
			result = -1;
		}
		else result = 1;
	}
	else if (gender == 'w') {
		if (height - 110 == weight) {
			result = 0;
		}
		else if (height - 110 > weight) {
			result = -1;
		}
		else result = 1;
	}
	return result;
}