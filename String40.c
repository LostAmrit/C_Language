#include<stdio.h>
#include<string.h>
void str2d()
{
    char A[5][10]={"ramhn","jhhan","mohan","Rohan"};        //Simple declearation
    for(int i=0;i<4;i++)
        printf("%s ",A[i]);
    printf("\f");
    printf("Enter String:\n");          //Illegel memory access
    for(int i=0;i<5;i++)
        scanf("%s",A[i]);
    for(int i=0;i<4;i++)
        printf("%s ",A[i]);
}
//1. Write a function to store strings, teken from user, to the given 2d char array
void String2D(char str[][20],int n)
{
    printf("Enter string:\n");
    for(int j=0;j<=n;j++)
    {
        fgets(str[j],20,stdin);
        int l = strlen(str[j]);
        if (str[j][l - 1] == '\n') 
            str[j][l - 1] = '\0';
    }
    for(int i=0,j=0;i<n;j++)
    {
        printf("%c",str[i][j]);
        if(str[i][j]=='\0')
            printf(" "),j=0,i++;
    }
        
    
}
//2. Write a function to find number of vowels in each of the 5 strings stored in two dimention arrays, taken from user.
void CountVowel(char str[][20],int n)
{
    int i,j,k,count;
    char A[]="AEIOUaeiou";
    String2D(str,n);
    for(i=0;A[i];i++)
    {
        for(j=0,k=0,count=0;j<n;k++)
        {
            if(str[j][k]==A[i])
                count++;
            else if(str[j][k]=='\0')
                k=0,j++;
        }
        printf("\f%c-->%d",A[i],count);
    }
}
//3. Write a program to short 10 city in two dimention arrays, taken from the user.
//4. write a function to store each word a string in 2 dimention char array.
//5. Write a function to remove duplicate names stored in list of the names stored in 2d char array

void String2D(char str[][20], int n) {
    printf("Enter strings:\n");
    for (int j = 0; j < n; j++) {
        fgets(str[j], 20, stdin);
        int l = strlen(str[j]);
        if (str[j][l - 1] == '\n') {
            str[j][l - 1] = '\0';  // Remove newline character
        }
    }

    printf("You entered:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", str[i]);  // Print each string
    }
}

int main() {
    int n = 3;  // Number of strings
    char str[n][20];
    String2D(str, n);
    return 0;
}

int main()
{
    printf("Enter size(Number of word)");
    int n;
    scanf("%d",&n);
    char A[n][20];
    String2D(A,n);
    //CountVowel(A,n);
    //printf("%s",a);
    //str2d();
    return 0;
}