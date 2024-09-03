#include <stdio.h>
int main()
{
    int a = 10;
    int *ptr = &a;
    printf("Address of pointer : %d\n",ptr);
    ptr++;
    printf("Address of pointer after incrementing : %d\n",ptr);
    ptr--;
    printf("Address of pointer after decrementing : %d",ptr);


    return 0;
}
