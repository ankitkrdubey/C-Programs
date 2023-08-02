#include<stdio.h>
int main()
{
    int var=20;
    int*ptr;
    ptr=&var;
    printf("value at ptr=%p\n",ptr);
    printf("value at var=%d\n",var);
    printf("value at *ptr=%d\n",*ptr);
    printf("address of var=%u\n",&var);
    printf("address of ptr=%u\n",&ptr);
    
}