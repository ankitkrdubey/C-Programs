#include<stdio.h>
int main()
{
    char str[40];
    printf("Enter a string to be reversed:\n");
    scanf("%s",str);
    printf("After the reverse of a string:%s",strrev(str));
    return 0;

}