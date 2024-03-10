#include <stdio.h>
using namespace std;

int Q3(int monthlySalary){
//    calc the  annual salary of employee

    return  monthlySalary * 12;
}
int Q5(int liters){


    return liters * 23;
}
int Q6(){
    int temp;
    int totalStudentSubj;
    printf("Entre yr first subj :");
    scanf("%d",&temp);
    totalStudentSubj += temp;
    printf("Entre yr 2 subj :");
    scanf("%d",&temp);
    totalStudentSubj += temp;
    printf("Entre yr 3 subj :");
    scanf("%d",&temp);
    totalStudentSubj += temp;
    printf("Entre yr 4 subj :");
    scanf("%d",&temp);
    totalStudentSubj += temp;
    printf("Entre yr 5 subj :");
    scanf("%d",&temp);
    totalStudentSubj += temp;

    int missingMarks = 500 - totalStudentSubj;
    printf("Total Marks : %d\n",totalStudentSubj);
    printf("Missing Marks : %d",missingMarks);
    return 0;
}

int Q7( int nOfTables,int nOfChairs){



    return 30*nOfTables + 25*nOfChairs;
}

int main() {



    return 0;
}

