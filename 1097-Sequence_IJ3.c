#include < stdio.h >

	int main()
{
  
 int i, j;
 int from = 7, to = 5;
	for (i = 1; i <= 9; i = i + 2) {

		for (j = from; j >= to; j--) {
			printf("I=%d J=%d\n", i, j);

		}
		from = from + 2;
		to = to + 2;
	}
	return 0;
}
