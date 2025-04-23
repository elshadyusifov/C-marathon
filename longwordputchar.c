#include <stdio.h>

int main() {
    
   int i;
    char *news = "ABŞ Yəmənd quru müharibə aparmaq və ya bu ərəb ölkəsində rejim dəyişikliyi ilə məşğul olmaq";
    
    for(i=0;*(news+i)!= '\0';i++)
    {
        putchar(*(news+i));
    }
  
    return 0;
}
