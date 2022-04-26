//3
/* Count number of Words in string by passing string into function  */
//no. of words

#include<stdio.h>
int countWords(char []);                     //function declaration
int main()
{
    char str[10];
    int c;
    printf("\nEnter String");
    gets(str);
    
    c=countWords(str);                           //function calling
    printf("\nWords = %d",c);
    return 0;
}

int countWords(char str[])                   //function definition
{
    int i,c=0;
    for(i=0; str[i]!='\0';i++){
    if(str[i]==' ')
    c++;
    }
    c=c+1;
    return c;
}
