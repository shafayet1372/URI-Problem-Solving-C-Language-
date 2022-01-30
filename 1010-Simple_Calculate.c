#include < stdio.h >

	int main()
{
    int code_of_p1, number_of_units_p1, code_of_p2, number_of_units_p2;
    float price_of_p1, price_of_p2, total_to_pay_p1, total_to_pay_p2, total;
	scanf("%d %d %f", & code_of_p1, & number_of_units_p1, & price_of_p1);
	scanf("%d %d %f", & code_of_p2, & number_of_units_p2, & price_of_p2);
	total_to_pay_p1 = number_of_units_p1 * price_of_p1;
	total_to_pay_p2 = number_of_units_p2 * price_of_p2;
	total = total_to_pay_p1 + total_to_pay_p2;
	printf("VALOR A PAGAR: R$ %.2f\n", total);
	return 0;
}
