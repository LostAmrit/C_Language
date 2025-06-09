#include<stdio.h>
#include<string.h>
int main()
{
    //int A[4][3]={{1,2,3},{4,5,6},{7,8,9}};
    char B[50];
    char A[3][10] = {"Hello","Brother"};
    //printf("%c",A[1][0]);
    for(int i=0;i<2;i++)
        printf("%s ",A[i]);
    return 0;
}

int m() {
    char names[3][20] = {"Zara", "Alice", "Bob"};
    char temp[20];

    // Sorting strings using Bubble Sort
    for (int i = 0; i < 2; i++) {
        for (int j = i + 1; j < 3; j++) {
            if (strcmp(names[i], names[j]) > 0) {  // Compare strings
                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }
        }
    }

    printf("\nSorted names:\n");
    for (int i = 0; i < 3; i++) {
        printf("%s\n", names[i]);
    }

    return 0;
}
