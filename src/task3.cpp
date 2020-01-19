#include <stdio.h>


char* convert(char buf[], double angle, char type) {
    double degree = 180;
    double p = 3.14159;
    double value = 0;
    char  symbol = ' ';
    if (type == 'D') {
        value = (angle * p) / degree;
        symbol = 'R';
    } else if (type == 'R') {
        value = (angle * degree) / p;
        symbol = 'D';
    }
    sprintf(buf, "%lf%c", value, symbol);
    return buf;
}