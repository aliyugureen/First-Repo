#include <stdio.h>

int main() {

    int num, i;
    printf("Enter an Integer: ");
    scanf("%d", &num);

    for (i = 1; i < num + 1; ++i) {
        int j = num - i;
        printf("%d\n", num - j);
    }

}