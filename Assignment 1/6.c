#include <stdio.h>
double celsius_at_depth(double depth) {
    return 10 * depth + 20;
}
double Fahrenheit_at_depth(double celsius) {
    return 1.8 * celsius + 32;
}
int main() {
    double depth;
    printf("Enter the depth in meters: ");
    scanf("%lf", &depth);
    double temp_at_c = celsius_at_depth(depth);
    double temp_at_f = Fahrenheit_at_depth(temp_at_c);
    printf("The temperature in celsius: %f", temp_at_c);
    printf("The temperature in fahrenheit: %f", temp_at_f);
    return 0;
}