#include<stdio.h>
int rev(int n);
int main()
{
    int n,rem,l=0;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    l=rev(n);
    printf("rev no is %d",l);   
}
int rev(int n)
{
    int l=0,rem;
    while(n!=0)
    {
    rem=n%10;
    l=l*10+rem;
    n=n/10;
    }
    return l;


}