#include<stdio.h>
int areaRectangle(intl,intb);
int main()
{
    int lenght,breadth,area;
    int(*fp)(int,int);
    printf("Enter lenght and breadth of a rectangle\n");
    scanf("%d%d",&lenght,&breadth);
    fp=areaRectangle;
    area=(*fp)(lenght,breadth);
    printf("Area of rectangle=%d\n",area);
    return 0;
}
int areaRectangle(intl,intb)
{
    int  l,b,area_of_rectangle;
    area_of_rectangle=l*b;
    return area_of_rectangle;

}