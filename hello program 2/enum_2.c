#include<stdio.h>
enum year{Jan, Feb, Mar, Apr, May, Jun, Jul, Aug, sep, Oct, Nov, Dec};
int main()
{
    int i;
    for(i=Jan; i<=Dec;i++)
    printf("%d\t",i);
    return 0;
}