/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include < stdio.h >

  int main()
{
  
 int n, i, x, y, j, c, result = 0;
  scanf("%d",& n);
  for (i = 1; i <= n; i++) {

    scanf("%d %d",& x,& y);


    if (x % 2 == 1) {
      c = x;
      for (j = 1; j <= y; j++) {

        result = result + c;

        c = c + 2;

      }
    }
    else {
      x++;
      c = x;
      for (j = 1; j <= y; j++) {

        result = result + c;

        c = c + 2;

      }

    }

    printf("%d\n", result);
    result = 0;


  }

  return 0;
}
