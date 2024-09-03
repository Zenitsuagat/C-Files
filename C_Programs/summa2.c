#include <stdio.h>
int i;

void reverseArray(int *arr, int size) {
    int *start = arr[0]; // Pointer to the first element
    int *end = arr[size - 1]; // Pointer to the last element

    // Iterate until start pointer crosses end pointer
    while (start < end) {
        // Swap elements pointed by start and end
        int temp = *start;
        *start = *end;
        *end = temp;

        // Move start pointer forward
        start++;

        // Move end pointer backward
        end--;
    }
}

int main() {
    int n,arr[n];
    printf("Enter the number of elements:");
    scanf("%d",&n);
    for (int i=0;i<=n;i++){
        printf("Enter the elements of original array:");
        scanf("%d",&arr[i]);
    }
    int size = sizeof(arr);

    printf("Original array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    reverseArray(arr, size);

    printf("Reversed array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
