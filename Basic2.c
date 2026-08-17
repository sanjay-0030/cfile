//Convert Celsius to Fahrenheit.
//F=(C×9/5​)+32(formula)
#include <stdio.h>
int main() {
    float celsius,fahrenheit;
    printf("Enter in Celsius: ");
    scanf("%f",&celsius);
    fahrenheit = (celsius * 9 / 5) + 32;
    printf("Fahrenheit: %.1f\n",fahrenheit);
    return 0;
}