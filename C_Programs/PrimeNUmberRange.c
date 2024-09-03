#include <stdio.h>
void PrimeRange(int r){
    int i,count,j;
    for(i=2;i<r+1;i++)
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
            printf("%d\n",i);
        }


    }
}
int main()
{

    int r;
    printf("Enter a range : ");
    scanf("%d",&r);

    PrimeRange(r);

    return 0;
}
