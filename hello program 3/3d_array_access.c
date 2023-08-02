#include<stdio.h>
int main()
{
    
    int arr[100][50][10];
    int i,j,k,row,col,index;
    printf("Enter the row,column and index:\n");
    scanf("%d%d%d",&row,&col,&index);
    printf("Enter elements of row %d,col %d and index %d:\n",row,col,index);

    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            for(k=0;k<index;k++)
            {
                
                printf("arr[%d][%d][%d]=",i,j,k);
                scanf("%d%d%d",&arr[i],&arr[j],&arr[k]);
            }
        }
    }
    return 0;

}
