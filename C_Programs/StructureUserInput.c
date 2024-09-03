#include <stdio.h>
struct student
{
    int rn;
    char n[20];
    float m;
};
int main ()
{
    struct student s1;
    printf("Enter the roll number of the student : ");
    scanf("%d",&s1.rn);
    printf("Enter the name of the student : ");
    scanf(" %[^\n]",&s1.n);
    printf("Enter the mark : ");
    scanf("%f",&s1.m);

    printf("Students Details\n");
    printf("Roll No : %d\n",s1.rn);
    printf("Name : %s\n",s1.n);
    printf("Mark : %f",s1.m);



    return 0;
}
