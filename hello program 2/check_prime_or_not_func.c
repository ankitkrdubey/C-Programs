#include<stdio.h>
int prime(int n);
int main()
{
   int n,i,c=0;
   printf("Enter any number n:");
   scanf("%d",&n);

   for(i=1;i<=n;i++)
   c=prime(n);
   if(c==0)
   printf("The number is prime\n");
   else
   printf("The number is odd");

}
int prime(int n)
{
   if(c==2)
   printf("prime number");
   else
   printf("not prime");
}