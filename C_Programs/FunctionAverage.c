#include <stdio.h>
int Average(int n){
    int sum = 0,x;
    for(int i=0;i<n;i++){
        printf("Enter the value : ");
        scanf("%d",&x);
        sum = sum + x;
    }
    float avg = sum / n;
    return avg;
}
int main()
{
    int n;
    printf("Enter the number of value : ");
    scanf("%d",&n);
    int res = Average(n);
    printf("Average : %d",res);

    return 0;
}
