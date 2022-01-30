#include < stdio.h >

	int main()
{
    int input;
    int year, month, days;
	scanf("%d",& input);
	year = input / 365;
	month = (input % 365) / 30;
	days = (input % 365) % 30;
	printf("%d ano(s)\n", year);
	printf("%d mes(es)\n", month);
	printf("%d dia(s)\n", days);
	return 0;
}