#include<stdio.h>
int main()
{
    int arr[100][50];
    int i,j,row,col;
    printf("Enter the no. of elements in row and col:\n");
    scanf("%d%d",&row,&col);

    printf("Enter elements of row %d and col %d:\n",row,col);
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("arr[%d][%d]=",i,j);
            scanf("%d%d",&arr[i],&arr[j]);
        }
    }
    return 0;



}