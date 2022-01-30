#include < stdio.h >

	int main()
{
  
    int number;
    int temp[25];
    int i;
    int pos;
	for (i = 1; i <= 100; i++) {
		scanf("%d",& number);
		if (temp[0]) {
			if (number > temp[0]) {
				temp[0] = number;
				pos = i;
			}
		} else {
			temp[0] = number;
		}

	}
	printf("%d\n", temp[0]);
	printf("%d\n", pos);
	return 0;
}