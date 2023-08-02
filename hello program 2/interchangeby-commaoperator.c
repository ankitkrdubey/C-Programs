#include<stdio.h>
main()
{
    int a,b,temp;
    printf("Enter the values of and b\n");
    scanf("%d%d",&a,&b);
    printf("a=%d\nb=%d\n",a,b);
    temp=a,a=b,b=temp;
    printf("a=%d\nb=%d\n",a,b);
    
}