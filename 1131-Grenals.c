/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include < stdio.h >

  int main()
{
    int inter, gremio;
    int d, total_final, inter_win, gremio_win, draw;
    int number;
    total_final = 0;
    inter_win = 0;
    gremio_win = 0;
    draw = 0;
  while (1) {



    scanf("%d %d", & inter, & gremio);


    total_final++;
    if (inter > gremio) {
      inter_win++;
    } else if (gremio > inter) {
      gremio_win++;
    } else if (inter == gremio) {
      draw++;
    }
    printf("Novo grenal (1-sim 2-nao)\n");

    scanf("%d",& number);
    if (number == 1) {
      continue;
    }
    if (number == 2) {
      break;
    }
  }

  printf("%d grenais\n", total_final);
  printf("Inter:%d\n", inter_win);
  printf("Gremio:%d\n", gremio_win);
  printf("Empates:%d\n", draw);
  if (inter_win > gremio_win) {
    printf("Inter venceu mais\n");
  } else if (gremio_win > inter_win) {
    printf("Gremio venceu mais\n");
  }
  if ((gremio_win == inter_win) && (gremio_win != 0 && inter_win != 0)) {
    printf("Não houve vencedor\n");
  }






  return 0;
}
