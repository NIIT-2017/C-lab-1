//1 фут = 12 дюймов. 1 дюйм = 2.54 см.

float convert(int feet,int inches)
{
    feet=((feet/12)+(feet%12));
    inches=feet+inches;
}