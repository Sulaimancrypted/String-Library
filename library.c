#include <stdio.h>

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

int strlength(char *string){
   int l = 0;
   while(*string != '\0'){
      l++;
      *string++;
   }
   return l;
}

int palindrome(char *str){
   int l = 0;
   int h = strlength(str) - 1;
   while (h > l){
      if(str[l++] != str[h--]){
         return 0 ;
      }
   }
    return 1;
}

int charfreq(char *string,char *string_1){
   int l = 0;
   int cnt = 0;
   while ( *string != '\0'){
      if(*string == *string_1){
         cnt++;
      }
      *string++;   
   }
   return cnt;
}

char *strrev (char *str){
   int i;
   int len = 0;
   char c;

   len = strlength(str); 
   for(i = 0; i < (len/2); i++){
      c = str[i];
      str [i] = str[len - i - 1];
      str[len - i - 1] = c;
   }
   return str;
}

char *stringlower(char * s){
   char *t = s;
   
   int i = 0;
   while ( *t != '\0' ){
      if (*t >= 'A' && *t <= 'Z' ){
              *t = *t + ('a' - 'A');
      }
      t++;
   }
   return s;
}

char *stringupper(char * s){
   char *t = s;

   int i = 0;
   while ( *t != '\0' ){
           if (*t >= 'a' && *t <= 'z' ){
                   *t = *t - ('a' - 'A');
           }
           t++;
   }
   return s;
}

int vowelcount(char * s){
   char *t;  
   int cnt = 0;
   while ( *t != '\0' ){
      if (*t == 'a' || *t == 'A' || *t == 'e' || *t == 'E'|| *t == 'i' ||
          *t == 'I' ||*t == 'o' || *t == 'O'|| *t == 'u' || *t == 'U'){
          cnt++;
      }
      t++;
   }
   return cnt;
}

void asciiConverter(char *p) // function def
{
    printf("\n String with ASCII values...\n");
    while(*p!='\0')
    {
        printf("\n%c=%d",*p,*p);
        p++;
    }
}

int countSpaces(char str[]) // function definition
{

    int i, c = 0;
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ')
            c++;
    }
    return c;
}

 int countWords(char str[])                   //function definition
{
    int i,c=0;
    for(i=0; str[i]!='\0';i++)
    {
    if(str[i]==' ')
    c++;
    }
    c=c+1;
    return c;
}

int searchChar(char *p, char ch) // function definition
{
    int f = 0;
    while (*p != '\0')
    {
        if (*p == ch)
        {
            f = 1;
            break;
        }
        p++;
    }
    return f;
}