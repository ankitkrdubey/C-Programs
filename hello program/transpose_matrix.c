#include<stdio.h>
#define row 2
#define col 2
int main()
{
    int i,j,mat[row][col],trans[col][row];
    printf("Enter matrix:\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&mat[i][j]);

        }
    }
    //create transpose
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            trans[j][i]=mat[i][j];
        }
    }
    printf("The transpose matrix:\n");
    for(i=0;i<col;i++)
    {
        for(j=0;j<row;j++)
        {
            printf("%d\t",trans[i][j]);
        }
        printf("\n");

    }
    return 0;



}