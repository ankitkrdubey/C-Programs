//structure without Bit fields
//Consider the following declaration of date without the use of bit-fiels

#include<stdio.h>
struct date {
    unsigned int d;
    unsigned int m;
    unsigned int y;
};
int main()
{


printf("size of data is %lu bytes\n",sizeof(struct date));
struct date dt={28,06,2023};
printf("Date is %d\t%d\t%d\t",dt.d,dt.m,dt.y);
}