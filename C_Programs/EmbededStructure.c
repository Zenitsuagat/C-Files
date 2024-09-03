#include <stdio.h>
 struct college
 {
     char m[50];
     char h[20];
 };
 struct student
 {
     char name[20];
     int rn;
     float m;
     struct college c1;
 };
 struct student s1;
 int main()
 {
     printf("Enter your name : ");
     scanf("%[^\n]",&s1.name);
     printf("Enter your roll number : ");
     scanf("%d",&s1.rn);
     printf("Enter your mark : ");
     scanf("%f",&s1.m);

     printf("Enter whether your are management or not : ");
     scanf("%s",s1.c1.m);
     printf("Enter whether your are a hosteler or not : ");
     scanf("%s",s1.c1.h);


     printf("\t Student details\n");
     printf("Name : %s\n",s1.name);
     printf("Roll No : %d\n",s1.rn);
     printf("Mark : %f\n",s1.m);
     printf("Management  : %s\n",s1.c1.m);
     printf("Hostel  : %s",s1.c1.h);


     return 0;
 }
