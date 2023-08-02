#include<stdio.h>
int main()
{
    int n,rev=0,rem;
    printf("Enter the reverse number\n");
    scanf("%d",&n);
    while(n!=0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
        printf("reverse the enter number=%d\n",rev);
    }
}