#include<stdio.h>
#include<signal.h>
void inthandler(signum)
{
    printf("SIGINT Received\n");

}
void termhandler(int signum)
{
    printf("SIGTERM Recieved\n");

}
int main()
{
    signal(SIGINT,inthandler);
    signal(SIGTERM,termhandler);
    while(1)
        printf("Program Running\n");
    return 0;
}