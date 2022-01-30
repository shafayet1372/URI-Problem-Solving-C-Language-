#include < stdio.h >

  int main()
{
  int n;
  scanf("%d",& n);
  int i;
  int d = 0, c = 0;
  for (i = 0; i < n; i++) {
      int j = 1 + d, k = 3 + c;
    for (j; j <= k; j++) {
      printf("%d ", j);

    }
    d = d + 4;
    c = c + 4;
    printf("PUM\n");
  }

  return 0;
}