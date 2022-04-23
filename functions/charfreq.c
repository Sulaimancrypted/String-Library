#include<stdio.h>
//#include "D:\BCA\SEM - 4\ST\String Library\library.c"

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

void main()
{
    char str[] = "epithelial"; 
    printf("%d",charfreq(str,"e"));
}