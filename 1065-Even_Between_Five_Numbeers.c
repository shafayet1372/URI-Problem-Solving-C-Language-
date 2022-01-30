#include < stdio.h >

	int main()
{
    
    int i;
    int count;
    int a;
	for (i = 1; i <= 5; i++) {
		scanf("%d",& a);
		if (a % 2 == 0) {
			count++;
		}
	}

	printf("%d valores pares\n", count);

	return 0;
}