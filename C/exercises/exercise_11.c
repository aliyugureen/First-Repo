#include <stdio.h>

void cat(void);
void dog(void);
void cow(void);

int main(void) {
   int choice;
   do {
      printf("1: cat\n2: dog\n3: cow\n");
      printf("End with a negative number.\n");
      printf("Select animal: ");
      scanf("%d", &choice);
      if(choice < 0) {
         printf("Terminating the program...");
      } else if(choice == 1) {
         cat();
      } else if(choice == 2) {
         dog();
      } else if(choice == 3) {
         cow();
      } else {
         printf("You entered an invalid number.\n\n");
      }
   } while(choice>0);
   return 0;
}

void cat() {
    printf("the cat says meow!\n");
}

void dog() {
    printf("the dog says wuff-wuff!\n");
}

void cow() {
    printf("the cow says moo!\n");
}