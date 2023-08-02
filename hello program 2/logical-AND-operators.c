#include<stdio.h>
int main()
{
    int m1,m2,m3,m4,tot,per;
    printf("Enter the marks of 4 students\n");
    scanf("%d%d%d%d",&m1,&m2,&m3,&m4);
    tot=m1+m2+m3+m4;
    per=(tot*100)/400;
    if(per>60)
    printf("marks per=%d FIRST DIVISION\n",per);
    if((per<60)&&(per>=50))
    printf("marks per=%d SECOND DIVISION\n",per);
    if((per<50)&&(per>=40))
    printf("marks per=%d THIRD DIVISION\n",per);
    if(per<40)
    printf("marks per=%d FAIL",per);
    return 0;
}