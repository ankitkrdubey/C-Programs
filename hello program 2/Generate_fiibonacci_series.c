#include<stdio.h>
int main()
{
    int i,n,x=0,y=1,z;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    printf("%d\t",y);
    for(i=1;i<n;i++)
    {
        z=x+y;
        printf("%d\t",z);
        x=y;
        y=z;
    }
    printf("\n");

    
}