#include<stdio.h>
int main()
{
    int a,b,i,pow=1;
    printf("Enter the value of base\n");
    scanf("%d",&b);
    printf("Enter the of power\n");
    scanf("%d",&a);

    for(i=0;i<a;i++)
    {
        pow=pow*b;
    }
    printf("%d",pow);
    return 0;
}