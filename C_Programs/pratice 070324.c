#include <stdio.h>
int main()
{
    int i=1,oddsum=0;
    do
    {
        if(i%2 != 0)
        {
            oddsum = oddsum + i;
        }
        i++;
    }while(i<=50);
    printf("The sum of odd numbers is %d",oddsum);
    return 0;
}
