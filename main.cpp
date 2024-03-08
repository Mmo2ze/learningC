#include <stdio.h>
using namespace std;

int Q3(int monthlySalary){
//    calc the  annual salary of employee

    return  monthlySalary * 12;
}

int main() {
//
    int monthlySal ;
    printf("enter your monthly salary : ");
    scanf("%d",&monthlySal);
    int annualSalary = Q3(monthlySal);
    printf("Your Annual Salary is : %d" , annualSalary);
    return 0;
}
