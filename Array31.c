#include<stdio.h>
//1. Write a function to find the greatest number form the given array of any size.(TSRS)
int Greatest(int A[])
{
    for(int i=1;i<10;i++)
    {
        A[0]=A[0];
        if(A[0]>A[i])
            A[1];
        else
            A[0]=A[i];
    }
    return A[0];
}
int A1()
{
    int a[10]={5,9,4,7,6,3,2,0,18,8};
    printf("Greatest Number %d",Greatest(a));
    return 0;
}
//2. Write a function to find smallest number from the given array of any size. (TSRS)
int Smallest(int A[])
{
    for(int i=1;i<10;i++)
    {
        A[0]=A[0];
        if(A[0]<A[i])
            A[1];
        else
            A[0]=A[i];
    }
    return A[0];
}
int A2()
{
    int a[10]={5,9,4,7,6,3,2,10,18,8};
    printf("Smallest Number %d",Smallest(a));
    return 0;
}
//3. Write a function to short an array of any size. (TSRN)
void Short(int A[])
{
    int i;
    int j=0;
    while(j<10)
    {
        for(i=0;i<9;i++)
        {
            if(A[i]<A[i+1])
                A[i];
            else
            {
                A[i]=A[i]^A[i+1];
                A[i+1]=A[i]^A[i+1];
                A[i]=A[i]^A[i+1];
            }
        }
        j++;
    }
    for(i=0;i<10;i++)
    {
        printf("%d ",A[i]);
    }
}
int main()
{
    int a[10]={5,7,8,4,9,6,1,3,2,0};
    Short(a);
    return 0;
}
//4. Write a a function to rotate any array by n possition in d direction. The d is an indicative valu for left to right. (For example if array of size 5 is [32,29,40,12,70]; n is 2 d is left, then the result array arter left rotation 2 time is [40,12,70,32,29])
void Arr(int A[])
{
    int i,n,d;
    printf("Enter possition and direction as left-->1 or right-->0");
    scanf("%d%d",&n,&d);
    if(d)
    {
        for(i=0;i<9;i++)
        {
            A[i]=A[i]^A[i+1];
            A[i+1]=A[i]^A[i+1];
            A[i]=A[i]^A[i+1];
        }
    }
    else
    {
        for(i=9;i>0;i--)
        {
            A[i]=A[i]^A[i-1];
            A[i-1]=A[i]^A[i-1];
            A[i]=A[i]^A[i-1];
        }
    }
    i=0;
    for(i=0;i<10;i++)
    {
        printf("%d ",A[i]);
    }
}
int A4()
{
    int a[10]={5,9,4,7,6,3,2,0,18,8};
    
    Arr(a);
    return 0;
}
//5. Write a function to  find the first accurrence of ajective duplicate value in array. Function has to return the value of the element.
int A5()
{
    int A[10],i;
    printf("Enter 10 Array element :");
    for(i=0;i<10;i++)
    {
        scanf("%d",&A[i]);
    }
    i=1;                                //INCOMPLET
    for(i;i<10;i++)
    {
        A[0]=A[i-1];
        if(A[i]==A[0])
            break;
    }
    if(i!=9)
        printf("First accurance duplicate value %d",A[i]);
    return 0;
}