#include <stdio.h>

int main() {

    int factorial;
    printf("Enter an integer: ");
    scanf("%d", &factorial);

    int i;
    int product = 1;
    
    for (i = 1; i <= factorial; ++i) {
        product = i * product;
        
    }
    printf("the factorial of %d is %d\n", factorial, product);
}