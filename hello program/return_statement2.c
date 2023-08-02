#include<stdio.h>
void func(int age,float height);
int main()
{
    int age;
    float ht;
    printf("Enter the value age and height\n");
    scanf("%d%f",&age,&ht);
    func(age,ht);
}
void func(int age,float ht)
{
    if(age>25)
    {
        printf("age should be less than 25\n");
        return;
    }
    if(ht<5)
    printf("height should be more than 5\n");
    return;

    printf("selected\n");
}
