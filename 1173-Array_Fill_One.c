#include < stdio.h >

  int main()
{
   int x[10];
   int i, n, result = 1, k;
  scanf("%d",& n);
  for (i = 0; i < 10; i++) {
    if (i > 0) {
      k = x[i - 1];
      x[i] = k * 2;
    } else {
      x[i] = n;
    }

  }

  for (i = 0; i < 10; i++) {
    printf("N[%d] = %d\n", i, x[i]);
  }

  return 0;
}
