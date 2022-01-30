#include < stdio.h >

	int main()
{
    int a, b;
    float r;
	scanf("%d %d", & a, & b);

	r = (float)(a * b) / 12;

	printf("%.3f\n", r);
	return 0;
}