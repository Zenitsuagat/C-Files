
#include <stdio.h>

int main() {
    char input[100];
    printf("Enter a upper string : ");
    scanf(" %[^\n]",input);

    int i = 0;
    while(input[i] != '\0'){
        if(input[i] >= 'A' && input[i] <= 'Z'){
            input[i] += 32;
        }
        i++;
    }
    printf("Lower : %s\n",input);

    char input2[100];
    printf("Enter a lower string : ");
    scanf(" %[^\n]",input2);

    int j = 0;
    while(input2[j] != '\0'){
        if(input2[j] >= 'a' && input2[j] <= 'z'){
            input2[j] -= 32;
        }
        j++;
    }
    printf("Upper : %s\n",input2);

    return 0;
}
