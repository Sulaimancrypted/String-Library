#include<stdio.h>

long int decToBin(int n) {
  long int bin = 0;
  int rem, i = 1;

  while (n!=0) {
    rem = n % 2;
    n /= 2;
    bin += rem * i;
    i *= 10;
  }
    getchar();
    return bin;
}

void main(){
    int d;
    printf("\nEnter decimal number to find its equivalent binary number: ");
    scanf("%d",&d);
    printf("\n%ld is binary equivalent of decimal %d",decToBin(d),d);
    getchar();
}