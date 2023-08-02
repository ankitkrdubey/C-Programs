#include<stdio.h>
int main()
{
    int arr[5]={10,20,30,40,50};
    int(*ptr)[5]=&arr;
    ptr=&arr;
    printf("Address of the memory=%d\n",ptr);
    printf("Address of the first element in the array=%d\n",*ptr);
    printf("value of the first array=%u/n",&arr);
    return 0;

}