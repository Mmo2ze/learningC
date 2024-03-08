#include <stdio.h>

using namespace std;
int main() {
//
    int monthlySal ;
    printf("enter your monthly salary : ");
    scanf("%d",&monthlySal);
    int annualSalary = Q3(monthlySal);
    printf("Your Annual Salary is : %d" , annualSalary);
    return 0;
}
