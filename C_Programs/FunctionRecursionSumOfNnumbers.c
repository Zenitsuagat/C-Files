#include <stdio.h>
int SumN(int n){
    int sum = 0;
    if(n==1){
        return 1;
    }
    else{
        return sum = n + SumN(n - 1);
    }

}
int main()
{
    int n;
    printf("Enter the value : ");
    scanf("%d",&n);
    int res = SumN(n);
    printf("Sum : %d",res);
}
