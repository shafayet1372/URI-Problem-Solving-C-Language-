#include < stdio.h >

	int main()
{
 int a, b, c;
 int big, small, medium;
	scanf("%d %d %d", & a, & b, & c);
	if (a > b && a > c) {
		big = a;
		if (b > c) {
			medium = b;
			small = c;
		} else {
			medium = c;
			small = b;
		}
	} else if (b > a && b > c) {
		big = b;
		if (a > c) {
			medium = a;
			small = c;
		} else {
			medium = c;
			small = a;
		}
	} else if (c > a && c > b) {
		big = c;
		if (a > b) {
			medium = a;
			small = b;
		} else {
			medium = b;
			small = a;
		}
	}
	printf("%d\n", small);
	printf("%d\n", medium);
	printf("%d\n", big);

	printf("\n");
	printf("%d\n", a);
	printf("%d\n", b);
	printf("%d\n", c);


	return 0;
}