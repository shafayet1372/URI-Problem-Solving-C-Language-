#include < stdio.h >

	int main()
{   
   int sum = 0;
   int i;
   int X, Y;
	scanf("%d %d",& X,& Y);
	for (i = Y + 1; i < X; i++) {

		if (i % 2 != 0) {
			sum = sum + i;
		}

	}
	printf("%d\n", sum);

	return 0;
}