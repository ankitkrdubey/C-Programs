#include<stdio.h>
#include<stdlib.h>
void main()
{
    int n;
    FILE*fptr;
    fptr=fopen("sample.txt","w");
    printf("Enter the number\n");
    scanf("%d",&n);
    fprintf(fptr,"%d",n);
    fclose(fptr);
    
}
