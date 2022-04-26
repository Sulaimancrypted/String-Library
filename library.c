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

void countAllCharType(char str[])
{
    int i,c1=0,c2=0,c3=0,c4=0;
     for(i=0;str[i]!='\0';i++)
     {
       if(str[i]>=65 && str[i]<=90) //A = 65 ...Z= 90
        {
            c1++;
        }
        else
        {
            if(str[i]>=97 && str[i]<=122)//a = 97...z = 122
            {
                c2++;
            }
            else
            {
                if(str[i]>=48 && str[i]<=57)// 0 = 47 .... 9 = 55
                {
                c3++;
                }
                else 
                {
                    c4 ++;
                }
            }
           
        }
    }
    printf("\n Upper = %d\n Lower = %d\n Digits = %d\n other characters = %d",c1,c2,c3,c4);
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

void copy_string(char *target, char *source)
{
    while(*source)
    {
        *target = *source;        
        source++;        
        target++;
    }    
    *target = '\0';
}

char *stroccur(char *string, char letter){
   char *ptr;
   while (*string!=letter && *string!='\0')
      ptr=++string;
      return (ptr);
   } 