#include<stdio.h>
#include<string.h>
//1. Write a program to print length of the string. (Without using builtin method)
int A1()
{
    char A[50];
    int i;
    printf("Enter a line (string)");
    fgets(A,50,stdin);
    A[50]=strlen(A)-1;
    for(i=0;A[i];i++);
    int length=i;
    printf("%d",length);
    return 0;
}
//2. Write a program to count the occurence of a given charecter in a given string.
int A2()
{
    char A[50],a;
    int i,count=0;
    printf("Enter a line (string)");
    fgets(A,50,stdin);
    printf("Enter  a character to count occurence of character");
    scanf("%c",&a);
    for(int i=0;A[i];i++)
    {
        if(a==A[i])
            count++;
    }
    printf("Total %c is:%d",a,count);
    return 0;
}
//3. write a program to count vowel in given string
int main()
{
    char A[50]="teri meri story jAisee bIk bang story";
    char B[15]="aeiouAEIOU";
    int count=0;
    for(int i=0;B[i];i++)
    {
        //printf("%c ",B[i]);
        for(int j=0;A[j];j++)
        {
            if(B[i]==A[j])
            {   
                count++;
            }
        }
    }
    printf("Total vowel:%d",count);
    return 0;
}
//4. Write a program to count space in a given string
int A4()
{
    char A[50]="teri meri story jaisee bik bang story";
    char B=' ';
    int count=0;
        for(int j=0;A[j];j++)
        {
            if(A[j]==B)
            {   
                count++;
                
            }
        }
    
    printf("Total space:%d",count);
    return 0;
}

//5. write a program to convert a given string into uppercase
int A5()
{
    char A[50]="teri meri story jaisee bik bang story";
    char B[50];
    char C=' ';
        for(int j=0;A[j];j++)
        {
            if(A[j]==C)
                {
                    //continue;
                    B[j]=' ';
                }
            else
                B[j]=A[j]-32;
            printf("%c",B[j]);
        }
    
}
