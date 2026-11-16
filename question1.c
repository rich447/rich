/* A company pays its staff by the hour. Overtime hours are paid at 1.5 times the normal hourly rate. 
SSNIT of 5.5% is deducted from gross pay. Income tax is 10% of what remains after SSNIT, 
and a fixed welfare contribution of GHS 20.00 is also deducted.
Write a program that asks for the regular hours worked, the hourly rate and the overtime hours,
 then displays the regular pay, overtime pay, gross pay, each deduction, total deductions and net pay
*/

#include <stdio.h>
int main() {
    float regularHours, hourlyRate, overtimeHours;
    float regularPay, overtimePay, grossPay;
    float ssnit, incometax, netPay;
    float totalDeductions;
    const float welfare = 20;

    printf("Enter regular hours worked: ");
    scanf("%f", &regularHours);

    printf("Enter hourly rate: ");
    scanf("%f", &hourlyRate);

    printf("Enter overtime hours: ");
    scanf("%f", &overtimeHours);

    regularPay = regularHours * hourlyRate;
    overtimePay = overtimeHours * 1.5 * hourlyRate;
    grossPay = regularPay + overtimePay;
    ssnit = grossPay * 0.055;
    incometax = (grossPay - ssnit) * 0.10;
    totalDeductions = ssnit + incometax + welfare;
    netPay = grossPay - totalDeductions;

    printf("Regular Pay = %.2f\n", regularPay);
    printf("Overtime Pay = %.2f\n", overtimePay);
    printf("Gross Pay = %.2f\n", grossPay);
    printf("SSNIT = %.2f\n", ssnit);
    printf("Income Tax = %.2f\n", incometax);
    printf("Welfare = %.2f\n", welfare);
    printf("Total Deductions = %.2f\n", totalDeductions);
    printf("Net Pay = %.2f\n", netPay);
    getchar();   // absorbs the Enter left over from your last input
    getchar();   // waits for a fresh key press 
    return 0;
}