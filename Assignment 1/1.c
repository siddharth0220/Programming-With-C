#include <stdio.h>

#define Efficiency_constant 0.90
#define PI 3.141
#define Gravitational_constant 9.8
#define Per_cubic_meter 1000
#define MW 1000000

double calculate_power(double height, double flow_rate) {
    double mfr = flow_rate * Per_cubic_meter;
    double wd = mfr * Gravitational_constant * height;
    double PowerOutput = wd * Efficiency_constant / MW;
    return PowerOutput;
}
int main() {
    double height, flow_rate;
    printf("Enter the height of the dam (in meters): ");
    scanf("%lf", &height);
    printf("Enter the flow rate (in cubic meters per second): ");
    scanf("%lf", &flow_rate);
    double PowerOutput = calculate_power(height, flow_rate);
    printf("Predicted power: %lf MW", PowerOutput);
    return 0;
}