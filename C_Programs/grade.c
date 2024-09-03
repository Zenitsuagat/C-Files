#include <stdio.h>
void main()
{
    int mark;
    printf("enter the mark : ",mark);
    scanf("%d",&mark);

    if((mark <= 100) && (mark >= 85))
    {
        printf("GRADE A");
    }
    else if((mark < 85) && (mark > 60))
    {
        printf("GRADE B");
    }
    else
    {
        printf("Fail");
    }
}
