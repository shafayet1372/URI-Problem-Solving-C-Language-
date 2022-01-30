#include < stdio.h >

  int main()
{
   int i, x;
  scanf("%d",& x);
   int result = 1;

  for (i = 1; i <= x; i++) {

    result = result * i;

  }

  printf("%d\n", result);
  return 0;
}