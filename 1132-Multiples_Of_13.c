#include < stdio.h >

  int main()
{
  int x, y, i, sum = 0, divi = 13;
  scanf("%d%d",& x,& y);
  if (x > y) {
    for (i = y; i <= x; i++) {

      if (i % divi != 0) {
        sum = sum + i;
      }
    }
  }
  if (x < y) {
    for (i = x; i <= y; i++) {

      if (i % divi != 0) {
        sum = sum + i;
      }
    }
  }

  printf("%d\n", sum);
  return 0;
}