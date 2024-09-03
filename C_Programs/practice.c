#include <stdio.h>

int main() {
    char *name = NULL;
    size_t size = 0;

    printf("Enter a string: ");


    printf("%s", name);

    free(name);

    return 0;
}
