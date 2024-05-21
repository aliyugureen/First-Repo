#include <stdio.h>

int main() {

    int first, second;
    printf("Enter the First number: ");
    scanf("%d", &first);

    printf("Enter the Second number: ");
    scanf("%d", &second);

    // getting the sum, difference and product
    int sum = first + second;
    int diff = first - second;
    int prod = first * second;

    // printing the results
    printf("\n");
    printf("%d+%d=%d\n", first, second, sum);
    printf("%d-%d=%d\n", first, second, diff);
    printf("%d*%d=%d\n", first, second, prod);

}