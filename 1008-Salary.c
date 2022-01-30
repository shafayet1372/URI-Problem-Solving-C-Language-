#include <stdio.h>
int main()
{
int number,worked_hours_amount;
float per_hours_amount;
float total_salary;
scanf("%d",&number);
scanf("%d",&worked_hours_amount);
scanf("%f",&per_hours_amount);
total_salary=worked_hours_amount*per_hours_amount;
printf("NUMBER = %d\n",number);
printf("SALARY = U$ %.2f\n",total_salary);
return 0;
}