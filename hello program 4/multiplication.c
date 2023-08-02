#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter the number\n");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    printf("n*%d=%d\n",n*i);
    return 0;
}
