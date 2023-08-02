#include<stdio.h>
int main()
{
    char caste;
    printf("Enter caste (a/b/c/d):");
    scanf("%c",&caste);
    if(caste=='a'||caste=='b')
    printf("payabe amount is= 500");
    else
    if(caste=='c'||caste=='d')
    printf("free");
    else
    printf("only for a/b/c/d");
 
    
    

    return 0;
}