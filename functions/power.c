#include<stdio.h>


int power(int a,int b){
    int i = 0,ans = 1;
    while (i < b)
    {
       ans = ans * a;
       i++;
    }
    return ans;
    
}

void main(){
    int c,d;
    printf("\nEnter number to find its power: ");
    scanf("%d",&c);
    printf("\nWhat power of number %d do you want to find? : ",c);
    scanf("%d",&d);
    printf("\n%d is the power of %d to %d",power(c,d),c,d);
    getchar();

}