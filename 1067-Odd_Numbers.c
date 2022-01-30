#include < stdio.h >

	int main()
{ 
    int i;
    int a;
	scanf("%d",& a);
	for (i = 1; i <= a; i++) {
		if (i % 2 == 1) {
			printf("%d\n", i);
		}
	}

	return 0;
}