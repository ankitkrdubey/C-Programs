#include<stdio.h>
#include<string.h>
void main()
{
    char str[500],temp;
    int i,left,right,len;
    printf("Enter a string to reverse order\n");
    scanf("%s",&str);
    len=strlen(str);
    left=0;
    right=len-1;
    for(i=left;i<right;i++)
    {
        temp=str[i];
        str[i]=str[right];
        str[right]=temp;
        right--;

    }
    printf("The reverse of the original string is:%s",&str);

}