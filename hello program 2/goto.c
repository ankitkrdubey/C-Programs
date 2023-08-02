#include<stdio.h>
int main()
{
    int n;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    if(n%2==0)
    goto even;
    else
    goto odd;

    even:
    printf("%d is a even number\n",n);
    goto end;

    odd:
    printf("%d is a odd number\n",n);
    goto end;
    end:
    printf("\n");
    
}