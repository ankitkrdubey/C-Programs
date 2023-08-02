#include<stdio.h>
int main()
{
    int i, arr[50],num,sum=0,val[50];
    printf("Enter the num of elements:\n");
    scanf("%d",&num);
    printf("Enter elements%d\n",num);
    for(i=0;i<num;i++)
    {
        printf("arr[%d]=",i);
        scanf("%d",&arr[i]);
        
    }
    for(i=0;i<num;i++)
    {
        val[i]=val[i]*val[i];
        sum=sum+val[i];

    }
    printf("Sum of square=%d",sum);
    
    //squarring arrays without using functions
    

}