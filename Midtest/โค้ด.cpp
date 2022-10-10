#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void inf(int sum_salary,int max_salary,int* sumsalary,int* maxsalary,int* mostyear,char mostmoney[20]){
    int year,salary;
    char name[20];
    printf("Employee Name : ");
    scanf("\n%[^\n]s",&name);
    printf("Salary(Bath/Month): ");
    scanf("\n%d",&salary);
    printf("Duration(Year): ");
    scanf("\n%d",&year);
    salary > max_salary ?  (*maxsalary = salary,*mostyear = year,strcpy(mostmoney,name)) : "Undefined";
    *sumsalary = sum_salary + salary;
}

int main(){
    int sum_salary=0, max_salary=0, most_year=0, count=0;
    char condition,mostMoney[20] = "temp";
    char* mPointer = mostMoney;
    printf("Do you want to Enter Employee Information?(y/n): ");
    scanf("\n%c",&condition);
    while(condition!='n'&&condition=='y'){
        inf(sum_salary,max_salary, &sum_salary,&max_salary,&most_year,mPointer);
        count+=1;
        printf("Do you want to Enter Employee Information?(y/n): ");
        scanf("\n%c",&condition);
    }
    printf("\nAverage of Salary : %.2f Bath\n",(float)sum_salary/count);
    printf("Payment of every month : %.2f Bath\n",(float)sum_salary);
    printf("** Most duration in the business ** \n");
    printf("Name : %s (%d Years)\n",mostMoney,most_year);
    printf("Salary : %.2f Bath\n",(float)max_salary);
    return 0;
}
