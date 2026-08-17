//Calculate the result of (a + b) * c.
#include<stdio.h>
int main(){
    int a;
    int b;
    int c;
    printf("Enter a number: ");
    scanf("%d",&a);
    printf("Enter b number: ");
    scanf("%d",&b);
    printf("Enter c number: ");
    scanf("%d",&c);
    int result = (a + b) * c;
    printf("The result of (%d + %d) * %d is: %d\n", a, b, c, result);
    return 0;
}