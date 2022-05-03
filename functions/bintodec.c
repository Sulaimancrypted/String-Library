#include<stdio.h>
int binToDec(long long n) {
    int dec = 0, i = 0, rem;

    while (n!=0) {
        rem = n % 10;
        n /= 10;
        dec += rem * power(2, i);
        ++i;
    }
    getchar();
    return dec;
}
void main(){
    long int c;
    printf("\nEnter binary number to find its equivalent decimal number: ");
    scanf("%ld",&c);
    printf("\n%d is decimal equivalent of binary %ld",binToDec(c),c);
    getchar();
}