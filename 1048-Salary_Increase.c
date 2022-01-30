#include < stdio.h >

	int main()
{
       float salary;
       float  new_salary, earned, newearned;
	scanf("%f",& salary);

	if (salary >= 0 && salary <= 400.00) {

		newearned = (salary / 100) * 15;
		new_salary = salary + newearned;
		printf("Novo salario: %.2f\n", new_salary);
		printf("Reajuste ganho: %.2f\n", newearned);
		printf("Em percentual: 15 %\n");
	} else if (salary >= 400.01 && salary <= 800.00) {
		newearned = (salary / 100) * 12;
		new_salary = salary + newearned;
		printf("Novo salario: %.2f\n", new_salary);
		printf("Reajuste ganho: %.2f\n", newearned);
		printf("Em percentual: 12 %\n");

	} else if (salary >= 800.01 && salary <= 1200.00) {

		newearned = (salary / 100) * 10;
		new_salary = salary + newearned;
		printf("Novo salario: %.2f\n", new_salary);
		printf("Reajuste ganho: %.2f\n", newearned);
		printf("Em percentual: 10 %\n");
	} else if (salary >= 1200.01 && salary <= 2000.00) {
		newearned = (salary / 100) * 7;
		new_salary = salary + newearned;
		printf("Novo salario: %.2f\n", new_salary);
		printf("Reajuste ganho: %.2f\n", newearned);
		printf("Em percentual: 7 %\n");
	} else if (salary > 2000.00) {

		newearned = (salary / 100) * 4;
		new_salary = salary + newearned;
		printf("Novo salario: %.2f\n", new_salary);
		printf("Reajuste ganho: %.2f\n", newearned);
		printf("Em percentual: 4 %\n");
	}

	return 0;
}