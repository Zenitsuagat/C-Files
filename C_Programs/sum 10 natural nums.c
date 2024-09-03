#include <stdio.h>
int main()
{
    int i,sum=0;
    printf("The first 10 natural numbers : ");
    for(i=1;i<=10;i++)
    {
        printf("%d\n",i);
        sum = sum + i;
    }
    printf("The sum is %d",sum);
    return 0;
}
