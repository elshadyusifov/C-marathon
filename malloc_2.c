#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
    char *args[3] = {"hello", "world", "azer"};
    int n = 3;
    char **args_m;
    int i;
    int j;
    args_m = malloc(sizeof(char *) * n);
    for (int i = 0; i < n; i++) {
        args_m[i] = malloc(sizeof(char) * (strlen(args[i]) + 1));
    }
    for (i = 0; i < n; i++) {
        for (j = 0; j < (strlen(args[i])) ; j++) {
        args_m[i][j] = args[i][j];
        }
        args_m[i][j] = '\0';
        printf("%s\n", args_m[i]);
    }
    return 0;
}

