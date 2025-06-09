#include<stdio.h>
//2. write a program to calculate the product of two metrices each of order 3*3.
int main()
{
    int A[3][3],B[3][3],C[3][3],i,j,k,sum;
    printf("Enter 9 elements");
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            scanf("%d",&A[i][j]);
    printf("Enter 9 elements");
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            scanf("%d",&B[i][j]);
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
        {
            for(k=0,sum=0;k<3;k++)
                sum=sum+A[i][k]*B[k][j];
            C[i][j]=sum;
        }
    printf("Final product elements\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            printf("%d ",C[i][j]);
        printf("\n");
    }
    return 0;
}