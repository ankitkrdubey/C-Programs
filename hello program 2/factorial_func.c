#include<stdio.h>
int fact(int n);
int main()
{
    int i,n,p=1;
    printf("Enter the number:  \n");
    scanf("%d",&n);
    p=fact(n);
    printf("Factorial of%d\n is %d\n",n,p);

}
int fact(int n)
{
    int p=1,i;
    for(i=1;i<=n;i++)
    {
    p=p*i;
    }
    return p;

}