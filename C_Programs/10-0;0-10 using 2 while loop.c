#include <stdio.h>
int main()
{
    int i=0,a=10;
    printf("From 0-10 :\n");
    while(i<11)
    {
        printf("%d\n",i);
        i++;
    }
    printf("From 10-0\n");
    while(a>=0)
    {
        printf("%d\n",a);
        a--;
    }
    return 0;
}
