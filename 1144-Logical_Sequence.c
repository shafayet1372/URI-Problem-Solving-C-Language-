#include < stdio.h >

  int main()
{
   int n, i, j, result, b, c, d;
   int k;
   int m;
  scanf("%d",& n);


  for (i = 1; i <= n; i++) {



    b = i * i;
    c = i * i * i;
    printf("%d %d %d\n", i, b, c);

    k = b + 1;
    c = c + 1;
    printf("%d %d %d\n", i, k, c);

  }



  return 0;
}
