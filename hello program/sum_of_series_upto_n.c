#include<stdio.h>
int main()
{

    int i, n,sum=0,terms=1;
    printf("Enter the number\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+terms;
        terms=terms+i;

    }
    printf("The sum of series upto %d terms is =%d\n",n,sum);
}