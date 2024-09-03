#include <stdio.h>
#include <string.h>
int main()
{
    char src[] = "This is the string to be copied";  //source string
    char dest[50];  //destination string

    //strcpy() method
    strcpy(dest,src);

    printf("The copied string : %s",dest);

    return 0;
}
