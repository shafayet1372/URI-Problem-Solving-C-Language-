#include < stdio.h >

	int main()
{
    
    int i;
    int evnt_count = 0, pos_count = 0, ng_count = 0, odd_count = 0;
    int a;
	for (i = 1; i <= 5; i++) {

		scanf("%d",& a);
		if (a % 2 == 0) {
			evnt_count++;
		}
		if (a % 2 != 0) {
			odd_count++;
		}
		if (a > 0) {
			pos_count++;
		}
		if (a < 0) {
			ng_count++;
		}
	}

	printf("%d valor(es) par(es)\n", evnt_count);
	printf("%d valor(es) impar(es)\n", odd_count);
	printf("%d valor(es) positivo(s)\n", pos_count);
	printf("%d valor(es) negativo(s)\n", ng_count);

	return 0;
}