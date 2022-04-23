#include<stdio.h>
char * stringUpper(char * s){
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

int main(){
    char str[] = "helloo thereee";
    printf("%s",stringUpper(str));
    printf("\n%d",('a' - 'A'));

    return 0;
}
