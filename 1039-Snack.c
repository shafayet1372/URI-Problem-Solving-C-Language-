#include < stdio.h >

	int main()
{
    int X, Y;
    float price;
	scanf("%d %d", & X, & Y);
	if (X == 1) {
		price = (float)Y * 4.00;
		printf("Total: R$ %.2f\n", price);
	} else if (X == 2) {
		price = (float)Y * 4.50;
		printf("Total: R$ %.2f\n", price);
	} else if (X == 3) {
		price = (float)Y * 5.00;
		printf("Total: R$ %.2f\n", price);
	} else if (X == 4) {
		price = (float)Y * 2.00;
		printf("Total: R$ %.2f\n", price);
	} else if (X == 5) {
		price = (float)Y * 1.50;
		printf("Total: R$ %.2f\n", price);
	}



	return 0;
}