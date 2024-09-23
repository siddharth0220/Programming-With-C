#include <stdio.h>
int main(){
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    if(age>=18){
        printf("You can cast your vote");
    }
    else{
        printf("You cannot cast your vote");
    }
    return 0;
}