#include <stdio.h>
int main(){
     double time,acceleration,takeOffspeed,distance;
  printf("Enter the takeoffspeed :");
    scanf("%lf", &takeOffspeed);
    takeOffspeed=takeOffspeed*5/18;
      printf("Enter the distance :");
    scanf("%lf", &distance);
    time = distance / takeOffspeed;
    printf("The time to take off is %f\n minutes :", time);
    acceleration=takeOffspeed/time;
    printf("The acceleration is %f m/s^2 :", acceleration);
    return 0;
}