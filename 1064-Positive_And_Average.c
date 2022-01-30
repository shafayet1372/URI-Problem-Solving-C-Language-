#include < stdio.h >

	int main()
{
    float a;
    int i;
    int count = 0;
    int ar[25];
    float sum = 0;
	for (i = 1; i <= 6; i++) {

		scanf("%f",& a);
		if (a > 0) {
			count++;
			sum = sum + a;
		}
	}
	printf("%d valores positivos\n", count);
	printf("%.1f\n", sum / count);

	return 0;
}
