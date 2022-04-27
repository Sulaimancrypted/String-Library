#include "D:\BCA\SEM - 4\ST\String Library\library.c"
int main()
{
    int opt = 1,c,d,e;
    float a,b;
    char str[100],str2[100],ch;
    printf(".................... LIBRARY FUNCTIONS .....................\n\n\n----------------------- PROJECT BY -------------------------\n\n   SULAIMAN MOHAMMADYASIN MUTAWALLI\n   PRADNESH PRATAP MORE\n   OMKAR PRABHANS SHARMA\n\nPROJECT GUIDE - PROF. B.D PATIL");
    while (opt != 20){
        printf("\n\n1. ASCII CHARACTER CONVERSION\n2. CHARACTER FREQUENCY\n3. COUNT CONSONANTS\n4. COUNT CHARACTER TYPES\n5. COUNT SPACES\n6. COUNT WORDS\n7. CHECK PALINDROME\n8. CHARACTER SEARCH\n9. COMPARE STRINGS\n10. CONCATENATE STRINGS\n11. COPY STRING\n12. LOWERCASE STRING\n13. UPPERCASE STRING\n14. REVERSE STRING\n15. STRING LENGTH\n16. RETURN SUBSTRING\n17. VOWEL COUNT\n18. MIN / MAX OF 2 NUMBERS\n19. AVERAGE NUMBERS\n20. EXIT MENU\n\n ENTER YOUR OPTION : ");
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
            
            printf("Enter a character to find its frequency in string 1: ");
            gets(str2);
            
            printf("Frequency of character is %d",charfreq(str,str2));
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
            printf("Exiting Menu.....");
            getchar();
            break;
        default:
            printf("Invalid Option try again...");
            break;
        }
    }
    
    return 0;
}
