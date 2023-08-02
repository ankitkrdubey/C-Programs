#include <iostream>
using namespace std;

int main(){
    int e;
    e = 0;
    while (e < 5) {
        switch (e++) {
            case 1: cout << (e++) + (--e);
            case 2: cout << (e--) + (++e);
            break;
            case 3: cout << (++e) + (--e);
            case 4: cout << (e++) + (e--);
            break;
            default: cout << e;
        }
    }
    return 0;
}