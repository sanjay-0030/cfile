//Check whether three sides can form a triangle.
#include <stdio.h>

int main() {
    float a, b, c;
    printf("Enter the lengths of three sides: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a + b > c && a + c > b && b + c > a) {
        printf("The three sides can form a triangle.\n");
    } else {
        printf("The three sides cannot form a triangle.\n");
    }

    return 0;
}