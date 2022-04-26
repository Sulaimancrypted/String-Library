#include "D:\BCA\SEM - 4\ST\String Library\library.c"
int main()
{
    int opt = 1,c;
    char str[100],str2[100],ch;
    while (opt != 18){
        printf("\n\n1. ASCII CONVERSION OF CHARACTERS IN STRING USING asciiConverter(str)\n2. FINDING FREQUENCY OF A GIVEN CHARACTER IN STRING USING charfreq(string,char)\n3. COUNT THE NUMBER OF CONSONANTS IN A STRING USING consonantCount(string)\n4. COUNT THE NUMBER OF UPPERCASE / LOWERCASE / DIGITS / OTHER CHARACTERS USING countAllCharType(string)\n5. COUNT NUMBER OF SPACES IN A GIVEN STRING USING countSpaces(string)\n6. COUNT NUMBER OF WORDS IN A STRING USING countWords(string)\n7. CHECK WHETHER A GIVEN STRING IS PALINDROME USING palindrome(string)\n8. CHECK WHETHER A GIVEN CHARACTER IS PART OF STRING USING searchChar(string,char)\n9. COMPARE 2 GIVEN STRINGS AND FIND WHETHER THEY ARE EQUAL OR DIFFERENT USING compareString(string,string)\n10. CONCATENATE 2 STRINGS USING concatenate(string,string)\n11. COPY A STRING FROM SOURCE TO DESTINATION STRING USING copyString(string,string)\n12. CONVERT A STRING TO LOWERCASE USING stringLower(string)\n13. CONVERT A STRING TO UPPERCASE USING stringUpper(string)\n14. REVERSE A GIVEN STRING USING strrev(string)\n15. FIND THE LENGTH OF GIVEN STRING USING strLength(string)\n16. GET THE SUB-STRING FROM FIRST GIVEN STRING FROM THE FIRST OCCURANCE OF SECOND STRING USING substr(string,string)\n17. COUNT THE NUMBER OF VOWELS ON A GIVEN STRING USING vowelCount(string)\n18. EXIT MENU\n ENTER YOUR OPTION : ");
        scanf("%d",&opt);
        switch (opt)
        {
        case 1:
            getchar();
            printf("\n Enter String: ");
            gets(str);
            
            asciiConverter(str);
            break;
        case 2:
            getchar();
            printf("\n Enter String: ");
            gets(str);
            
            printf("Enter a character to find its frequency in string 1: ");
            gets(str2);
            
            printf("Frequency of character is %d",charfreq(str,str2));
            
            break;
        case 3:
            getchar();
            printf("\n Enter String: ");
            gets(str);
            
            printf("The number of consonants in given string are %d.",consonantCount(str));
            break;
        case 4:
            getchar();
            printf("\n Enter String : ");
            gets(str);
            
            countAllCharType(str);
            break;
        case 5:
            getchar();
            printf("\nEnter String: ");
            gets(str);
            
            c = countSpaces(str);
            
            printf("\nNumber of Spaces = %d", c);
            break;
        case 6:
            getchar();
            printf("\nEnter String: ");
            gets(str);
            
            c=countWords(str);                           //function calling
            
            printf("\nWords = %d",c);
            break;
        case 7:
            getchar();
            printf("\nEnter String: ");
            gets(str);
            
            if(palindrome(str) == 1)
                printf("The string is palindrome.");
            else
                printf("The string is not palindrome.");
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
            break;
        case 10:
            getchar();
            printf("\n Please Enter the First :  ");
  	        gets(str);
            
  	        printf("\n Please Enter the Second :  ");
  	        gets(str2);

  	        concatenate(str, str2);

  	        printf("\n After the Concatenate = %s", str);
            break;
        case 11:
            getchar();
            printf("Enter source string: ");    
            gets(str);    
            
            copyString(str2,str);    
            
            printf("Target string is \"%s\"\n", str2); 
            break;
        case 12:
            getchar();
            printf("Enter string: ");    
            gets(str);
            
            printf("%s", stringLower(str));
            break;
        case 13:
            getchar();
            printf("Enter string: ");    
            gets(str);
            
            printf("%s", stringUpper(str));
            break;
        case 14:
            getchar();
            printf("Enter string: ");    
            gets(str);
            
            printf("Output = %s",strrev(str));
            break;
        case 15:
            getchar();
            printf("\nEnter String: ");
            gets(str);

            c = strLength(str); 
            
            printf("\nLength = %d", c);
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
            break;
        case 17:
            getchar();
            printf("\nEnter String: ");
            gets(str);
        
            printf("Number of vowels are %d",vowelCount(str));
            break;
        case 18:
            printf("Exiting Menu.....");
            break;
        
        default:
            printf("Invalid Option try again...");
            break;
        }
    }
    
    return 0;
}
