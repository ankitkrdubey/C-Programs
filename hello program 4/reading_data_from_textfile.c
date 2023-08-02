#include<stdio.h>
#include<stdlib.h>
void main()
{
    int n,null=0;
    FILE*fptr;
    fptr=fopen("sample.txt","r");
    if(fptr==null)
    printf("Error");
    fscanf(fptr,"%d",&n);
    printf("The value of n=%d",n);
    fclose(fptr);
}