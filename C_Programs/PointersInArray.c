#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number os terms in array : ");
    scanf("%d",&n);

    int arr[n];
    for(int i=0;i<n;i++){
        printf("Enter the value : ");
        scanf("%d",&arr[i]);
    }
    printf("Display Elements Using Pointers\n");
    int *ptr = arr;    //Address of First Element
    for(int i=0;i<n;i++){
        printf("Address Of Element %d is %d\n",*ptr,ptr);
        ptr++;
    }

    return 0;
}
