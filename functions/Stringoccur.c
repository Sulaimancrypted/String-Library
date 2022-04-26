/*Showing occurence of letter in an array */

#include <stdio.h>
char *stroccur(char *string, char letter);
int main()
{
    int i;
    char strings[2][30]={"hello world","C programming"};
    char letters[]={'l','m'},*result;
         
   for (i=0;i<2;i++)
   {    
      if(*(result=stroccur(strings[i],letters[i]))!='\0')
                    
      printf("\n\n\"%s\" was scanned for \'%c\'.\nFunction returned:->  %s",strings[i],letters[i],result);
       else
          printf("\n\n\'%c\' was not found in \"%s\"",letters[i],strings[i]);
   }  
      return 0;
}
                      
char *stroccur(char *string, char letter){
   char *ptr;
   while (*string!=letter && *string!='\0')
      ptr=++string;
      return (ptr);
   } 


















