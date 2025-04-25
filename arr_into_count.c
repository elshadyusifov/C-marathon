#include <stdio.h>

int main() {
    char *arr[4] = {"salam", "xaloglu", "necesen?", "ok?"};
    int i;
    int j;
    for (i = 0; i < 4; i++) {
        for (j = 0; arr[i][j] != '\0'; j++) {
            printf("%c", arr[i][j]);
        
        }
        printf("\t");
        printf("%d\n", j);
        puts("");
        // printf(" %d\t\n", printf("%s", arr[i]));
    }


    return 0;
}
