#include<stdio.h>
int main()
{
    int n,count=0;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    do
    {
        n=n/10;
        count++;
    }
    while(n>0);
    printf("Number of digits=%d\n",count);
    return 0;
    

}