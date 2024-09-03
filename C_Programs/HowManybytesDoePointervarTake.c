#include <stdio.h>
int main()
{
    int *p;
    float *pl;
    double *y;
    char *c;

    printf("Char %d\n",sizeof(*c));
    printf("Integer %d\n",sizeof(*p));
    printf("Float %d\n",sizeof(*pl));
    printf("Double %d",sizeof(*y));


    return 0;
}
