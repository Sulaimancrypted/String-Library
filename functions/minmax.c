
#include<stdio.h>

int minmax(int a, int b){
   if(a == b)
      printf("Both number are equal.\n");
   if( a > b )
      printf("%d is greater than %d\n",a,b);
   else
      printf("%d is greater than %d\n",b,a);

}
void main(){
    int d,e;
    printf("Enter first number: ");
    scanf("%d",&d);
    printf("Enter second number: ");
    scanf("%d",&e);
    minmax(d,e);
}