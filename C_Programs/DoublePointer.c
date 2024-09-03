#include <stdio.h>
int main()
{
    int a = 10;
    int *ptr = &a;
    int **dptr = &ptr;
    printf("a %d\n",a);
    printf("Address of a %d\n",&a);
    printf("Address of a using pointer %d\n",ptr);
    printf("Address of pointer %d\n",&ptr);
    printf("Address of pointer using double pointer %d\n",dptr);
    printf("Address of Double pointer %d\n",&dptr);
    printf("a using pointer %d\n",*ptr);
    printf("a using double pointer %d\n",**dptr);


    return 0;
}
