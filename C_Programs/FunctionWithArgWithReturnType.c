#include <stdio.h>
int sum(int, int);
int main()
{
    int a,b;
    printf("Enter the value of a and b : ");
    scanf("%d %d",&a,&b);
    int res = sum(a,b);
    printf("SUM : %d",res);

    return 0;
}

int sum(int a,int b){

    return a+b;
}

