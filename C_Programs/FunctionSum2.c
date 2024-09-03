#include <stdio.h>
int sum();
int main()
{
    int result;
    result = sum();
    printf("Sum : %d\n",result);

    return 0;
}
int sum(){
    int a,b,res;
    printf("Enter the value of a and b : ");
    scanf("%d %d",&a,&b);
    res = a+b;
    return res;
}
