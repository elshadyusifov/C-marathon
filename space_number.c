#include <stdio.h>

int main() {
    int i = 0;
    int j = 0;
    
    while (i < 10) {
        while (j < i) {
            putchar(' ');
            j++;
        }
        printf("%d\n",i);
    i++;
    j = 0;
}
return 0;
}
