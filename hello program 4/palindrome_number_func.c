#include<stdio.h>
int palind(int n);
int main()
{
    int n,r,sum=0,temp;
    printf("Enter a number\n");
    scanf("%d",&n);
    temp=n;
    sum=palind(n);
    if(temp==sum)
    printf("The numer is palindrome");
    else
    printf("not palindrome number");
}
int palind(int n)
{
    int r,sum=0;
    while(n>0)
    {
    r=n%10;
    sum=(sum*10)+r;
    n=n/10;
    }
    return sum;

}