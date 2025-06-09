#include<stdio.h>
//1. Define a function to input variabe lenght string and store it in array without memory wastage.
void DMAConcept()
{
    int size,*p;
    // printf("Enter size of array:");
    // scanf("%d",&size);
    size=5;
    int *A=malloc(20);
    printf("Enter 5 Elements:");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&A[i]);
    }
    for(int i=0;i<size;i++)
        printf("%d ",A[i]);
    p=A;
    p=realloc(A,40);
    printf("Enter again:");
    for(int i=size;i<2*size;i++)
    {
        scanf("%d",&p[i]);
    }
    for(int i=0;i<2*size;i++)
        printf("%d ",p[i]);
}
int main()
{
    DMAConcept();
    return 0;
}
//2. write a program to ask user to input a number of data values he would like to enter then creat an array dynamically to accomodate the data values. Now take the input from the user and display the average of data values.
//3. write a program to calculate the sum of n numbers entered by the user using malloc and free
//4. write a function to merge two array array elements and store it in dynemically created array. Return address of this dynemically created array.