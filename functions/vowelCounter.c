
#include<stdio.h>
//#include "D:\BCA\SEM - 4\ST\String Library\library.c"
#include<library.c>
int Vowelcount(char * s){
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

int main(){
    printf("%d",Vowelcount("zeus"));
    return 0;
}
