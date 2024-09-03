#include <stdio.h>
int main()
{
    int a = 10,*ptr =&a;
    printf("Address of pointer : %d\n",ptr);
    printf("Address of pointer + 1 : %d\n",ptr+1);
    printf("Address of pointer + 5 : %d\n",ptr+5);
    printf("Address of pointer - 1 : %d\n",ptr-1);
    printf("Address of pointer - 6 : %d\n",ptr-6);

    return 0;
}
