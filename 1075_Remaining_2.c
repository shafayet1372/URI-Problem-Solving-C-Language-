#include < stdio.h >

  int main()
{
   int x;
    int i = 1;
  scanf("%d",& x);
  for (i + 1; i < 10000; i++) {
    if (i % x == 2) {
      printf("%d\n", i);
    }
  }

  return 0;
}
