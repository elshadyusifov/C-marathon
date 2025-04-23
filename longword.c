#include <stdio.h>

int main() {
  char *word = "Crime and Punishment[a] is a novel by the Russian author Fyodor Dostoevsky. It was first published in the literary journal The Russian Messenger in twelve monthly installments during 1866.[1] It was later published in a single volume. It is the second of Dostoevsky's full-length novels following his return from ten years of exile in Siberia. Crime and Punishment is considered the first great novel of his mature period of writing[2] and is often cited as one of the greatest works of world literature.";
 
  for(*word; *word != '\0'; *word++) {
  
      putchar(*word);
      
  }
    putchar('\n');
    
    return 0;

}
