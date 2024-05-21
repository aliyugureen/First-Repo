#include <stdio.h>

void summation(void);
void difference(void);
void product(void);

int main() {
    int choice;

    do {
        printf("1: sum of two numbers\n2: difference of two numbers\n3: product of two numbers\n<0: terminate the program\n");
        printf("select calculation: ");
        scanf("%d", &choice);

        if (choice < 0) {
            printf("Terminating the program!\n");
        }
        else if (choice == 1) {
            summation();
        }
        else if (choice == 2) {
            difference();
        }
        else if (choice == 3) {
            product();
        }
        else {
            printf("You entered an Invalid number\n");
        }
    }
    while (choice > 0);

    return 0;
}

void summation(void) {
    int first, second;
    printf("Enter the first number: ");
    scanf("%d", &first);
    printf("Enter the second number: ");
    scanf("%d", &second);
    int sum = first + second;
    printf("%d+%d=%d\n\n", first, second, sum);
}

void difference(void) {
    int first, second;
    printf("Enter the first number: ");
    scanf("%d", &first);
    printf("Enter the second number: ");
    scanf("%d", &second);
    int diff = first - second;
    printf("%d-%d=%d\n", first, second, diff);
}

void product(void) {
    int first, second;
    printf("Enter the first number: ");
    scanf("%d", &first);
    printf("Enter the second number: ");
    scanf("%d", &second);
    int prod = first * second;
    printf("%d*%d=%d\n", first, second, prod);
}