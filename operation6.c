//Find the result of several relational expressions and understand why.
#include <stdio.h>
int main() {
    int a;
    int b;
    int c;
    
    printf("Enter a number: ");
    scanf("%d", &a);
    printf("Enter b number: ");
    scanf("%d", &b);
    printf("Enter c number: ");
    scanf("%d", &c);

    printf("a < b: %d\n", a < b);
    printf("a > b: %d\n", a > b);
    printf("a == c: %d\n", a == c);
    printf("a != b: %d\n", a != b);
    printf("a <= b: %d\n", a <= b);
    printf("a >= b: %d\n", a >= b);
    
    return 0;
}