#include<stdio.h>
//1. write a function to swap two elemnt of given array with specific indices.
void swap(int A[])
{
    int a,b,i;
    printf("Enter two different possition to swap");
    scanf("%d%d",&a,&b);
    a+=1;b+=1;
    A[a]=A[a]*A[b];
    A[b]=A[a]/A[b];
    A[a]=A[a]/A[b];
    for(i=0;i<10;i++)
    {
        printf("%d ",A[i]);
    }

}
int A1()
{
    int a[10]={7,5,6,3,2,10,4,5,6,9};
    swap(a);
    return 0;
}
//2. Write a function to count total number of duplicate elements in an array.
int Duplicate(int A[])
{
    int i,j,a,count=0;
    for(i=0;i<10;i++)
    {
        for (j=0;j<10;j++)
        {
            //a=A[i];
            if(A[i]==A[j]&&i!=j)
                count++;
            //printf("%d ",count);
        }
    }
    return count/2;
}
int main()
{
    int a[10]={7,5,7,3,2,10,4,5,6,9};
    printf("Total Duplicate elements %d",Duplicate(a));
    return 0;
}
//3. Write a function to print all uniqe elements in array.
void Unique(int A[])
{
    int i,j,a,count=0;
    for(i=0;i<10;i++)
    {
        for (j=0;j<10;j++)
        {
            if(A[i]==A[j]&&i!=j)
                A[i]=0;
        }
        if(A[i] != 0)
            printf("%d ",A[i]);
    }
}
int A3()
{
    int a[10]={7,5,6,3,2,10,4,5,6,9};
    Unique(a);
    return 0;
}
//4. Write a function to merge two arrays of the same size sorted in decreasing order.
void Merge(int A[],int B[], int C[])
{
    int i,j;
    for(i=0;i<10;i++)
    {
        C[i]=A[i];
    }
    for(i=10;i<20;i++)
    {
        C[i]=B[i];
    }
    printf("Merged Array :");
    for(i=0;i<20;i++)
    {
        printf("%d ",C[i]);
    }
    j=0;
    while(j<20)
    {
        for(i=0;i<19;i++)
        {
            if(C[i]>C[i+1])
                C[i];
            else
            {   
                C[i]=C[i]+C[i+1];
                C[i+1]=C[i]-C[i+1];
                C[i]=C[i]-C[i+1];
            }
        }
        j++;
    }
    printf("\nDecreasing Orader Array:");
    for(i=0;i<20;i++)
    {
        printf("%d ",C[i]);
    }
}
int main()
{
    int a[10]={7,5,6,3,2,10,4,5,6,9};
    int b[10]={9,4,5,2,3,1,7,89,0,7};
    int c[20];
    Merge(a,b,c);
    return 0;
}
//5. Write a function to count the frequency of each elemnts of array.

/*                                    UPDATED                                         */
//1. write a function to swap two elemnt of given array with specific indices.
//2. Write a function to count total number of duplicate elements in an array.
//3. Write a function to print all uniqe elements in array.
//4. Write a function to merge two arrays of the same size sorted in decreasing order.
//5. Write a function to count the frequency of each elemnts of array.