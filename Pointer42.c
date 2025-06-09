#include<stdio.h>
//1. Write a function to swap value of two int variables (TSRN).
void swap(int *a,int *b)
{
    *a=*a+*b;
    *b=*a-*b;
    *a=*a-*b;
}
void Swap(int *a,int *b)
{
    int c=*a;
    *a=(*b);
    *b=(c);
}
int _swap()
{
    int x,y;
    printf("Enter two number:");
    scanf("%d%d",&x,&y);
    Swap(&x,&y);
    printf("x=%d & y=%d",x,y);
    return 0;
}
//2. Write a function to search all occurrences of a given character in a given string. Result of search is a list of indicates to be stored in the given array.[void search_all_occurrences(char *str,char ch,int *arr);]
void Search_all_occurences(char *str,char ch)
{
    int i,count;
    for(i=0,count=0;(str)[i];i++)
    {
        if(ch==(str)[i])
            count++;
    }
    printf("All Occurences of %c is %d",ch,count);
}
//3. Write a function to convert a given string into uppercase.
void Upper_str(char *str)
{
    int i;
    for(i=0;str[i];i++)
    {
        if(str[i]>'Z' && str[i]<='z')
            str[i]=str[i]-32;
    }
}
//4. write a function to convert a given string into lowert case.
void Lower_str(char *str)
{
    int i;
    for(i=0;str[i];i++)
    {
        if(str[i]>'A' && str[i]<='Z')
            str[i]=str[i]+32;
    }
}
//5. Write a function to extract a substring from a given string with specified start index (inclusive) and end index (exclusive), and store extracted string in another char array. [void extract_string(char *str,int start_index,int end_index,char *result);]
void extract_string(char *str,int start_index,int end_index,char *result)
{
    int i,j;
    for(i=start_index,j=0;i<=end_index||str[j]=='\0';i++,j++)
        result[j]=str[i];
    result[i]='\0';
}
int main()
{
    char A[]="Hello Brother Kyse ho 343333";
    char ch,r[50];
    int s,e;
    printf("Enter start nd end index");
    scanf("%d%d",&s,&e);
    // printf("Enter a character:");
    // scanf("%c",&ch);
    //Search_all_occurences(&A,ch);
    //Upper_str(A);
    //Lower_str(A);
    extract_string(A,s,e,r);
    printf("%s",r);
    return 0;
}