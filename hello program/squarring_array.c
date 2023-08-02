#include<stdio.h>
int main()
{
    int i,arr[6]={1,2,3,4,5,6};
    func(arr);
    printf("The content of new array:\n");
    for(i=0;i<6;i++)
    printf("%d\t",arr[i]);
    printf("\n");
    
}
func(int val[])
{
    int sum=0,i;
    for(i=0;i<6;i++)
    {
        val[i]=val[i]*val[i];
        sum=sum+val[i];
    }
    printf("sum of square=%d\n",sum);
}
