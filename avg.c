
#include<stdio.h>

float avg(float a, float b){
   return((a + b)/2);
}

void main(){
    float a,b;
    printf("Enter first number: ");
    scanf("%f",&a);
    printf("Enter second number: ");
    scanf("%f",&b);
    printf("Average of 2 numbers is %.2f\n",avg(a,b));
}