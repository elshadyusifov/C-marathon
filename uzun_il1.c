#include <stdio.h>

int main() {
    unsigned int a = 400;
    
    if ((a%4 == 0 && a%100 != 0) || (a%400 == 0)) {
        puts("uzun il");
    }
    else {
        puts("qisa il");
    }

    return 0;
}
