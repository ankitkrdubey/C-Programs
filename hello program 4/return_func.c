#include<stdio.h>
void func(int age,int ht);
int main()
{
    int age,ht;
    printf("Enter the age and height\n");
    scanf("%d%d",&age,&ht);
    func(age,ht);
}
void func(int age,int ht)
{
    if(age>25)
    {
        printf("age should be less than 25\n");
        return;
    }
    if(ht<5)
    {
        printf("height should be more than 5\n");
        return;
    }
    printf("selected\n");
}