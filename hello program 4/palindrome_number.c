#include<stdio.h>
int main()
{
    int n,r,sum=0,temp;
    printf("Enter a number\n");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        r=n%10;
        sum=(sum*10)+r;
        n=n/10;
    }
    if(temp==sum)
    printf("Given number is palindromic number");
    else
    printf("number is not palindromic number");
}