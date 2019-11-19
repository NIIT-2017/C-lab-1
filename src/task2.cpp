#include "task2.h"

const char *greet(int hour,int min)
{
   while(hour>=00 && hour<24 &&hour!=0)
   {
      if(hour >=00 && hour <06)
	return(char*)"Good Night!";
      else if(hour >=06 && hour <11)
	return(char*)"Good Morning!";
      else if(hour >=11 && hour <18)
	return(char*)"Good Day!";
      else if(hour >=18 &&hour <24)
	return(char*)"Good Evening!";
   }
   return(char*)"Incorrect time!";
}
