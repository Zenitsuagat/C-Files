#include <stdio.h>
void Reverse();
int main()
{
   Reverse();

   return 0;
}
void Reverse(){
    int n;
    printf("Enter the value : ");
    scanf("%d",&n);

    int temp,rem,res = 0;
    temp = n;
    while(temp > 0){
        rem = temp % 10;
        res = (res * 10) + rem;
        temp = temp / 10;
    }

    printf("Reverse : %d",res);

}
