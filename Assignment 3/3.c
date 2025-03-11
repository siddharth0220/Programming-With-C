#include <stdio.h>
double absolute(double value) {
    return value < 0 ? -value : value;
}
void sqrtApproximation(double *N, double *result) {
    double LG = 1;
    double NG = 0.5 * (LG + *N / LG);
    
    while (absolute(NG - LG) >= 0.005) {
        LG = NG;
        NG = 0.5 * (LG + *N / LG);
    }
    *result = NG;
}
int main() {
    double n;
    double result;
    printf("Enter a number: ");
    scanf("%lf", &n);
    sqrtApproximation(&n, &result);
    printf("The approximate square root of %0.2f is %0.2f\n", n, result);
    return 0;
}
