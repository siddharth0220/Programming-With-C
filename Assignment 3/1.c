#include <stdio.h>
void calculateBills(int amount, int *fifties, int *twenties, int *tens) {
    *fifties = amount / 50;   
    amount %= 50;             
    *twenties = amount / 20;   
    amount %= 20;       
    *tens = amount / 10;
}
int main() {
    int amount,fifties, twenties, tens;
    printf("Enter the amount (in multiples of 10): ");
    scanf("%d", &amount);
    if (amount <= 0 || amount % 10 != 0) {
        printf("Invalid amount. Enter an amount i.e multiple of 10.");
        return 1;
    }
    calculateBills(amount, &fifties, &twenties, &tens);
    printf("$50 bills: %d", fifties);
    printf("$20 bills: %d", twenties);
    printf("$10 bills: %d", tens);
    return 0;
}