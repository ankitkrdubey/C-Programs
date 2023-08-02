#include<stdio.h>
int main()
{
    int choice,i,j,sum;
    printf("Enter the choices");
    scanf("%d",&choice);

    switch(choice)
    case1:
    {
        printf("Enter the value of i and j\n");
        scanf("%d%d",&i,&j);
        sum=i+j;
        printf("i=%dj=%dsum=%d",i,j,sum);
        
     
    }
 
    case2:
    {
        printf("Enter the value of i and j\n");
        scanf("%d%d",&i,&j);
        sum=i*j;
        printf("i=%dj=%dsum=%d",i,j,sum);
        
    }
 
    case3:
    {
        printf("Enter the value of i and j\n");
        scanf("%d%d",&i,&j);
        sum=i/j;
        printf("i=%dj=%dsum=%d\n",i,j,sum);
    }
 
}