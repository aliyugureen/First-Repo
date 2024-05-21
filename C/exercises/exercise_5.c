#include <stdio.h>

int main() {

    int num;
    printf("Enter an Integer: ");
    scanf("%d", &num);

    if (num % 2 == 0) {
        printf("\nThe Number %d is even\n", num);
    }
    else {
        printf("\nThe Number %d is odd\n", num);
    }
}