#include<stdio.h>
int p1(int A[],int size)
{
    int i,j;
    printf("Enter 10 Number");
    for(i=0;i<10;i++)
        scanf("%d",&A[i]);
    for(i=2;i<10;i++)
    {
        if(A[0]<A[i]&&A[1]<A[i])
        {
            if(A[0]<A[1])                   
            {
                A[0]=A[i];
            }
            else
                A[1]=A[i];
        }
    }
    if(A[0]>A[1])
        A[1]=A[0];
    return A[1];
}
int main()
{
    int a[10],size=10;
    printf("2nd Greater No: %d",p1(a,size));
    return 0;
    
}