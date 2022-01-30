#include < stdio.h >

  int main()
{
   int x, z, count = 0;
   int i;
   int result = 0;
  scanf("%d",& x);

  while (1) {
    scanf("%d",& z);
    if (z <= x) {
      continue;
    } else if (z > x) {
      while (1) {
        result = result + x;
        x++;
        count++;
        if (result > z)
          break;
      }

    }
    if (result > z)
      break;
  }
  printf("%d\n", count);
  return 0;
}