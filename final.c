#include "D:\BCA\SEM - 4\ST\String Library\library.c"
int main()
{
    int opt = 1,d,e;
    long int c;
    float a,b;
    char str[100],str2[100],ch;
    printf(".................... LIBRARY FUNCTIONS .....................\n\n\n----------------------- PROJECT BY -------------------------\n\n   SULAIMAN MOHAMMADYASIN MUTAWALLI\n   PRADNESH PRATAP MORE\n   OMKAR PRABHANS SHARMA\n\nPROJECT GUIDE - PROF. B.D PATIL");
    while (opt != 27){
        printf("\n\n                              STRING FUNCTIONS");
        printf("\n\n                              1. ASCII CHARACTER CONVERSION");
        printf("\n                              2. CHARACTER FREQUENCY");
        printf("\n                              3. COUNT CONSONANTS");
        printf("\n                              4. COUNT CHARACTER TYPES");
        printf("\n                              5. COUNT SPACES");
        printf("\n                              6. COUNT WORDS");
        printf("\n                              7. CHECK PALINDROME");
        printf("\n                              8. CHARACTER SEARCH");
        printf("\n                              9. COMPARE STRINGS");
        printf("\n                              10. CONCATENATE STRINGS");
        printf("\n                              11. COPY STRING");
        printf("\n                              12. LOWERCASE STRING");
        printf("\n                              13. UPPERCASE STRING");
        printf("\n                              14. REVERSE STRING");
        printf("\n                              15. STRING LENGTH");
        printf("\n                              16. RETURN SUBSTRING");
        printf("\n                              17. VOWEL COUNT\n");
        printf("\n                              MATHEMATICAL FUNCTIONS\n");
        printf("\n                              18. MIN / MAX OF 2 NUMBERS");
        printf("\n                              19. AVERAGE NUMBERS");
        printf("\n                              20. MATRIX MULTIPLICATION");
        printf("\n                              21. MATRIX ADDITION");
        printf("\n                              22. MATRIX SUBTRACTION");
        printf("\n                              23. POWER OF NUMBER");        
        printf("\n                              24. BINARY TO DECIMAL");
        printf("\n                              25. DECIMAL TO BINARY");
        printf("\n                              26. LEAP YEAR");
        printf("\n                              27. EXIT MENU");
        printf("\n\n ENTER YOUR OPTION : ");
        scanf("%d",&opt);
        switch (opt)
        {
            case 1:
                getchar();
                printf("\n Enter String: ");
                gets(str);

                asciiConverter(str);
                getchar();
                break;
            case 2:
                getchar();
                printf("\n Enter String: ");
                gets(str);

                printf(" Enter a character to find its frequency in string 1: ");
                gets(str2);

                printf(" Frequency of character is %d",charfreq(str,str2));
                getchar();
                break;
            case 3:
                getchar();
                printf("\n Enter String: ");
                gets(str);

                printf("The number of consonants in given string are %d.",consonantCount(str));
                getchar();
                break;
            case 4:
                getchar();
                printf("\n Enter String : ");
                gets(str);

                countAllCharType(str);
                getchar();
                break;
            case 5:
                getchar();
                printf("\nEnter String: ");
                gets(str);

                c = countSpaces(str);

                printf("\nNumber of Spaces = %d", c);
                getchar();
                break;
            case 6:
                getchar();
                printf("\nEnter String: ");
                gets(str);

                c=countWords(str);                           //function calling

                printf("\nWords = %d",c);
                getchar();
                break;
            case 7:
                getchar();
                printf("\nEnter String: ");
                gets(str);

                if(palindrome(str) == 1)
                    printf("The string is palindrome.");
                else
                    printf("The string is not palindrome.");
                getchar();
                break;
            case 8:
                getchar();
                printf("\nEnter String: ");
                gets(str);

                printf("\nEnter the character you want to search = ");
                scanf("%c", &ch);

                c = searchChar(str, ch); 

                if (c == 1)
                    printf("\nCharacter is Present");
                else
                    printf("\ncharacter is NOT Present in String");
                getchar();
                break;
            case 9:
                getchar();
                printf("Enter first string: ");
                gets(str);

                printf("Enter second string: ");
                gets(str2);

                c = compareString(str, str2);

                if ( c == 0 )
                   printf("\nBoth strings are same.");
                else
                   printf("Entered strings are not equal.");
                getchar();
                break;
            case 10:
                getchar();
                printf("\n Please Enter the First :  ");
  	            gets(str);

  	            printf("\n Please Enter the Second :  ");
  	            gets(str2);

  	            concatenate(str, str2);

  	            printf("\n After the Concatenate = %s", str);
                getchar();
                break;
            case 11:
                getchar();
                printf("Enter source string: ");    
                gets(str);    

                copyString(str2,str);    

                printf("Target string is \"%s\"\n", str2);
                getchar(); 
                break;
            case 12:
                getchar();
                printf("Enter string: ");    
                gets(str);

                printf("%s", stringLower(str));
                getchar();
                break;
            case 13:
                getchar();
                printf("Enter string: ");    
                gets(str);

                printf("%s", stringUpper(str));
                getchar();
                break;
            case 14:
                getchar();
                printf("Enter string: ");    
                gets(str);

                printf("Output = %s",strrev(str));
                getchar();
                break;
            case 15:
                getchar();
                printf("\nEnter String: ");
                gets(str);

                c = strLength(str); 

                printf("\nLength = %d", c);
                getchar();
                break;
            case 16:
                getchar();
                printf("\nEnter String 1: ");
                gets(str);
                printf("\nEnter String 2: ");
                gets(str2);

                if(substr(str,str2) != NULL)
                    printf("%s is the sub string",substr(str,str2));
                else
                    printf("Substring not found.");
                getchar();
                break;
            case 17:
                getchar();
                printf("\nEnter String: ");
                gets(str);

                printf("Number of vowels are %d",vowelCount(str));
                getchar();
                break;
            case 18:
                printf("Enter first number: ");
                scanf("%d",&d);
                printf("Enter second number: ");
                scanf("%d",&e);
                minmax(d,e);
                getchar();
                getchar();
                break;
            case 19:
                printf("Enter first number: ");
                scanf("%f",&a);
                printf("Enter second number: ");
                scanf("%f",&b);
                printf("Average of 2 numbers is %.2f\n",avg(a,b));
                getchar();
                getchar();
                break;
            case 20:
                matrixmul();
                getchar();
                getchar();
                break;
            case 21:
                matrixAdd();
                // getchar();
                getchar();
                break;
            case 22:
                matrixSub();
                getchar();
                
                break;
            case 23:
                printf("\nEnter number to find its power: ");
                scanf("%d",&c);

                printf("\nWhat power of number %d do you want to find? : ",c);
                scanf("%d",&d);

                printf("\n%d is the power of %d to %d",power(c,d),c,d);
                getchar();

                break;
            case 24:
                printf("\nEnter binary number to find its equivalent decimal number: ");
                scanf("%ld",&c);
                printf("\n%d is decimal equivalent of binary %ld",binToDec(c),c);
                getchar();
                break;
            case 25:
                printf("\nEnter decimal number to find its equivalent binary number: ");
                scanf("%d",&d);
                printf("\n%ld is binary equivalent of decimal %d",decToBin(d),d);
                getchar();
                break;
            
            case 26:
                leapYear();
                getchar();
                break;
            case 27:
                printf("Exiting Menu.....");
                break;
            default:
                printf("Invalid Option try again...");
                break;
        }
    }
    return 0;
}
