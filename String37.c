#include<stdio.h>
#include<string.h>
//1. Write a function to count vowel in a given string
void CountVowel(char A[],int size)
{
    printf("Enter line string:");
    fgets(A,size,stdin);
    A[strlen(A)-1]='\0';
    char B[10]="AEIOUaeiou";
    int i,j,count=0;
    for(i=0;B[i];i++)
    {
        for(j=0,count;A[j];j++)
        {
            if((B[i]==A[j]) )
            {
                count++;
                break;
            }
        }
    }
    printf("Vowel=%d",count);
}
//2. Write a function a character in a given string. Return index of occurence of given  character. return -1 if character is not found
int FindCharacter(char A[],int size)
{
    char a;
    printf("Enter a character to find in string:");
    fflush(stdin);
    scanf("%c",&a);
    for(int i=0;A[i];i++)
    {
        if(a==A[i])
            return i;
    }
    return -1;
}
//3. Write a function to find character in a given string specified indices (start index (inclusive)) and end index (Exclusive).
int FindCharacterInSpecific(char A[],int size) 
{
    char a;
    int b;
    printf("Enter a character to find in string:");
    fflush(stdin);
    scanf("%c",&a);
    printf("Enter a index no. do you want to search character");
    scanf("%d",&b);
    for(int i=0;i<b;i++)
    {
        if(a==A[i])
            return i;
    }
    return -1;
}
//4. Write a function to swap two character of a given string with specified indices.
//5. Write a function to check whether a given string is an alphanumeric sting or not. (Alpha numeric string must contain atleat one alpha or one digit)
int CheckAlphaNumeric(char A[],int size)
{int i,a,b;
    for(i=0;A[i];i++)
    {
        if(A[i]>='A'&&A[i]<='z')
        {
            a=1;
        }
        else if(A[i]>='0' && A[i]<='9')
        {
            b=1;
        }
        
    }
    if(a==b)
        return 1;
    else    
        return 0;
}
int main()
{
    int size=50;
    char a[size];
    printf("Enter line string:");
    fgets(a,size,stdin);
    a[strlen(a)-1]='\0';
    //CountVowel(a,size);
    //int b=FindCharacter(a,size);
    //int b=FindCharacterInSpecific(a,size);
    int b=CheckAlphaNumeric(a,size);
    // if(b==-1)
    //     printf("Character not found");
    // else
    //     printf("Character found at %d index",b);
    if(b)
        printf("String is AlphaNumeric");
    else
        printf("String is Not AlphaNumeric");
    
    return 0;
}