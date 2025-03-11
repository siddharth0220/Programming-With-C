#include <stdio.h>

// Function to check the properties of the number
void checkProperties(int n, int *isMultiple, int *isEven, int *isPrime) {
    // Check if the number is a multiple of 7, 11, or 13
    *isMultiple = (n % 7 == 0 || n % 11 == 0 || n % 13 == 0);

    // Check if the number is even
    *isEven = (n % 2 == 0);

    // Check if the number is prime
    *isPrime = 1; // Assume the number is prime
    if (n <= 1) {
        *isPrime = 0;
    } else {
        for (int i = 2; i <= n / 2; i++) {
            if (n % i == 0) {
                *isPrime = 0;
                break;
            }
        }
    }
}

// Function to print the properties
void printProperties(int n, int isMultiple, int isEven, int isPrime) {
    printf("%d is multiple of 7, 11, or 13: %d\n", n, isMultiple);
    printf("%d is Even: %d\n", n, isEven);
    printf("%d is Prime: %d\n", n, isPrime);
}

int main() {
    int n;
    int isMultiple, isEven, isPrime;
    
    printf("Enter the number: ");
    scanf("%d", &n);
    
    checkProperties(n, &isMultiple, &isEven, &isPrime);
    printProperties(n, isMultiple, isEven, isPrime);
    
    return 0;
}
