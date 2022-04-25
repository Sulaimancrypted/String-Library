// 4

/*Search whether a particular character is present in string or not
by passing string into function using pointer*/

#include <stdio.h>
int searchChar(char *p, char ch) // function definition
{
    int f = 0;
    while (*p != '\0')
    {
        if (*p == ch)
        {
            f = 1;
            break;
        }
        p++;
    }
    return f;
}

//int searchChar(char *, char) // function declaration
int main()
{
    char str[10], ch;
    int f;
    printf("\nEnter String = ");
    gets(str);
    printf("\nEnter the character you want to search = ");
    scanf("%c", &ch);
    f = searchChar(str, ch); // function calling
    if (f == 1)
        printf("\nCharacter is Present");
    else
        printf("\ncharacter is NOT Present in String");
    return 0;
}
int searchChar(char *p, char ch) // function definition
{
    int f = 0;
    while (*p != '\0')
    {
        if (*p == ch)
        {
            f = 1;
            break;
        }
        p++;
    }
    return f;
}
