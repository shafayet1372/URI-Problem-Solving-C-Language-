#include < stdio.h >

	int main()
{
   int a, b;
   int dif;
	scanf("%d %d",& a,& b);

	dif = b - a;

	if (dif < 0) {
		dif = 24 + dif;
	}

	if (a == b) {

		printf("O JOGO DUROU 24 HORA(S)\n");
	} else {
		printf("O JOGO DUROU %d HORA(S)\n", dif);
	}

	return 0;
}
