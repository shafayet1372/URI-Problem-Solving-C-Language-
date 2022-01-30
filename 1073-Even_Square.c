#include < stdio.h >

	int main()
{
    
    
int number;
	scanf("%d",& number);
int sqr;
int i;
	for (i = 1; i <= number; i++) {


		if (i % 2 == 0) {
			sqr = i * i;
			printf("%d^2 = %d\n", i, sqr);
		}
	}
	return 0;
}