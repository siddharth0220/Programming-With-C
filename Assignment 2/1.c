
#include <stdio.h>
#include <math.h>

int main() {
    int N;
    printf("Enter the no of elements:");
    scanf("%d",&N);
    int sm,lr,num,sq;
    printf("Enter the value of 1 number:");
    scanf("%d",&sm);
    lr=sm;
    int sum=sm;
    int sum_of_sq=sm*sm;
    for(int i=1;i<N;i++){
        printf("Enter the value of %d number:",i+1);
        scanf("%d",&num);
        if(num<sm){
            sm=num;
        }
        if(num>lr){
            lr=num;
        }
        sum=sum+num;
        sum_of_sq+=num*num;
    }
    double avg=(double)sum/N;
    printf("The smallest number is:%d \n",sm);
    printf("The largest number is:%d \n",lr);
    printf("The average of the numbers is: %f \n",avg);
    double SD=sqrt((double)(sum_of_sq/N)-(avg*avg));
    printf("The range is [%d - %d] \n",sm,lr);
    printf("The standard deviation is: %f ",SD);
    return 0;
}