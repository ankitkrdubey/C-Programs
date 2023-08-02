#include<stdio.h>
int main()
{
   int x[3][2]={{0,1},{2,3},{4,5}},i,j;
   for(i=0;i<3;i++)
   {
    for(j=0;j<2;j++)
    {
        printf("Elements at x[%d][%d]=%d\n",i,j,x[i][j]);
    }
   }
   return 0;
}