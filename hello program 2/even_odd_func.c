#include<stdio.h>
int odd_even(int n);
int main()
{
    int n,ankit=0;
    printf("Enter the number\n");
    scanf("%d",&n);
    ankit=odd_even(n);
    if(ankit==0)
        printf("The number is odd");
        else
        printf("The number is even");  
}

int odd_even(int n)
{
    if(n%2==0)
    return 1;
    else
    return 0;
}