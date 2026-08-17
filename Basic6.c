//Read a character and print its ASCII value.
#include<stdio.h>
int main(){
    char ch;
    printf("Enter the ASCII character: ");
    scanf("%c",&ch);
    printf("The ASCII value of %c is %d\n",ch,ch);
}