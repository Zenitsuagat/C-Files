#include <stdio.h>
int SumOfDigit(int n){
    int sum = 0;
    while(n > 0){
        sum = sum + (n%10);
        n = n / 10;
    }


    return sum;
}
void Magical(int n){
    while(n >= 10){
        n = SumOfDigit(n);
    }

    if(n == 1){
        printf("It is Magical");
    }
    else{
        printf("It is not Magical");
    }

}
int main()
{
    int n;
    printf("Enter the value : ");
    scanf("%d",&n);

    Magical(n);

    return 0;
}
