#include "task3.h"
#include <stdio.h>

int main() {
    char buf[256];
    double angle = 0;
    char type = ' ';
    
    while (1) {
        printf("Enter value of angle in 'R' or 'D'.\n");
        scanf("%lf%c", &angle, &type);
        if (type != 'R' && type != 'D') {
            printf("Unit of measure is wrong!\n");
        }
        else {
            printf(convert(buf, angle, type));
            break;
        }
    }
}