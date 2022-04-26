/*Count alll the digits , Symbols , charaters according to its ASCII Value*/

#include<stdio.h>
void countAllCharType(char []);
int main()
{
    char str[20];
    printf("\n Enter String : ");
    gets(str);

    count(str);

    return 0;
}

void countAllCharType(char str[])
{
    int i,c1=0,c2=0,c3=0,c4=0;
     for(i=0;str[i]!='\0';i++)
     {
       if(str[i]>=65 && str[i]<=90) //A = 65 ...Z= 90
        {
            c1++;
        }
        else
        {
            if(str[i]>=97 && str[i]<=122)//a = 97...z = 122
            {
                c2++;
            }
            else
            {
                if(str[i]>=48 && str[i]<=57)// 0 = 47 .... 9 = 55
                {
                c3++;
                }
                else 
                {
                    c4 ++;
                }
            }
           
        }
    }
    printf("\n Upper = %d\n Lower = %d\n Digits = %d\n other characters = %d",c1,c2,c3,c4);
}