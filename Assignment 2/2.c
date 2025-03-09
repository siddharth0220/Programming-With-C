#include <stdio.h>
int main() {
    int n = 0;
    char continueInput;
    int id_num;
    double hr_wage, hr_work;
    double regularpay, overtimepay;
    double payroll = 0.0;
    double grossalery, taxpay, netpay;
    do {
        printf("Enter the employee identification number: ");
        scanf("%d", &id_num);
        printf("Enter the hourly wage rate: ");
        scanf("%lf", &hr_wage);
        printf("Enter the hours worked: ");
        scanf("%lf", &hr_work);  
        if (hr_work <= 40) {
            regularpay = hr_wage * hr_work;
            overtimepay = 0;
        } else {
            regularpay = hr_wage * 40;
            overtimepay = (hr_wage * 1.5) * (hr_work - 40);
        }  
        payroll += regularpay + overtimepay;
        grossalery = regularpay + overtimepay;
        taxpay = grossalery * 0.03625;
        netpay = grossalery - taxpay; 
        printf("Employee id: %d Netpay: %.2f \n", id_num, netpay);
        n++; 
        printf("Do you want to enter details for another employee? (y/n): ");
        scanf(" %c", &continueInput);
    } while (continueInput == 'y' || continueInput == 'Y');
    if (n > 0) {
        printf("The total payroll: %.2f \n", payroll);
        double avg_paid = payroll / n;
        printf("The average amount paid: %.2f \n", avg_paid);  
    } else {
        printf("No employee data was entered.\n");
    }
    return 0;
}