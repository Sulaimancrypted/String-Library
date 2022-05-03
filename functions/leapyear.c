#include<stdio.h>


void leapYear(){
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);

    if (year % 400 == 0) {
        printf("%d is a leap year.", year);
    }
    else if (year % 100 == 0) {
        printf("%d is not a leap year.", year);
   }
    else if (year % 4 == 0) {
        printf("%d is a leap year.", year);
   }
    else {
        printf("%d is not a leap year.", year);
   }
   getchar();
}

void main(){
    leapYear();
}