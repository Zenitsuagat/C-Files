#include <stdio.h>
void sum(int,int);
int main()
{
    int a,b;
    printf("Enter the value of a and b : ");
    scanf("%d %d",&a,&b);
    sum(a,b);

    return 0;
}

void sum(int a,int b){
    int res = a+b;
    printf("SUM : %d\n",res);
}
