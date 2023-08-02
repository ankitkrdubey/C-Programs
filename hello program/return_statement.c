#include<stdio.h>
void england () {
    printf("You are in England\n");
    return ;
}

void australia() {
    printf("You are in Australia\n");
    england();
    return ;
}
void India() {
    printf("You are in India\n");
    australia();
    return ;
}
int main() {
    India();
    return 0;
}
