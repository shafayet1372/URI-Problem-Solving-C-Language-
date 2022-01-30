#include < stdio.h >

	int main()
{
    int n;
    int i;
    float a, b, c;
    float total_weight;
    float weight_avg;
	scanf("%d",& n);

	for (i = 1; i <= n; i++) {

		scanf("%f %f %f", & a, & b, & c);
		total_weight = 2 + 3 + 5;
		weight_avg = (a * 2) + (b * 3) + (c * 5);
		printf("%.1f\n", weight_avg / total_weight);
	}

	return 0;
}