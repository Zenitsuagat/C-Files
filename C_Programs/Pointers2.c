#include <stdio.h>
int main()
{
    int *r , k = 10;
    r = &k;
    printf("Address of pointer %u\n",&r);
    printf("Address of value using pointer %u\n",r);
    printf("Address of value %u\n",&k);
    printf("value %u\n",k);
    printf("Value using pointer %u",*r);


    return 0;
}
