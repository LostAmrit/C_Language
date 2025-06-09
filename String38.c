#include<stdio.h>
#include<string.h>
//1. Write a function check whether a given string is palindrome or not
char* Reverce(char A[])
{
    int l=strlen(A),i;
    char ch;
    for(i=0;i<l/2;i++)
    {
        ch=A[i];
        A[i]=A[l-1-i];
        A[l-1-i]=ch;
    }
    return A;
}
int Palindrome(char A[])
{
    char B[50];
    for(int i=0;A[i];i++)
    {
        B[i]=A[i];
    }
    int l=strlen(A),i;
    char ch;
    for(i=0;i<l/2;i++)
    {
        ch=A[i];
        A[i]=A[l-1-i];
        A[l-1-i]=ch;
    }
    for(int i=0;A[i];i++)
    {
        if(A[i]==B[i]);
        else
            return 0;


    }
    return 1;
}
//2. Write a function to trim a string (Removing leading spaces from the both ends).
char* Trim(char A[])
{
int i,count=0;
for(i=0;A[i];i++)
{
    if(A[i]==' ')
        count++;
    else
        break;
}
for(i=0;A[i];i++)
{
    A[i]=A[i+count];
}
for(i=strlen(A)-1;A[i]==' ';i--);
A[i+1]='\0';
return A;


}
//3. Write a function to count word in a given string
int CountWord(char A[])
{
    int count=0;
    for(int i=0;A[i];i++)
    {
        if(A[i]==' ')
            count++;
    }
    return count+1;
}
//4. Write a function to reverce amstring word wise.(For example if the given string is "Mysirg Education Services" the the resulting string should be "Services Education Mysirg")
char* Amstring(char A[])
{
    int i,j,k,Total_word;
    Total_word=CountWord(A);
    char B[Total_word][20];
    for(i=0,j=0,k=0;A[i];i++,k++)
    {
        if(A[i]!=' ')
            B[j][k]=A[i];
        else
        {
            B[j][k]='\0';
            k=-1;
            j++;
        }
        //return B;
    }
    A[0]='\0';
    //return A;
    for(i=Total_word;i>=0;i--)
    {
        if(A[0]!="\0")
            strcat(A," ");
        strcat(A,B[i]);
        
            
    }
    A[strlen(A)-1]='\0';
    return A;
    //printf("%s",A);
    //printf("%s %s %s ",B[0],B[1],B[2]);
}
//5. Write a function to do case insensitive comparision of two string
int CaseInsensitive(char A[])
{
    char B[50];
    printf("Enter a String");
    fgets(B,50,stdin);
    B[strlen(B)-1]='\0';
    if(strlen(A)!=strlen(B))
        return 0;
    for(int i=0;A[i];i++)
    {
        if(A[i]>='A'&&A[i]<='Z')
        {
            A[i]=A[i]+32;
        }
        else if(B[i]>='A'&&B[i]<='Z')
            B[i]=B[i]+32;
        else if(A[i]!=B[i])
            return 0;

    }
    return 1;
}
int main()
{
    char a[]="Mysirg Equcaton Service";
    char b[50];
    strcpy(b,a);
    //int c=Reverce(a);
    //int c=Trim(a);
    int c=Amstring(a);
    printf("%s",c);
    // if(Palindrome(a))
    //     printf("String %s is palindrome",a);
    // else
    //     printf("String %s is Not palindrome",a);
    //int b=CountWord(a);
    // if(CaseInsensitive(a))
    //     printf("%s is Case Insensitive Equal");
    // else
    //     printf("%s is not Case Insensitive Equal",b);
    // //printf("Total word :%d",b);
    // return 0;
}