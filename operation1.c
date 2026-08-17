//Find the remainder of two numbers.
#include<stdio.h>
int main(){
    int a;
    int b;
    printf("Enter a numbers: ");
    scanf("%d",&a);
    printf("Enter b numbers: ");
    scanf("%d",&b);
    int remainder = a % b;
    printf("The remainder of %d divided by %d is: %d\n", a, b, remainder);
    return 0;
}