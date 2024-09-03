#include <stdio.h>
int sumarr(int n,int arr[])
{
    int sum = 0;
    for(int i=0;i<n;i++){
        sum += arr[i];
    }
    return sum;
}
int main()
{
    int n;
    printf("Enter the number of elements : ");
    scanf("%d",&n);

    int arr[n];
    for(int i=0;i<n;i++){
        printf("Enter the element : ");
        scanf("%d",&arr[i]);
    }

    int res = sumarr(n,arr);
    printf("Sum : %d",res);

    return 0;
}
