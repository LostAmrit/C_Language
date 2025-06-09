#include<stdio.h>
#include<string.h>
//#include "String35.exc"
//1. Write a function to calculate length of string
int length(char A[],int size)
{
    int count=0;
    printf("Enter line string:");
    fgets(A,size,stdin);
    A[strlen(A)-1]='\0';
    int i;
    for( i=0;A[i];i++);
    printf("%s",A);
    return i;
}
//2. write a function to reverce a string
void reverce(char A[],int size)
{
    char B[50];
    printf("Enter line string:");
    fgets(A,size,stdin);
    A[strlen(A)-1]='\0';
    int i,j;
    for(i=strlen(A),j=0;i>=0;i--)
    {
        B[j]=A[i];
        printf("%c",B[j]);
        j++;
    }
    B[j]='\0';
}
//3. Write a function to compare two strings.
int CompareString(char A[],int size)
{
    char B[50];
    printf("Enter String line");
    fgets(B,50,stdin);
    B[strlen(B)-1]='\0';
    if(strlen(A)!=strlen(B))
        return 0;
    for(int i=0;A[strlen(A)-1];i++)
    {
        if(A[i]==B[i])
            return 1;
    }
    return 0;
}
//4. Write a function to transform string into uppercase
void UpperString(char A[],int size)
{
    
    printf("Enter line string:");
    fgets(A,size,stdin);
    for(int i=0;A[i];i++)
    {
        if(A[i]==' ')
            printf(" ");
        if(A[i]>'Z')
            printf("%c",A[i]-32);
    }
}
//5. Write a function to transform a string into lowercase
void LowerString(char A[],int size)
{
    
    printf("Enter line string:");
    fgets(A,size,stdin);
    for(int i=0;A[i];i++)
    {
        if(A[i]==' ')
            printf(" ");
        if(A[i]<'a')
            printf("%c",A[i]+32);
    }
}
int main()
{
    int size=50;
    char a[size];
    printf("Enter a string:");
    fgets(a,50,stdin);
    a[strlen(a)-1]='\0';
    int b=CompareString(a,size);
    if(b)
        printf("Equal ");
    else
        printf("Not equal");
    return 0;
}