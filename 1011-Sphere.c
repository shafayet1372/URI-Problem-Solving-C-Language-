#include < stdio.h >

	int main()
{
    double pi, R, volume;
	pi = 3.14159;
	scanf("%lf",& R);
	volume = (double)(4 / 3.0) * (double)pi * (double)(R * R * R);

	printf("VOLUME = %.3lf\n", volume);
	return 0;

}