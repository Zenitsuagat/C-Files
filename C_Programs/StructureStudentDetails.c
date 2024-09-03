#include <stdio.h>
struct student
{
    int rn;
    char n[20];
    float m[2];
};
int main()
{
    struct student arr[2];
    for(int i=0;i<2;i++){
        printf("Enter the roll no of student : ");
        scanf("%d",&arr[i].rn);
        printf("Enter the name of student : ");
        scanf(" %[^\n]",&arr[i].n);
        printf("Enter the mark of subject 1  of student : ");
        scanf("%f",&arr[i].m[0]);
        printf("Enter the mark of subject 2  of student : ");
        scanf("%f",&arr[i].m[1]);

    }
    for(int i=0;i<2;i++){
        printf("Student Details\n");
        printf("Student %d\n",i+1);
        printf("Roll No : %d\n",arr[i].rn);
        printf("Name : %s\n",arr[i].n);
        printf("Marks of Subject 1 : %f and Subject 2 : %f\n",arr[i].m[i],arr[i].m[i+1]);
    }




    return 0;
}
