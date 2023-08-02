#include<stdio.h>
int main()
{
    int a,b,sum,mult,div,rem;
    printf("Enter the value of a and b\n");
    scanf("%d%d",&a,&b);
    sum=a+b;
    mult=a*b;
    div=a/b;
    rem=a%b;
    printf("The sum is=%d\n",sum);
    printf("The multiplication is=%d\n",mult);
    printf("The division is=%d\n",div);
    printf("The remainder is=%d",rem);
    return 0;
}