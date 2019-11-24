#include <stdio.h>
#define INCHES_IN_FEET 12
#define INCHES_IN_SM 2.54

float convert(int feet, int inches) {
    float heightInSm = (feet * INCHES_IN_FEET + inches)* INCHES_IN_SM;
    return heightInSm;
}
