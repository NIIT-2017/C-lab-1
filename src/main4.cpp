#include "task4.h"
#include <stdio.h>

int main() {
    int feet = 0;
    int inches = 0;
    printf("Enter your height in feet and inches.\n");
    scanf("%d'%d", &feet, &inches);
    printf("%.1f\n", convert(feet, inches));
}