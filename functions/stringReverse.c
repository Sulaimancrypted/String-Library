
#include <stdio.h>
#include "D:\BCA\SEM - 4\ST\String Library\library.c"
 
char *strrev (char *str){
    int i;
    int len = 0;
    char c;
    if (!str){
        return NULL;
    }
    len = strlength(str);

    for(i = 0; i < (len/2); i++){
        c = str[i];
        str [i] = str[len - i - 1];
        str[len - i - 1] = c;
    }
    return str;
}
int main(int argc, char *argv[])
{
  char str[] ="Hello World";
  printf("Input = %s\n", str);
  printf("Output = %s\n",strrev(str));
  return 0;
}
