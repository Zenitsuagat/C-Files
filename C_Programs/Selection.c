#include <stdio.h>
int main()
{

    int n;
    printf("Enter the number of element : ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("Enter the value of the element : ");
        scanf("%d",&arr[i]);
    }
    printf("The elements are : \n");
    for(int i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }
    int min,temp;
    for(int i=0;i<n;i++){
        min = i;
        for(int j=i+1;j<n;j++){
            if(arr[min]>arr[j]){
                min=j;
            }
        }

    if(min != i){
        temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
        }
    }

    printf("The Sorted array is : \n");
    for(int i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }



    return 0;
}
