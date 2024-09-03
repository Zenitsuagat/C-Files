#include <stdio.h>
int main()
{
    int a,n,i,p;
    printf("Enter the number : ");
    scanf("%d",&a);
    printf("Enter the end number : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        p=a*i;
        printf("%d x %d = %d\n",a,i,p);
    }
    return 0;
}
