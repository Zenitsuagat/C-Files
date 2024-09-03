#include<stdio.h>
int main(){
    // %1 = minimum field width
    // %- = left align


    float item1 = 76.45;
    float item2 = 100.456;
    float item3 = 456.23;

    printf("Item 1 : $ %10.2f\n",item1);
    printf("Item 2 : $ %-10.2f\n",item2);
    printf("Item 3 : $ %-10.2f\n",item3);

    return 0;
}

