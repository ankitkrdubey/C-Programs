#include<stdio.h>
int main()
{
    int rem ,i,rev=0,n;
    printf("Enter the value of n:\n");
    scanf("%d",&n);
    while(n!=0)
    {
        
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
        printf("reverse the enter number=%d\n",rev);
    }
        return 0;
    
}