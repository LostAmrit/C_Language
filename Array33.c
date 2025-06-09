#include<stdio.h>
//1. Write a program to calculate the sum of two metrics each order 3*3.
int A1()
{
    int i,j,a,A[3][3],B[3][3],C[3][3],sum=0;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i==0&&j==0)
            scanf("%d",&a);
            A[i][j]=a;
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i==0&&j==0)
                printf("Enter 9 Elements:\n");
            scanf("%d",&a);
            B[i][j]=a;
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            C[i][j]=A[i][j]+B[i][j];
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",C[i][j]);
            if(j==2||j==5)
                printf("\n");
        }
    }
    return 0;
}
//2. write a program to calculate the product of two metrices each of order 3*3.
int A2()
{
    int i,j,a,A[3][3],B[3][3],C[3][3],sum=0,b,c,d;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i==0&&j==0)
                printf("Enter 9 Elements:\n");
            scanf("%d",&a);
            A[i][j]=a;
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i==0&&j==0)
                printf("Enter 9 Elements:\n");
            scanf("%d",&a);
            B[i][j]=a;
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            b=i;c=j;d=i;
            sum=sum+A[i][j]*B[j][i];
            j++;
            sum=sum+A[i][j]*B[j][i];
            j++;                                                    //INCOMPLET
            sum=sum+A[i][j]*B[j][i];
            C[b][c]=sum;
            sum=0;
            j=0;
            d++;
            if(d==3)
                break;
        } 
    }

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",C[i][j]);
            if(j==2)
                printf("\n");
        }
    }
    return 0;
}
//UPDATED
int AA2()
{
    int A[3][3],B[3][3],C[3][3],i,j,k,sum;
    printf("Enter 9 elements");
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            scanf("%d",&A[i][j]);
    printf("Enter 9 elements");
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            scanf("%d",&B[i][j]);
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
        {
            for(k=0,sum=0;k<3;k++)
                sum=sum+A[i][k]*B[k][j];
            C[i][j]=sum;
        }
    printf("Final product elements\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            printf("%d ",C[i][j]);
        printf("\n");
    }
    return 0;
}
//3. write a program to print transpose of a given mitrices.
int main()
{
    int A[3][3],B[3][3],i,j,k,a;
    printf("Enter 9 Elements:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            scanf("%d",&A[i][j]);
    }
    
    for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
                B[i][j]=A[i][j];
            
        }
    for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
                printf("%d ",B[j][i]);
            printf("\n");
        }
    return 0;
}
//4. Four player are playing a tournament of chess with roun robin method (each player with other player). Each win has 2 points, drow has 1 point and loose has 0 points. Declare a score board two dimentional array to store the score of players agains each players.
int A4()
{
    int i,j,a ,A[4][2];
    for(i=0;i<4;i++)
    {
        for(j=0;j<2;j++)
        {
            if(j==0)
                A[i][j]=i+1;
            else
               { printf("Enter total 4  players No. & its score(1->Drow,0->loose,2->win):\n");
                scanf("%d",&a);
                A[i][j]=a;
               }
        }
    }
    for(i=0;i<4;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }
}
//5. For que-4, define a function to update score_board after each match result.
void Update()
{
    int i,j,a ,A[4][2];
    for(i=0;i<4;i++)
    {
        for(j=0;j<2;j++)
        {
            if(j==0)
                A[i][j]=i+1;
            else
               { printf("Enter score of players No.1,2,3,4 score(1->Drow,0->loose,2->win):\n");
                scanf("%d",&a);
                A[i][j]=a;
               }
        }
    }
    for(i=0;i<4;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }
}
int A5()
{
    Update();
    return 0;
}
//6. For que-4, define a function to display score_board.
//7. For que-4, define a function which return a score of specific player.

//8. For que-4, define a function to find the winner of the tounament.
//9. For que-4, define a function to display rank of the players.
//10. For que-4 define a function to run tounament, in which user has to enter result of each game and update score score_board functions.

/*---------------------------------UPDATE--------------------------------------------------------*/
#include<stdio.h>
int A[4][4];
int B[4][2];
void update()

    {
        
        int i,j,score;
        for(i=0;i<4;i++)
        {
            for(j=0;j<4;j++)
            {
                if(i!=j)
                {
                    printf("Enter %d Player score with %d Player ",i,j);
                    printf("Enter score:");
                    scanf("%d",&score);
                    A[i][j]=score;
                }
                    
            }
        }
    }
void SetData()
{
        
        int i,j,score;
        for(i=0;i<4;i++)
        {
            for(j=0;j<4;j++)
            {
                if(i!=j)
                {
                    printf("Enter %d Player score with %d Player ",i,j);
                    printf("Enter score:");
                    scanf("%d",&score);
                    A[i][j]=score;
                }
                    
            }
        }
    }
void display()
    {
        
        int i,j,k,sum;
        for(i=0;i<4;i++)
        {
            j=0;
            sum=0;
            for(k=0;k<4;k++)
                sum=sum+A[i][k];
            if(j==0)
                {
                    B[i][j]=i;
                }
            j=1;
            B[i][j]=sum;
        }
        for(i=0;i<4;i++)
        {
            for(j=0;j<2;j++)
                printf("%d ",B[i][j]);
            printf("\n");
        }
    }
void specific(int k)
{
    int i,j;
    for(i=0;i<4;i++)
    {
        for(j=0;j<2;j++)
        {
            if(k==i)
            {
                printf("Player %d score %d",i,B[i][j+1]);
                break;
            }
        }
    }
}
int main()
{
    SetData();
    //update();
    display();
    int k;
    while(k)
    {
        printf("\nEnter Player 0 1 2 3 to know score");
        scanf("%d",&k);
        specific(k);
    }
    
    return 0;
}