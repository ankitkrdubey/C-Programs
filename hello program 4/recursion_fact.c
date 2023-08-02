#include<stdio.h>
long fact(int n);
int main()
{
    int num;
    printf("Enter the value of num\n");
    scanf("%d",&num);
    printf("Factorial of %d is %ld/n",num,fact(num));
}
long fact(int n)
{
    if(n==0)
    return (1);
    else
    return(num*(fact(n-1)));
}