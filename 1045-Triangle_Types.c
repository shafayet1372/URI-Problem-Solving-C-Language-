#include < stdio.h >

	int main()
{
    double a, b, c, temp;
	scanf("%lf %lf %lf",& a,& b,& c);

	if (a < b || a < c) {
		temp = a;
		if (b > c) {

			a = b;
			b = temp;
		} else {
			a = c;
			c = temp;
		}
	}


	if (a >= b + c) {

		printf("NAO FORMA TRIANGULO\n");
	} else if ((a * a) == (b * b + c * c)) {
		printf("TRIANGULO RETANGULO\n");

	} else if ((a * a) > (b * b + c * c)) {

		printf("TRIANGULO OBTUSANGULO\n");
	} else if ((a * a) < (b * b + c * c)) {

		printf("TRIANGULO ACUTANGULO\n");
	}


	if (a == b && a == c && b == c) {
		printf("TRIANGULO EQUILATERO\n");
	} else if (a == b || a == c || b == c) {
		printf("TRIANGULO ISOSCELES\n");
	}


	return 0;
}