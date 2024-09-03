#include <stdio.h>
int BinarySearch(int arr[],int left,int right,int tar){
    if(left > right){
        return -1;
    }
    int mid = (left + right) / 2;

    if(tar < arr[mid]){
        return BinarySearch(arr,left,mid-1,tar);
    }
    else if(tar > arr[mid]){
        return BinarySearch(arr,mid+1,right,tar);
    }
    else{
        return mid;
    }
}
int main()
{
    int n;
    printf("Enter the number of element : ");
    scanf("%d",&n);


    int arr[n];
    for(int i=0;i<n;i++){
        printf("Enter the value of element : ");
        scanf("%d",&arr[i]);
    }
    int tar;
    printf("Enter the target : ");
    scanf("%d",&tar);


    for (int i = 0; i < n - 1; i++) {     //Bubble Sort
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    int res = BinarySearch(arr,0,n-1,tar);

    if(res != -1){
        printf("Target found at index %d",res);
    }
    else{
        printf("Element not found");
    }

    return 0;
}
