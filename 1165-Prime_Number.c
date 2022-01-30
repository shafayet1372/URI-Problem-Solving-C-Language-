#include < stdio.h >

  int main()
{
   int n, i, x, j, divisor[25], k;
  scanf("%d",& n);
  for (i = 1; i <= n; i++) {
    k = 0;
    scanf("%d",& x);
    for (j = 1; j <= x; j++) {

      if (x % j == 0) {

        divisor[k] = j;
        k++;
      }

    }
    if (divisor[0] == 1 && divisor[1] == x) {
      printf("%d eh primo\n", x);
    } else {
      printf("%d nao eh primo\n", x);
    }

  }

  return 0;
}
