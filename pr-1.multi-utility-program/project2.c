
#include <stdio.h>

int main()
{

    // gross salary

    float baseSalary, grossSalary, HRA, DA, TA;

    float hraAmount, daAmount, taAmount;

    baseSalary = 100;

    
    printf("\nbase salary:%f", baseSalary);

    printf("\nenter your HRA : ");
    scanf("%f", &HRA);

    printf("\nenter your DA : ");
    scanf("%f", &DA);

    printf("\nenter your TA : ");
    scanf("%f", &TA);



    daAmount = (baseSalary * DA) / 100;

    taAmount = (baseSalary * TA) / 100;

    hraAmount = (baseSalary * HRA) / 100;

    

    grossSalary = baseSalary + hraAmount + daAmount + taAmount  ;

    printf("\nGross Salary:%.2f", grossSalary);

    return 0;
}