#include <stdio.h>

// Function to calculate string length
int stringLength(const char *str) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

// Function to copy one string to another
void stringCopy(char *dest, const char *src) {
    int i = 0;
    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
}

// Function to compare two strings
int stringCompare(const char *str1, const char *str2) {
    int i = 0;
    while (str1[i] != '\0' || str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            return str1[i] - str2[i];
        }
        i++;
    }
    return 0;
}

// Function to reverse a string
void stringReverse(char *str) {
    int length = stringLength(str);
    int start = 0, end = length - 1;
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

// Function to convert string to lowercase
void stringToLower(char *str) {
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32;
        }
        i++;
    }
}

// Function to convert string to uppercase
void stringToUpper(char *str) {
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        }
        i++;
    }
}

// Function to concatenate two strings
void stringConcatenate(char *dest, const char *src) {
    int destLength = stringLength(dest);
    int srcLength = stringLength(src);
    int i = 0;
    while (src[i] != '\0') {
        dest[destLength + i] = src[i];
        i++;
    }
    dest[destLength + i] = '\0';
}

int main() {
    char str1[100], str2[100];

    // Input strings
    printf("Enter first string: ");
    scanf("%s", str1);
    printf("Enter second string: ");
    scanf("%s", str2);

    // String length
    printf("Length of first string: %d\n", stringLength(str1));
    printf("Length of second string: %d\n", stringLength(str2));

    // String copy
    char copy[100];
    stringCopy(copy, str1);
    printf("Copied string: %s\n", copy);

    // String comparison
    int cmp = stringCompare(str1, str2);
    if (cmp == 0) {
        printf("Strings are equal\n");
    } else if (cmp < 0) {
        printf("First string is lexicographically smaller\n");
    } else {
        printf("Second string is lexicographically smaller\n");
    }

    // String reverse
    stringReverse(str1);
    printf("Reversed first string: %s\n", str1);
    stringReverse(str2);
    printf("Reversed second string: %s\n", str2);

    // Convert strings to lowercase
    stringToLower(str1);
    printf("Lowercase first string: %s\n", str1);
    stringToLower(str2);
    printf("Lowercase second string: %s\n", str2);

    // Convert strings to uppercase
    stringToUpper(str1);
    printf("Uppercase first string: %s\n", str1);
    stringToUpper(str2);
    printf("Uppercase second string: %s\n", str2);

    // String concatenation
    stringConcatenate(str1, str2);
    printf("Concatenated string: %s\n", str1);

    return 0;
}
