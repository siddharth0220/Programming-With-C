#include <stdio.h>
#include <math.h>
double sqrroot(double n)
{
    double ng, lg = 1.0;
  while(1)
    {
        ng = 0.5*(lg + n/lg);
        if(ng-lg == 0)
        {
            return ng;
        }
       if(fabs(ng-lg) < 0.005)
        break;
        lg = ng;
    }
    return ng;
}
void main()
{
    double n;
   
    printf("Enter the number: ");
    scanf("%lf",&n);
    printf("Square root of %.2lf is %.2lf:  ",n,sqrroot(n));

}