#include <stdio.h>
int Fibona(int n)
{
    if(n <= 1){
        return n;
    }
    else{
        return Fibona(n-1) + Fibona(n-2);
    }
}
int main()
{
    int n;
    printf("Enter n : ");
    scanf("%d",&n);

    printf("Fibo : ");
    for(int i=0;i<n;i++){
        printf("%d ",Fibona(i));
    }
    return 0;
}

