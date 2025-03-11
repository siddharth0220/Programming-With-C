#include <stdio.h>
void analyze_number(int v, int *m, int *s, int *p)
{
    *m = (v % 7 == 0) || (v % 11 == 0) || (v % 13 == 0);
    int sum = 0;
    int t = v;
    while (t > 0)
    {
        sum += t % 10;
        t /= 10;
    }
    *s = (sum % 2 == 0);
    if (v < 2)
    {
        *p = 0;
        return;
    }
    *p = 1;
    for (int i = 2; i * i <= v; i++)
    {
        if (v % i == 0)
        {
            *p = 0;
            break;
        }
    }
}
int main()
{
    int nums;
    while (1)
    {
        printf("Enter the +ve  integer: ");
        scanf("%d", &nums);
        int n = sizeof(nums) / sizeof(nums);
        for (int i = 0; i < n; i++)
        {
            int m, s, p;
            analyze_number(nums, &m, &s, &p);
            printf("Number: %d\n", nums);
            printf("  Multiple of 7, 11, or 13: %s\n", m ? "Yes" : "No");
            printf("  Sum of digits is %s\n", s ? "Even" : "Odd");
            printf("  Prime number: %s\n", p ? "Yes" : "No");
        }
        return 0;
        if (nums < 0)
        {
            break;
        }
    }
}