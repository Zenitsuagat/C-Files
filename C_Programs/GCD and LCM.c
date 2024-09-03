#include <stdio.h>
int gcd(int a,int b){
    if (b == 0){
        return a;
    }

    return gcd(b,a%b);
}

int lcm(int a,int b){
    return (a*b)/gcd(a,b);
}

int main()
{
    int x,y;
    printf("Enter the first number : ");
    scanf("%d",&x);
    printf("Enter the second number : ");
    scanf("%d",&y);

    printf("The GCD of %d and %d  :  %d\n",x,y,gcd(x,y));
    printf("The LCM of %d and %d  :  %d\n",x,y,lcm(x,y));

    return 0;
}
