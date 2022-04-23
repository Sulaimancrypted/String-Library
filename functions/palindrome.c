#include<stdio.h>
//include "D:\BCA\SEM - 4\ST\String Library\library.c"

int palindrome(char *str)
{
    
    int l = 0;
    int h = strlength(str) - 1;
    while (h > l)
    {
        if (str[l++] != str[h--])
        {
            return 0 ;
        }
    }
    return 1;
}

int main(int argc, char const *argv[])
{
    char string[] = "madav";
    printf("%d",palindrome(string));
    return 0;
}


