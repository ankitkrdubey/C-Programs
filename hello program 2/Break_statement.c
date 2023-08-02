#include<stdio.h>
int main()
{
    int i,num,flag=1;
    printf("Enter the value of num\n");
    scanf("%d",&num);
    for(i=2;i<=num/2;i++)
    {
        if(num%i==0)
        {
            printf("%d is not prime\n",num);
            flag=0;
            break;
        }
    }
    if(flag==1)
    
    printf("%d is prime\n",num);
    flag=0;
    return 0;
    
    
}
