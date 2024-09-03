#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of element  : ");
    scanf("%d",&n);

    int *ptr_arr[n];
    for(int i=0;i<n;i++){
        ptr_arr[i] = &ptr_arr[n];
        printf("Enter the value : ");
        scanf("%d",ptr_arr[i]);
    }

    return 0;
}
