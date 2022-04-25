// 5

/* Count number of spaces in string by passing string into function */

#include <stdio.h>
int countSpaces(char[]); // function declaration

int main()
{
    char str[10];
    int c;

    printf("\nEnter String");
    gets(str);

    c = countSpaces(str); // function calling
    printf("\nSpaces = %d", c);

    return 0;
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