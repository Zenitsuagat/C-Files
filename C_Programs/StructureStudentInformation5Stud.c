#include <stdio.h>
struct student
{
    int rn;
    char n[40];
    float m[3];
}arr[5];
int main()
{
    for(int i=0;i<5;i++){
        printf("Enter the roll no of student : ");
        scanf("%d",&arr[i].rn);
        printf("Enter the name of student : ");
        scanf(" %[^\n]",&arr[i].n);
        printf("Enter the mark of subject 1  of student : ");
        scanf("%f",&arr[i].m[0]);
        printf("Enter the mark of subject 2  of student : ");
        scanf("%f",&arr[i].m[1]);
        printf("Enter the mark of subject 3  of student : ");
        scanf("%f",&arr[i].m[2]);

    }
    printf("Student Details\n");
    for(int i=0;i<5;i++){
        printf("Student %d\n",i+1);
        printf("Roll No : %d\n",arr[i].rn);
        printf("Name : %s\n",arr[i].n);
        printf("Marks of Subject 1 : %f and Subject 2 : %f and subject 3 : %f\n",arr[i].m[0],arr[i].m[1],arr[i].m[2]);
    }

    return 0;
}

