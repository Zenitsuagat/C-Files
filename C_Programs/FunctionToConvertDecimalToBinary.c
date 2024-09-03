#include <stdio.h>
void DecimalToBinary(int dn){
    int binarr[32],i=0;
    while(dn > 0){
        binarr[i] = dn % 2;
        dn = dn / 2;
        i++;
    }
    printf("The Binary value is  : ");
    for(int j=i-1;j>=0;j--){
            printf("%d ",binarr[j]);

    }

}
int main()
{
    int dn;
    printf("Enter the decimal value : ");
    scanf("%d",&dn);
    DecimalToBinary(dn);


    return 0;
}
