#include<stdio.h>


void matrixSub(){
   int m,n,m1,n1;
    printf("\nEnter Rows and columns of first matrix:\n");
    scanf("%d %d",&m,&n);
    printf("\nEnter Rows and columns of second matrix:\n");
    scanf("%d %d",&m1,&n1);
    if(n != n1 || m != m1){
        printf("\nAddition or Subraction of matrix with these dimensions is not possible.");
        getchar();
        return;
    }
    int a[m][n],b[m1][n1],c[m1][n1];
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
    
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n1; j++){
            c[i][j] = a[i][j] - b[i][j];
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
    printf("\nMatrix C :\n");
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n1; j++){
            printf("\t%d",c[i][j]);
        }
        printf("\n");
    }
}

void main(){
    matrixSub();
}