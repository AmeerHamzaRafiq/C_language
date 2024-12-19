// [Gross Salary]



#include <stdio.h>
int main() {
    
    int houseRent, medicalAllowance, grossSalary, basicSalary;
    
    printf("Enter your basic salary: ");
    scanf("%d", &basicSalary);
    
    houseRent = basicSalary * 0.2;
    medicalAllowance = basicSalary * 0.1;
    grossSalary = houseRent + medicalAllowance + basicSalary;
    
    printf("Your basic salary: %d\n", basicSalary);
    printf("Your Medical Allowance: %d\n", medicalAllowance);
    printf("Your House Rent: %d\n", houseRent);
    printf("Your Gross Salary: %d\n", grossSalary);
    
}
