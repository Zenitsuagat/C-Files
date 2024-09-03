#include <stdio.h>
void Toh(int n,char sr,char aux,char des){
    if(n==1){
        printf("Move disk %d from %c  -->  %c\n",n,sr,des);
    }
    else{
        Toh(n-1,sr,des,aux);
        printf("Move disk %d from %c  -->  %c\n",n,sr,des);
        Toh(n-1,aux,sr,des);
    }

}
int main()
{
    int n;
    printf("Enter the number of disks : ");
    scanf("%d",&n);
    Toh(n,'A','B','C');

    return 0;
}
