#include<stdio.h>
#include<string.h>
//1. Write a program to convert a given string into lowercase
int A1()
{
    char A[50]="hello uncle kitna Masti kam ke bat me aate Hai";
    char a='a';
    for(int i=0;A[i];i++)
    {
        if(A[i]<'a'&& A[i]>='A')
        {
            if(A[i]==' ')
                A[i]=' ';
            else
                A[i]=A[i]+32;
        }
        printf("%c",A[i])    ;
    }
return 0;
}
//2. Write a program to reverce a string
int main ()
{
    char A[50];
    printf("Enter a String line:");
    fgets(A,50,stdin);
    for(int i=0;i<strlen(A)/2;i++)
    {
        char a=A[i];
        A[i]=A[strlen(A)-1-i];
        A[strlen(A)-1-i]=a;
    }
    printf("%s",A);
    
}
//3. Write a program in C the total number of alphbets, digits and special character in string

int A3()
{
    char A[50]="Aaj kal kai dino se 1500$ kama raha hu";
    int count=0,count1=0,count2=0;
    for(int i=0;A[i];i++)
    {
        if(A[i]>='A' && A[i]<='z')
            count++;
        else if(A[i]>='0' && A[i]<='9')
            count1++;
        else
            count2++;
   }
    printf("Sum of \nAlphabets:%d\nDigits:%d\nSpecial character:%d ",count,count1,count2);
    return 0;
}
//4. Write a C program to copy one string to another char array
int A4()
{
    char A[50]="Aaj kal kai dino se 1500$ kama raha hu";
    char B[50];
    strcpy(B,A);
    printf("%s",B);
    return 0;
}
//5. Write a program to find first occurrence of given character
int A5()
{
    char A[50]="Aaj kal kai dino se 1500$ kama raha hu";
    char test;
    printf("Enter a Character to check in Array:");
    scanf("%c",&test);
    int i;
    for(i=0;A[i];i++)
    {
        if(A[i]==test)
        {
            printf("%c is avalabel in first %d possition ",test,i);
            break;
        }
    
    }
    if(i==strlen(A));
        printf("%c is Note found in Array",test);
    return 0;
}