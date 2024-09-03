#include <stdio.h>
int a = 0,b = 1,c;
void Fibo(int n){
    if(n >= 1){
        c = a + b;
        printf("%d\n",c);
        a = b;
        b = c;
        Fibo(n-1);
    }

}
int main()
{
    int n;
    printf("Enter the number of times : ");
    scanf("%d",&n);
    printf("Fibonacci Series : \n");
    printf("%d\n%d\n",a,b);
    Fibo(n);


    return 0;
}
