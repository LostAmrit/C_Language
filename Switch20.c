#include<stdio.h>
#include<stdlib.h>
/*1.Write a program to find display grade obtained by a student in a test. Grading specification are follows:
-Marks from 90 to 100 :Grade A
-Marks from 80 to less than 90: Grade B
-Marks from 70 to less than 80 : Grade C
-Marks from 60 to less than 70 : Grade D
-Marks from 50 to less than 60 : Grade E
-Marks below 50 : F
-Marks greater than 100 or less than 0 : Invalid Marks  */
int A1()
{
    int marks;
    printf("Enter Student's marks");
    scanf("%d",&marks);
    switch(marks)
    {
        case 90 ... 100:
            printf("Grade A");
            break;
        case 80 ...89:
            printf("Grade B");
            break;
        case 70 ... 79:
            printf("Grade C");
            break;
        case 60 ... 69:
            printf("Grade D");
            break;
        case 50 ... 59:
            printf("Grade E");
            break;
        case 1 ... 49:
            printf("Grade F");
            break;
        default:
            printf("Invailed Marks");
    }
    return 0;
}
/*2.Weite a menu driven program with the following options:
    1. Factorial of a number
    2. Check Even or Odd
    3. Area of circle
    4. Sum of N Natural Number
    5. Exit
*/
int A2()
{
    int a,N,i;
    while(1){
    printf("1. Factorial of a number\n2. Check Even or Odd\n3. Area of circle\n4. Sum of N Natural Number\n5. Exit\n Enter:");
    scanf("%d",&a);
    switch(a)
    {
        case 1:
        {
            printf("Enter a Number:");
            scanf("%d",&N);
            a=1;
            for(i=N;i>=1;i--)
            {
                a*=i;
            }
            printf("Factorial of %d %d\n",N,a);
            break;
        }
        case 2:
        {
            printf("Enter a Number:");
            scanf("%d",&N);
            if(N%2==0)
            {
                printf("Even Number\n");
            }
            else 
                printf("Odd Number\n");
            break;
        }
        case 3:
        {
            printf("Enter a Radius of Circle:");
            scanf("%d",&N);
            printf("Area %f\n",3.14*N*N);
            break;
        }
        case 4:
        {
            printf("Enter a Number:");
            scanf("%d",&N);
            a=0;
            for(i=N;i!=0;i--)
            {
                a+=i;
            }
            printf("Sum of %d Natural Number %d\n",N,a);
            break;
        }
        case 5:
            exit(0);
    }
    }
    return 0;
}
//3.Write s program to check whether a given character is uppercase alphabet or lower case alphabet or some other character, using switch casestatement.
int A3()
{
    char a;
    printf("Enter a character");
    scanf("%c",&a);
    switch(a)
    {
        case 'A' ... 'Z':
            printf("Upercase Alphabet");
            break;
        case 'a' ... 'z':
            printf("Lower Case Alphabet");
            break;
        default:
            printf("Some Other Character");
    }
    return 0;
}
//4.Write a program to check whether a given character is vowel or consonant or some other special character, using switch case statement.
int A4()
{
    char a;
    printf("Enter a character");
    scanf("%c",&a);
    switch(a)
    {
        case 'a':
            printf("Vowel Character");
            break;
        case 'e':
            printf("Vowel Character");
            break;
        case 'i':
            printf("Vowel Character");
            break;
        case 'o':
            printf("Vowel Character");
            break;
        case 'u':
            printf("Vowel Character");
            break;
        default:
            printf("Some other special character");
    }
    return 0;
}
/*5.Write a menu driven program with the following options:
    1. calculate LCM of tro numbers
    2. Calculate sum of the digits of a number
    3. Volume of a cuboid
    4. Check whether a given number is prime or not
    5. Exit*/
int A5()
{
    int a;
    int count=0;
    while (1){
    printf("1. calculate LCM of tro numbers\n2. Calculate sum of the digits of a number\n3. Volume of a cuboid\n4. Check whether a given number is prime or not\n5. Exit\nEnter:");
    scanf("%d",&a);
    switch(a)
    {
        case 1:
        {
            int b,c;
            printf("Enter two number");
            scanf("%d%d",&b,&c);
            for(int i=b>c?b:c;i<=b*c;i++)
            {
                if(i%b==0&&i%c==0)
                {
                    printf("LCM %d\n",i);
                    break;
                }
            }
            break;
        }
        case 2:
        {
            printf("Enter a number");
            scanf("%d",&a);
            while(a)
            {
                a=a/10;
                count++;
            }
            printf("Number of digit %d\n",count);
            break;
        }
        case 3:
        {
            printf("Enter length, breath, hight");
            int l,b,h;
            scanf("%d%d%d",&l,&b,&h);
            printf("Volume %d\n",l*b*h);
            break;
        }
        case 4:
        {
            int i;
            printf("Enter a number");
            scanf("%d",&a);
            for(i=2;i<a;i++)
            {
                if(a<=1)
                {
                    printf("Non prime Number %d\n",a);
                    break;
                }
                else 
                {
                    if(a%i==0)
                    {
                        printf("Non Prime Number %d\n",a);
                        break;
                    }
                } 
            }
            if(i==a)
            {
                printf("Prime Number %d\n",a);
            }
            break;
        }
        default:
            exit(0);
    }
    }
    return 0;
}