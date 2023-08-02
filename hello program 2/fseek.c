//RANDOM ACCESS FILE OPERATIONS
#include<stdio.h>
#include<stdlib.h>
int main()
{3
    int n,len,put;
    FILE*fp;
    fp=fopen("pgm.txt","wt");
    puts("university college",fp);
    seek(fp,10,SEEK_SET);
    puts("hazaribag",put);
    rewind(fp);
    fseek(fp,0,SEEK_END);
    len=ftell(fp);
    fclose(fp)
    printf("No. of characters or count or current position %d",len);


}