#include<stdio.h>
//1. Write a program to sort element of an array of size 10. Take array value from the user
int A1()
{
    int A[10],i,a,j;
    printf("Enter 10 array elements: ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&A[i]);
    }
    
    j=0;
    while(j<10)
    {
        i=0;
        while(i<9)
        {
            if(A[i]>A[i+1])
            {
                A[i]=A[i]+A[i+1];
                A[i+1]=A[i]-A[i+1];
                A[i]=A[i]-A[i+1];
            }
            i++;
        }
        j++;
    }
    i=0;
    while(i<10)
    {
        printf("%d ",A[i]);
        i++;
    }
    return 0;
}
//2. Write a program to find second largest element in an array. Take array value from the user.
int A2()
{
    int A[10],i,a,j;
    printf("Enter 10 array elements: ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&A[i]);
    }
    
    j=0;
    while(j<10)
    {
        i=0;
        while(i<9)
        {
            if(A[i]>A[i+1])
            {
                A[i]=A[i]+A[i+1];
                A[i+1]=A[i]-A[i+1];
                A[i]=A[i]-A[i+1];
            }
            i++;
        }
        j++;
    }
    printf("Second Largest Number %d",A[8]);
    return 0;
}
//3. Write a program to find second smallest numbeer in an array. Take array value from the user.
int A3()
{
    int A[10],i,a,j;
    printf("Enter 10 array elements: ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&A[i]);
    }
    
    j=0;
    while(j<10)
    {
        i=0;
        while(i<9)
        {
            if(A[i]>A[i+1])
            {
                A[i]=A[i]+A[i+1];
                A[i+1]=A[i]-A[i+1];
                A[i]=A[i]-A[i+1];
            }
            i++;
        }
        j++;
    }
    i=0;
    printf("Second Smallest Number %d",A[1]);
    return 0;
}
//4. Write a program to sort an array of 10 element in decreasing order.
int A4()
{
    int A[10],i,a,j;
    printf("Enter 10 array elements: ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&A[i]);
    }
    
    j=0;
    while(j<10)
    {
        i=0;
        while(i<9)
        {
            if(A[i]<A[i+1])
            {
                A[i]=A[i]+A[i+1];
                A[i+1]=A[i]-A[i+1];
                A[i]=A[i]-A[i+1];
            }
            i++;
        }
        j++;
    }
    i=0;
    while(i<10)
    {
        printf("%d ",A[i]);
        i++;
    }
    return 0;
}
//5. Write a program in C to copy the elements of one array into another array. Take array value from the user.
int main()
{
    int A[10],B[10],c,i,a,j;
    printf("Enter 10 array elements: ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&A[i]);
    }
    for(i=0;i<10;i++)
    {
        B[i]=A[i];
        
    }
    printf("Array element of B:");
    for(i=0;i<10;i++)
    {
        printf("%d ",B[i]);
    }
    
    return 0;
}
