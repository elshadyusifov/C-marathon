#include <stdio.h>

int main() {
    char *example = "Holberton";
    
    printf("%p\t\t", example + 0);
     printf("Dereference :%c\n", *(example + 0));
    printf("%p\t\t", example + 1);
     printf("Dereference :%c\n", *(example + 1));
    printf("%p\t\t", example + 2);
     printf("Dereference :%c\n", *(example + 2));
    printf("%p\t\t", example + 3);
     printf("Dereference :%c\n", *(example + 3));
    printf("%p\t\t", example + 4);
     printf("Dereference :%c\n", *(example + 4));
    printf("%p\t\t", example + 5);
     printf("Dereference :%c\n", *(example + 5));
    printf("%p\t\t", example + 6);
     printf("Dereference :%c\n", *(example + 6));
    printf("%p\t\t", example + 7);
     printf("Dereference :%c\n", *(example + 7));
    printf("%p\t\t", example + 8);
     printf("Dereference :%c\n", *(example + 8));
    printf("%p\t\t", example + 9);
     printf("Dereference :%c\n", *(example + 9));
    printf("%p\t\t", example + 10);
    
    
    
    return 0;
}
