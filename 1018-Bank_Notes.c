#include < stdio.h >

	int main()
{
    int amt, total;
	scanf("%d",& amt);
	printf("%d\n", amt);
	total = amt / 100;
	amt = amt - (total * 100);
	printf("%d nota(s) de R$ 100,00\n", total);
	total = amt / 50;
	amt = amt - (total * 50);
	printf("%d nota(s) de R$ 50,00\n", total);
	total = amt / 20;
	amt = amt - (total * 20);
	printf("%d nota(s) de R$ 20,00\n", total);
	total = amt / 10;
	amt = amt - (total * 10);
	printf("%d nota(s) de R$ 10,00\n", total);
	total = amt / 5;
	amt = amt - (total * 5);
	printf("%d nota(s) de R$ 5,00\n", total);
	total = amt / 2;
	amt = amt - (total * 2);
	printf("%d nota(s) de R$ 2,00\n", total);
	total = amt / 1;
	amt = amt - (total * 1);
	printf("%d nota(s) de R$ 1,00\n", total);
	return 0;
}
