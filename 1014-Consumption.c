#include < stdio.h >

	int main()
{
    int X;
    float Y, average_consumption;
	scanf("%d",& X);
	scanf("%f",& Y);
	average_consumption = X / Y;
	printf("%.3f km/l\n", average_consumption);
	return 0;
}