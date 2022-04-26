/*Concatinate the string*/
#include <stdio.h>

void concatenate(char *, char *); 

int main()
{
  	char Str1[100], Str2[100];
 
  	printf("\n Please Enter the First :  ");
  	gets(Str1);
  	
  	printf("\n Please Enter the Second :  ");
  	gets(Str2);
  	
  	concatenate(Str1, Str2);

  	printf("\n After the Concatenate = %s", Str1);
  	
  	return 0;
}

void concatenate(char *Str1, char *Str2)
{
	while(*Str1)
	{
		Str1++;
	}
	
	while(*Str2)
	{
		*Str1 = *Str2;
		*Str1++;
		*Str2++;
  	}
  	*Str1 = '\0';
}