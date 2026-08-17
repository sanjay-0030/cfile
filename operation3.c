//Find the largest of two numbers using the conditional operator.
#include<stdio.h>
int main(){
    int a;
    int b;
    printf("Enter a number: ");
    scanf("%d",&a);
    printf("Enter b number: ");
    scanf("%d",&b);
    int largest = (a > b) ? a : b;
    printf("The largest of %d and %d is: %d\n", a, b, largest);
    return 0;
}   