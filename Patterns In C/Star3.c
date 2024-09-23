#include <stdio.h>
int main(){
    int rows;
    printf("Enter the number of rows : ");
    scanf("%d",&rows);
    for(int i=0;i<=rows;i++){
        for(int j=1;j<=rows;j++){
         if(i+j<=rows){
            printf(" ");
         }
         else printf("*");
        }
        printf("\n");
    }
}
/*
OUTPUT
Enter the number of rows : 10

          *
         **
        ***
       ****
      *****
     ******
    *******
   ********
  *********
 **********
*/