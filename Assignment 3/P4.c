#include <stdio.h>
#include <math.h>
#define rho 1.23
double dragForce(double A, double CD, double v)
{
   
    return  0.5 * rho * A * CD * pow(v, 2);

}
int main()
{
    double A,CD;
printf("Enter the area of the object: ");
scanf("%lf",&A);
printf("Enter the drag coefficient of the object: ");
scanf("%lf",&CD);
printf("Input velocity\tDrag Force\n");
for(int i=0; i<=40; i = i+5)
{
    printf("%d m/s\t\t%.2lf N\n",i,dragForce(A,CD,(double)i));
}
}