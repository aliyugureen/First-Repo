#include <stdio.h>

int main () {

    int function, first, second;
    printf("select a function: ");
    scanf("%d", &function);

    printf("Enter the first number: ");
    scanf("%d", &first);

    printf("Enter the second number: ");
    scanf("%d", &second);

    int sub = first - second;
    int add = first + second;
    int multp = first * second;

    switch (function) {
        case 1:
            printf("%d-%d=%d\n", first, second, sub);
            break;
        case 2:
            printf("%d+%d=%d\n", first, second, add);
            break;
        case 3:
            printf("%d*%d=%d\n", first, second, multp);

    }

}