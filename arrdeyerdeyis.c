#include <stdio.h>

int main() {
    int i;
   int arr[7] = { 15, 65, 12, 32, 41, 45, 68 };
   
   for(i=0; i<7;i++) {
        printf("%d\t", *(arr+i));
  
   if(arr[i]%2==0)
   arr[i] = arr[i] * 2;
   
   else
   arr [i] = arr [i] +1;
   
   printf("%d\n", *(arr+i));
   }
