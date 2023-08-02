#include<stdio.h>
main()
{
    int a,b,max;
    printf("Enter the value of a nd b\n");
    scanf("%d%d",&a,&b);
    max=a>b?
    a:b;
    printf("largest number between %d and %d is %d\n",a,b,max);
}