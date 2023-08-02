#include<stdio.h>
#define size 10
int main()
{
    int arr[size],up,mid,low,i,item;
    printf("Enter the elements of a array sorted order\n");
    for(i=0;i<size;i++)
    {
    scanf("%d",&arr[i]);
    }

    printf("Enter the elements which you want to search\n");
    scanf("%d",&item);
    
    low=0;
    up=size-1;
    mid=(low+up)/2;
    while(low<=up&&item!=arr[mid])
    {
        mid=(low+up)/2;
        {
            if(item>arr[mid])
            low=mid+1;
            {
                if(item<arr[mid])
                up=mid-1;
                {
                    if(item=arr[mid])
                    printf("%d found at the position %d",item,mid+1);
                }
            }
        }
        
        
    }

    if(low>up)
    printf("%d not found\n",item);   
    
    
}