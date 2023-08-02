//program to demonstrate printing of a string//
#include<stdio.h>
int main()
{
    char name[]="Ankit_kumar_Dubey";
    int i=0;
    while(i<=7)
    {
        printf("%c",name[i]);
        i++;
    }
    printf("\n");
    return 0;
}