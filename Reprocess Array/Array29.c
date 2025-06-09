#include<stdio.h>
void p1()
{
    int A[10],i,sum=0;
    printf("Enter 10 number:\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&A[i]);
    }
    for(i=0;i<10;i++)
    {
        sum=sum+A[i];
    }
    printf("%d",sum);
}
void p2()
{
    int A[10],i,sum=0;
    printf("Enter 10 number:\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&A[i]);
    }
    for(i=0;i<10;i++)
    {
        sum=sum+A[i];
    }
    printf("%f",sum/10.0);
}
void p3()
{
    int A[10],i,Evensum=0,Oddsum=0;
    printf("Enter 10 number:\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&A[i]);
    }
    for(i=0;i<10;i++)
    {
        if(A[i]%2==0)
            Evensum=Evensum+A[i];
        else
            Oddsum=Oddsum+A[i];
    }
    printf("Evensum: %d Oddsum: %d",Evensum,Oddsum);
}
void p4()
{
    int A[10],i,j=0;
    printf("Enter 10 number:\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&A[i]);
    }
    for(i=1;i<10;i++)
    {
        if(A[j]<A[i])
            A[j]=A[i];
    }
    printf("Largest No: %d",A[j]);
}
void p5()
{
    int A[10],i,j=0;
    printf("Enter 10 number:\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&A[i]);
    }
    for(i=1;i<10;i++)
    {
        if(A[j]>A[i])
            A[j]=A[i];
    }
    printf("Smallest No: %d",A[j]);
}
int main()
{
    p5();
    return 0;
}