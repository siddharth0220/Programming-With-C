#include<stdio.h>
double  fast_food_billions(int year){
  int y=year-2005;
  return 33.2+16.8*y;
}
int main(){
    int year;
    while (1)
    {
    printf("Enter the year greater than 2005  and  -1 to exit:");
    scanf("%d",&year);
    if(year<2005){
        printf("program terminated");
        break;
    }else{
        printf("Fast food billions in %d is %.2lf \n",year,fast_food_billions(year));
    }
    }
    return 0;
}