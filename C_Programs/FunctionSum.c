#include <stdio.h>
void sum();   //Function Declaration

int main()
{
    sum();    //Function calling
    sum();

    return 0;
}
void sum(){     //Function Definition
    int a,b;
    printf("Enter the value of a and b : ");
    scanf("%d %d",&a,&b);
    printf("Sum : %d\n",a+b);

}
