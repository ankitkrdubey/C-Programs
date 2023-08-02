#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter the value of i and n\n");
    scanf("%d%d",&i,&n);
    while(i<=n)
    {
        printf("%d\t",i);
        i=i+1;

    }
    return 0;
}