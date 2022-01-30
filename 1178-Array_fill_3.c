#include < stdio.h >

  int main()
{
   double N[100], n, k;
   int i;


  scanf("%lf",& n);

  for (i = 0; i < 100; i++) {

    if (i > 0) {
      k = N[i - 1];
      k = k / 2.0000;
      N[i] = k;
    } else {
      N[i] = n;
    }
  }
  for (i = 0; i < 100; i++) {
    printf("N[%d] = %.4lf\n", i, N[i]);
  }
  return 0;
}