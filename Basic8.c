//Convert days into years, months and remaining days.
#include<stdio.h>
int main(){
    int days, years, months,remaining_days;
    printf("Enter number of days: ");
    scanf("%d",&days);
    years = days / 365;
    months = (days % 365) / 30;
    remaining_days = (days % 365) % 30;
    printf("%d years\n", years);
    printf("%d months\n", months);
    printf("%d days", remaining_days);
    return 0;
}