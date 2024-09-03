#include <stdio.h>

// Function prototype
void towersOfHanoi(int n, char source, char auxiliary, char destination);

int main() {
    int n;

    printf("Enter the number of disks: ");
    scanf("%d", &n);

    // Calling the function to solve Towers of Hanoi problem
    towersOfHanoi(n, 'A', 'B', 'C');

    return 0;
}

// Recursive function to solve Towers of Hanoi problem
void towersOfHanoi(int n, char source, char auxiliary, char destination) {
    if (n == 1) {
        printf("Move disk 1 from %c to %c\n", source, destination);
        return;
    }

    towersOfHanoi(n - 1, source, destination, auxiliary);
    printf("Move disk %d from %c to %c\n", n, source, destination);
    towersOfHanoi(n - 1, auxiliary, source, destination);
}

