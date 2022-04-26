// 2
/* Count number of Words in string by passing string into function using pointer*/
// countlength

#include <stdio.h>


int strlength(char *string){
   int l = 0;
   while(*string != '\0'){
      l++;
      *string++;
   }
   return l;
}

int main()
{
    char str[10];
    int c;
    printf("\nEnter String");
    gets(str);

    c = strlength(str); // function calling
    printf("\nWords = %d", c);
    return 0;
}
