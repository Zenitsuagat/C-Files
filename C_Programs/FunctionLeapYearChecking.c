#include <stdio.h>
void LeapYear(int n){
    if((n % 4 == 0 && n % 100 != 0)||(n % 400 == 0)){
        printf("%d is a leap year",n);
    }
    else{
        printf("%d is not a leap year",n);
    }
}
int main()
{
    int n;
    printf("Enter a year : ");
    scanf("%d",&n);
    LeapYear(n);

    return 0;
}
