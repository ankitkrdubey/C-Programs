#include<stdio.h>
int main()
{
    int n,rem,temp;
    int p=0;
    printf("Enter the number for check\n");
    scanf("%d",&n);
    temp=n;
    
    while(n>0)
    {
        rem=n%10;
        p=p+(rem*rem*rem);
        n=n/10;
        printf("result is=%d\n",p);
    }

    if(temp==p)
    
    printf("Yes. It is Armstrong NO.");
    else
    printf("No. It is not an Armstrong No");
    
    return 0;
}