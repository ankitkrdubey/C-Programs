#include<stdio.h>
#include<math.h>
int main()
{
    double n,s;
    printf("Enter a number\n");
    scanf("%lf",&n);

    s=sqrt(n);
    printf("The square root of %lf is %lf\n",n,s);
}