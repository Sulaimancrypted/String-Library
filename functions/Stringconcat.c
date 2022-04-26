/*Concatinate the string*/
#include <stdio.h>

void concatenate(char *, char *); 

int main()
{
  	char str[100], str2[100];
 
  	printf("\n Please Enter the First :  ");
  	gets(str);
												
  	printf("\n Please Enter the Second :  ");
  	gets(str2);
  	
  	concatenate(str, str2);

  	printf("\n After the Concatenate = %s", str);
  	
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