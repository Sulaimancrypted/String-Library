#include<stdio.h>
//#include "D:\BCA\SEM - 4\ST\String Library\library.c"
char *substr(char *string, char *substring){
   char *b;
   b = substring;
   if (*b == 0) {
	   return string;
   }
   while(*string != 0){
      if(*string != *b){
         *string++;
         continue;
      }
      return string;
   }
    
}
int main() {
   char ch[] = "helloworld";
   char ch2[] = "x";
   if(substr(ch,ch2) != NULL)
      printf("%s",substr(ch,ch2));
   else
      printf("Substring not found.");

   return 0;
}

