#include <stdio.h>
void ArrayRotation(int arr[],int n,int r){
    r = r % n;
    for(int i=0;i<r;i++){
        int temp = arr[n-1];
        for(int j=n-1;j>0;j--){
            arr[j] = arr[j-1];
        }
        arr[0] = temp;
    }

    printf("Array after rotating %d times in clockwise : \n",r);
    for(int a=0;a<n;a++){
        printf(" %d",arr[a]);
    }

}
int main()
{
    int n;
    printf("Enter the number of elements in array : ");
    scanf("%d",&n);

    int arr[n];
    for(int i=0;i<n;i++){
        printf("Enter the value of element : ");
        scanf("%d",&arr[i]);
    }

    printf("Original Array : \n");
    for(int i=0;i<n;i++){
        printf(" %d",arr[i]);
    }

    int r;
    printf("\n Enter the number of rotations : ");
    scanf("%d",&r);

    ArrayRotation(arr,n,r);


    return 0;
}
