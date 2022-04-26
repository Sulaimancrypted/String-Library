/*Compare the string*/
#include<stdio.h>
 
int compare_string(char*, char*);
 
int main()
{
    char first[100], second[100], result;
 
    printf("Enter first string\n");
    gets(first);
 
    printf("Enter second string\n");
    gets(second);
 
    result = compare_string(first, second);
 
    if ( result == 0 )
       printf("Both strings are same.\n");
    else
       printf("Entered strings are not equal.\n");
 
    return 0;
}
 
int compare_string(char *first, char *second)
{
   while(*first==*second)
   {
      if ( *first == '\0' || *second == '\0' )
         break;
 
      first++;
      second++;
   }
   if( *first == '\0' && *second == '\0' )
      return 0;
   else
      return -1;
}