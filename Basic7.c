//Read an integer and print its size using sizeof().
#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    printf("%zu", sizeof(n));
    return 0;

}
/*printf("%zu\n", sizeof(int));
printf("%zu\n", sizeof(char));
printf("%zu\n", sizeof(float));
printf("%zu\n", sizeof(double));*/