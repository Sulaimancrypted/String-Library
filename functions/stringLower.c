//#include<stdio.h>
char * stringLower(char * s){
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

int main(){
    char str[] = "EPITHELIAL";
    printf("%s",stringLower(str));
    printf("\n%d",('a' - 'A'));

    return 0;
}
