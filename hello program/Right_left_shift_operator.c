#include<stdio.h>
int main()
{
    int a;
    //*FOR RIGHT SHIFT OPERATOR//*
    printf("Enter the value of a\n");
    scanf("%d",&a);
    printf("The original value is a is =%d\n",a);
    printf("The number shifted one bit in right=%d\n",a>>1);
    printf("The number shifted two bit in right=%d\n",a>>2);
    //*FOR LEFT SHIFT OPERATOR//*
    printf("The number shifted one bit in left=%d\n",a<<1);
    printf("The number shifted two bit in left=%d\n",a<<2);

    return 0;
    



}