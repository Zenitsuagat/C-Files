#include <stdio.h>
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
    int min,temp;   //Sorting the array
    for(int i=0;i<n;i++){   //Starting of FOR loop
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
    }   //Ending of FOR loop
    int first=0,last=n-1,found=0;
    while(first<=last){
        int mid = (first+last)/2;
        if(tar == arr[mid]){
            printf("Element found at %d",mid);
            found = 1;
            break;

        }
        else if(tar > arr[mid]){
            first = mid + 1;
        }
        else{
            last = mid - 1;
        }
    }
    if(found==0){
        printf("Not found");
    }
    return 0;
}
