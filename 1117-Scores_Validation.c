#include < stdio.h >

	int main()
{
    float a;  
    float sum = 0;
    int i = 0;
    float result;
	while (1) {
		if (i == 2)
			break;

		scanf("%f",& a);

		if (a >= 0 && a <= 10) {

			i++;
			sum = sum + a;
		} else {
			printf("nota invalida\n");
		}

	}

	result = sum / 2.00;

	printf("media = %.2f\n", result);

	return 0;
}