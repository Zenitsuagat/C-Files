#include <stdio.h>
#include <string.h>

int main()
{
    char a[20] = "Hello ";
    char b[] = "world!";

    // Concatenate
    strcat(a,b);

    // Print the concatenated string
    printf("Concatenated string: %s\n", a);

    return 0;
}

