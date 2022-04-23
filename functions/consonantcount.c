
#include<stdio.h>
//#include "D:\BCA\SEM - 4\ST\String Library\library.c"
int consonantcount(char * s){
    char *t = s;
    int cnt = 0;
    while ( *t != '\0' ){
            if (*t == 'a' || *t == 'A' || *t == 'e' || *t == 'E'|| *t == 'i' ||
                *t == 'I' ||*t == 'o' || *t == 'O'|| *t == 'u' || *t == 'U'){
                cnt++;
            }

            t++;
    }
    return strlength(s) -  cnt;
}
int main()
{
    printf("%d",consonantcount("hello there"));
    return 0;
}
