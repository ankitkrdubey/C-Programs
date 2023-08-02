#include<stdio.h>
int main()
{
    int a;
    printf("Enter the value of a\n");
    scanf("%d",&a);
    if(a<0)
    printf("Number entered is negative,that is %d\n",a);
    else
    printf("Number entered is positive,that is %d\n",a);

    return 0;

   
}