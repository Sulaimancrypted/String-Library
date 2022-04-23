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
   char ch2[] = "v";
   printf("%s",substr(ch,ch2));

   return 0;
}

