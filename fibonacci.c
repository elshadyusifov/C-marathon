#include <stdio.h>

int main() {
    int T1 = 0;
    int T2 = 1;
    int T;
    
    printf("%d,", T1);
    printf("%d,", T2);
    for(int i = 0; i < 10; i ++) {
        T = T1 + T2;
        printf("%d,",T);
        T1 = T2;
        T2 = T;
    }

    return 0;
}

// T = T(n-1) + T(n-2)
