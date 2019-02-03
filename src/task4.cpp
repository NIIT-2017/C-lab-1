#define FtoI 12
#define ItoC 2.54


float convert(int feet, int inches)
{
	float heightConvert = feet * FtoI * ItoC + inches * ItoC;
	return heightConvert;
}
