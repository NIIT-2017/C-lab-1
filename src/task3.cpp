char * convert(char buf[], double angle, char type)
{
    
    if (type == 'R') {
        sprintf(buf, "angle = %fD", angle / 0.01745);
    } else if (type == 'D') {
        sprintf(buf, "angle = %fR", angle / 57.2958);
    }
    return buf;
    
}

