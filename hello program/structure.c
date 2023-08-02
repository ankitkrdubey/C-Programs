#include<stdio.h>
struct student{
    int rollno;
    char name;
   
    float sal;
};
int main()
{
struct student s[5];
printf("Enter student records\n");
int i;
for(i=0;i<5;i++)
{
    printf("Enter the roll\n ");
    scanf("%d",&s[i].rollno);
    printf("Enter the name\n");
    scanf("%s",&s[i].name);
   
    printf("Enter the sal\n");       
    scanf("%f",&s[i].sal);
}
    printf("STUDENT DETAILS\n");
    for(i=0;i<5;i++) 
     {
        printf("rollno=%d",s[i].rollno);
        printf("name=%s",s[i].name);
      
        printf("sal=%f",s[i].sal);

    }
    return 0;

}

