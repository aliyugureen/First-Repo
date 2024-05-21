#include <stdio.h>

/*
a program that takes three integers as input and
prints the smallest and largest of these numbers.
*/

int smallest(int, int, int);
int largest(int, int, int);


int main () {
    int first, second, third;

    // Getting three integers
    printf("Enter the first number: ");
    scanf("%d", &first);

    printf("Enter the second number: ");
    scanf("%d", &second);

    printf("Enter the third number: ");
    scanf("%d", &third);

    int mySmallest = smallest(first, second, third);
    int myLargest = largest(first, second, third);
    printf("Among the numbers you entered,\nthe largest was %d and the smallest was %d.\n", myLargest, mySmallest);

}

int smallest (int one, int two, int three) {
    int diff1 = one - two;
    int diff2 = two - three;
    int diff3 = one - three;

    if (diff1 < 0 && diff3 < 0) {
        // one is smallest
        return one;
    }
    else if (diff1 > 0 && diff2 < 0) {
        // two is smallest
        return two;
    
    }
    else if (diff3 > 0 && diff2 > 0) {
        // three is smalleest
        return three;
    }
}

int largest (int one, int two, int three) {
    int diff1 = one - two;
    int diff2 = two - three;
    int diff3 = one - three;

    if (diff1 > 0 && diff3 > 0) {
        // one is largest
        return one;
    }
    else if (diff1 < 0 && diff2 > 0) {
        // two is largest
        return two;
    }
    else if (diff3 < 0 && diff2 < 0) {
        // three is largest
        return three;
    }

    
}