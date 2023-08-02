#include<stdio.h>
int main()
{
    int m1,m2,m3,m4,per,tot;
    printf("Enter the marks of Four subjects:\n");
    scanf("%d%d%d%d",&m1,&m2,&m3,&m4);
    tot=m1+m2+m3+m4;
    per=tot/4;
    if(per>=85)
    printf("grade=A per=%d\n",per);
    else if(per>=70)
    printf("grade=B per=%d\n",per);
    else if(per>=50)
    printf("grade=C per=%d\n",per);
    else if(per>=40)
    printf("grade=D per%d\n",per);
    else
    printf("Fail=%d\n",per);
    
    return 0;


}
