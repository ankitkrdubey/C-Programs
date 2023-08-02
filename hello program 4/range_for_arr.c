#include<stdio.h>
int main()
{
    int a[4][4],b[4][4],c[4][4];
    int i,j;
    printf("Enter the value of matrix A:\n");
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            scanf("%d",&a[i][j]);

        }
    }
    printf("Enter the value of matrix B:\n");
    for(i=0;i<4;i++)
    {
        
        for(j=0;j<4;j++)
        {
            
            scanf("%d",&b[i][j]);
        }
    }

    //matrix is going to txt file 
    for(i=0;i<4;i++)
    {

        
            
        for(j=0;j<4;j++)
        {
        
            c[i][j]=a[i][j]+b[i][j];
        }
    }

        
    
    printf("Matrix C is:\n");
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%d",c[i][j]);
        }
        printf("\n");
    }
    return 0;

    
    

}