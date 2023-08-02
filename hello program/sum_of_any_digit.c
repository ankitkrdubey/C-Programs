#include<stdio.h>
int main()
{
    long int n,sum=0,rem;
    printf("Enter the number\n");
    scanf("%d",&n);
    while(n>0)
    {
        rem=n%10;
        sum=sum+rem;
        n=n/10;
    }
    printf("%d\n",sum);
    
}