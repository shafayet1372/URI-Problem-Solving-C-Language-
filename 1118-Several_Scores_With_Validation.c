#include < stdio.h >

	int main()
{
   double a, sum, result;
   int d, number;
	while (1) {

		sum = 0;
		d = 0;
		while (1) {
			if (d == 2)
				break;
			scanf("%lf",& a);

			if (a >= 0 && a <= 10) {
				d++;
				sum = sum + a;


			} else {
				printf("nota invalida\n");
			}
		}

		printf("media = %.2lf\n", sum / 2.00);
		printf("novo calculo (1-sim 2-nao)\n");
		while (1) {
			scanf("%d",& number);
			if (number != 1 && number != 2) {
				printf("novo calculo (1-sim 2-nao)\n");
			}
			else {
				break;
			}

		}
		if (number == 2)
			break;

	}

	return 0;
}