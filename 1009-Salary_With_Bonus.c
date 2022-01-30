#include <stdio.h>

int main()
{
    char name[200];
    double salary,total_sold,total_salary;
    
    scanf("%s",&name);
    scanf("%lf",&salary);
    scanf("%lf",&total_sold);
    total_salary=(double)salary+(double)15/(double)100*(double)total_sold;
 
    printf("TOTAL = R$ %.2lf\n",total_salary);
   
    return 0;
}
