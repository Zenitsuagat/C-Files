#include <stdio.h>
void Revarr(int *arr,int size){
    int *first = arr;
    int *last = arr + size - 1;

    while(first < last){
        int temp = *first;
        *first = *last;
        *last = temp;


        //Moving the pointer
        first++;
        last--;
    }

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

    Revarr(arr,n);

    printf("Reversed Array : \n");
    for(int i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }

    return 0;
}
