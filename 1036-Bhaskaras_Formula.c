#include < stdio.h >
	#include < math.h >
	int main()
{
  
   float a, b, c, d, r1, r2;


	scanf("%f %f %f", & a, & b, & c);

	d = (b * b) - (4 * a * c);
	r1 = (-b + sqrt(d)) / (2 * a);
	r2 = (-b - sqrt(d)) / (2 * a);


	if (d > 0 && a != 0) {

		printf("R1 = %.5f\n", r1);
		printf("R2 = %.5f\n", r2);
	} else {
		printf("Impossivel calcular\n");
	}
	return 0;
}