#include<stdio.h>
int main()
{
    int i=1,n,a=1,b=3,z;
    printf("Enter the value of n\n");
    scanf("%d",&n);

    printf("%d\t%d\t",a,b);
    while(i<n)
    {
        z=a+b;
        printf("%d\t",z);
        a=b;
        b=z;
        i+=1;
    }
    printf("\n");

    return 0;

}