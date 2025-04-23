#include <stdio.h>

int main() {
    
   int arr[6] = { 15, 65, 12, 32, 41, 45 };
    printf("%p\t", arr+1);
        printf("%d\t", *(arr +0));
            printf("%d\n", arr[0]);
    printf("%p\t", arr+2);
        printf("%d\t", *(arr +1));
            printf("%d\n", arr[1]);
    printf("%p\t", arr+3);
        printf("%d\t", *(arr +2));
            printf("%d\n", arr[2]);
    printf("%p\t", arr+4);
        printf("%d\t", *(arr +3));
            printf("%d\n", arr[3]);
    printf("%p\t", arr+5);
         printf("%d\t", *(arr +4));
            printf("%d\n", arr[4]);
    printf("%p\t", arr+6);
        printf("%d\t", *(arr +5));
            printf("%d\n", arr[5]);
  
    
    return 0;
}
