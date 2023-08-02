#include<stdio.h>
int sum(int x,int y);
main()
{
    int a,b,s;
    printf("Enter the value of a nd b\n");
    scanf("%d%d",&a,&b);
    s=sum(a,b);
    printf("sum of %d and %d=%d\n",a,b,s);
}
int sum(int x,int y)
{
int s;
s=x+y;
return s;
}