#include "task3.h"
#include<stdio.h>

int main()
{

    float angle=0;
    char type;
    printf("Enter the angle and value for translation!\n"
	"For degrees value is D\nFor radians value is R\n");
    scanf("%f%c",angle,type);
    char buf[256];
    convert(buf,angle,type);
    printf(buf,angle,type);
    return 0;
}
