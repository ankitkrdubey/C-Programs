#include<stdio.h>
#include<time.h>

int main()
{
    int DETECT,WHITE,t_time,RED,CENTER_TEXT,SANS_SERIF_FONT,HORI_DIR;
    int dt= DETECT, gmode, midx, midy;
    long current_time;
    char strftime[30];

    initgraph(&dt, &gmode, "");

    midx= getmaxx()/2;
    midy= getmaxy()/2;

    setcolor(WHITE);
    rectangle(midx-200,midy-40,midx+200,midy+40);
    floodfill(midx,midy,WHITE);
    while(!kbhit()){
        current_time= time(NULL);
        strcpy(strftime,ctime(t_time));
        setcolor(RED);
        settextjustjustify(CENTER_TEXT,CENTER_TEXT);
        settextstyle(SANS_SERIF_FONT, HORI_DIR,3);
        moveto(midx, midy);
        outtext(strftime);



    }
    closegraph();
    




}