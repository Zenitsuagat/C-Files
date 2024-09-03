#include <stdio.h>
int main()
{
    int i=1,evensum=0;
    do
    {
        if(i%2 == 0)
        {
            evensum = evensum + i;
        }
        i++;
    }while(i<=50);
    int a=1,oddsum=0;
    do
    {
        if(a%2 != 0)
        {
            oddsum = oddsum + a;
        }
        a++;
    }while(a<=50);
    printf("The sum of even numbers from 1-50 is :  %d\n",evensum);
    printf("The sum of odd numbers from 1-50 is : %d",oddsum);
    return 0;
}
