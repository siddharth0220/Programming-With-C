#include <stdio.h>
#include <math.h>
double calculate_payment(double monthlyinterestrate, int total_payments, double purchasepower, double downpayment) {
    double principal = purchasepower-downpayment; 
    double payment = ((monthlyinterestrate)*principal) / (1 - pow(1 + monthlyinterestrate, -total_payments));
    return payment;
}
int main() {
    double purchasepower, monthlyinterestrate, payment, downpayment;
    int total_payments;
    printf("Enter the downpayment : ");
    scanf("%lf", &downpayment);
    printf("Enter the purchase power : ");
    scanf("%lf", &purchasepower);
    printf("Enter the annual interest rate (in percent): ");
    scanf("%lf", &monthlyinterestrate);
    printf("Enter the total number of payments: ");
    scanf("%d", &total_payments);
    payment = calculate_payment(monthlyinterestrate/100/12, total_payments, purchasepower, downpayment);
    printf("Your monthly payment will be: $%lf\n", payment);
    return 0;
}