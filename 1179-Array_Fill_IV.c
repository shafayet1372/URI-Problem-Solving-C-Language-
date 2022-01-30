/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include < stdio.h >

  int main()
{
    int n, i, j, k, par[5], impar[5], c = 0, d = 0;
     int size_par;
     int size_impar;
  for (i = 0; i < 15; i++) {

    scanf("%d",& n);

    if (n % 2 == 0) {

      par[c] = n;
      c++;

    } else {

      impar[d] = n;
      d++;

    }
    if (c == 5) {
      for (j = 0; j < 5; j++) {
        printf("par[%d] = %d\n", j, par[j]);
      }
      c = 0;
    }
    if (d == 5) {

      for (k = 0; k < 5; k++) {
        printf("impar[%d] = %d\n", k, impar[k]);
      }
      d = 0;
    }
  }

  for (j = 0; j < d; j++) {
    printf("impar[%d] = %d\n", j, impar[j]);
  }
  for (j = 0; j < c; j++) {
    printf("par[%d] = %d\n", j, par[j]);
  }


  return 0;
}
