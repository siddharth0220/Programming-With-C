#include <stdio.h>
int main()
{
    int rows, number = 1;
    printf("Enter the number of rows :");
    scanf("%d", &rows);
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= i; j++) 
        {
            printf(" %d ", number++);
        }
        printf("\n");
    }
}
/*
OUTPUT
Enter the number of rows :7
 1
 2  3
 4  5  6
 7  8  9  10
 11  12  13  14  15
 16  17  18  19  20  21
 22  23  24  25  26  27  28
*/