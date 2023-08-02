#include<stdio.h>
int main()
{
    int arr[10],i,sum=0;
    for(i=0;i<10;i++)
    {
        printf("Enter the data of array arr[%d]=",i);
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    for(i=0;i<10;i++)
    printf("%d\t",arr[i]);
    printf("\n");
    printf("sum of array elements=%d\n",sum);
}