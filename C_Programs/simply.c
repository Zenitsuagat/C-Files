#include<stdio.h>
int main()
{
    int i=3,j,count=0,a=1;
    for(j=1;j<i+1;j++)
        {
            printf("%d j\n",j);
            printf("%d i\n",i);
            if(i%j==0)
            {
                printf("d");
                count=count+1;
                printf("%d incount\n",count);
            }
            else
            {
                printf("nd");
                a++;
                printf("%d a",a);
            }
        }
    printf("%d count\n",count);

    return 0;
}
