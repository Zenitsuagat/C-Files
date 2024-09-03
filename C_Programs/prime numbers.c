#include<stdio.h>
int main()
{
    int n,i,count,j;
    for(i=2;i<50;i++)
    {
        count = 0;
        for(j=1;j<=i+1;j++)
        {
            if(i%j==0)
            {
                count=count+1;
            }
        }
        if(count==2)
        {
            printf("%d is prime\n",i);
        }
        else
        {
            printf("%d is not prime\n",i);
        }
    }
    return 0;
}

