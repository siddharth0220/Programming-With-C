#include <stdio.h>
double acceleration(double u, double v, double t) {
    return (v - u) / t;
}
double time(double u, double v, double a) {
    return (v - u) / a;
}
int main() {
    double u, v, t, acceleration_value;
    printf("Enter the initial velocity: ");
    scanf("%lf", &u);
    printf("Enter the final velocity: ");
    scanf("%lf", &v);
    printf("Enter the time: ");
    scanf("%lf", &t);
    acceleration_value = acceleration(u, v, t);
    printf("The acceleration is: %lf", acceleration_value);
    double calculated_t = time(u, v, acceleration_value);
    printf("The calculated time is: %lf", calculated_t);
    return 0;
}