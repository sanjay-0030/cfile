//Write a program demonstrating pre-increment and post-increment.
#include <stdio.h>
int main() {
    int a, b;
    printf("Enter a number: ");
    scanf("%d", &a);
    printf("Enter b number: ");
    scanf("%d", &b);
    printf("Pre-increment: %d\n", ++a);
    printf("Post-increment: %d\n", b++);
    return 0;
}