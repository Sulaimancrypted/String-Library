
#include<stdio.h>

void matrixmul(){
   int m,n,m1,n1;
    printf("\nEnter Rows and columns of first matrix:\n");
    scanf("%d %d",&m,&n);
    printf("\nEnter Rows and columns of second matrix:\n");
    scanf("%d %d",&m1,&n1);
    if(n != m1){
        printf("\nMultiplication of matrix with these dimensions is not possible.");
        return;
    }
    int a[m][n],b[m1][n1],c[m][n1];
    printf("\nEnter elements of first matrix:\n");
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            printf("A[%d][%d] :",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nEnter elements of second matrix:\n");
    for (int i = 0; i < m1; i++){
        for (int j = 0; j < n1; j++){
            printf("B[%d][%d] :",i,j);
            scanf("%d",&b[i][j]);
        }
    }
    int sum = 0,o = 0,p = 0,q = 0,r = 0;
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n1; j++){
            sum = 0;
            o = i;
            p = 0;
            q = 0;
            r = j;
            for (int k = 0; k < n; k++){
                sum = sum + a[o][p] * b[q][r];
                q++;p++;
            }
            c[i][j] = sum;
        }
    }
    printf("\nMatrix A :\n");
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            printf("\t%d",a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("\nMatrix B :\n");
    for (int i = 0; i < m1; i++){
        for (int j = 0; j < n1; j++){
            printf("\t%d",b[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("\nMatrix AB :\n");
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n1; j++){
            printf("\t%d",c[i][j]);
        }
        printf("\n");
    }
}

void main(){
    matrixmul();
}