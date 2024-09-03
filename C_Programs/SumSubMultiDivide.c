#include <stdio.h>
void sum();
void sub();
void multi();
void div();
int main()
{
    sum();
    sub();
    multi();
    div();

    return 0;
}
void sum(){
    int a,b;
    printf("ADDITION\n");
    printf("Enter the value of a and b : ");
    scanf("%d %d",&a,&b);
    printf("Result : %d\n",a+b);

}
void sub(){
    int c,d;
    printf("SUBTRACTION\n");
    printf("Enter the value of c and d : ");
    scanf("%d %d",&c,&d);
    printf("Result : %d\n",c-d);

}
void multi(){
    int e,f;
    printf("MULTIPLICATION\n");
    printf("Enter the value of e and f : ");
    scanf("%d %d",&e,&f);
    printf("Result : %d\n",e*f);

}
void div(){
    int g,h;
    printf("DIVISION\n");
    printf("Enter the value of g and h : ");
    scanf("%d %d",&g,&h);
    if (h != 0){
            printf("Result : %.2f\n",(float)g/h);

    }
    else{
        printf("Zero division ERROR");
    }

}
