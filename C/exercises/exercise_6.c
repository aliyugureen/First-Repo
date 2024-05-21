#include <stdio.h>

int main() {

    // asking tea or coffee
    int cups;
    char drink[10];

    printf("Do you drink coffee or tea? ");
    scanf("%s", drink);
    getchar();          // To remove the default scanf new line.

    printf("How many cups do you drink daily: ");
    scanf("%d", &cups);

    if (cups >= 0 && cups <= 2) {
        printf("You do not drink alot of %s!\n", drink);
    }
    else if (cups >= 3 && cups <= 20) {
        printf("You drink alot of %s!!\n", drink);
    }
    else {
        printf("An error occurred in the program!!\n");
    }
}