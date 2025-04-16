#include <stdio.h>

int main() {
    unsigned int a = 200;
    
    if (a%4 == 0){
        if (a%100 == 0) {
            if (a%400 == 0) {
                puts("uzun il 400");
            }
            else {
                puts("qisa il 100");
            }
        }
        else {
        puts("uzun il 4");
        }
        }
    else {
        puts("qisa il");
        }
    return 0;
}
