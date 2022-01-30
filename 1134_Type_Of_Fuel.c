#include < stdio.h >

  int main()
{
  int alco = 0, disel = 0, gaso = 0, x, d = 0;
  while (1) {

    scanf("%d",& x);

    if (x <= 0 && x >= 5) {
      continue;
    }
    if (x == 1) {
      alco++;
    }
    if (x == 2) {
      gaso++;
    }
    if (x == 3) {
      disel++;
    }
    if (x == 4)
      break;



  }
  printf("MUITO OBRIGADO\n");
  printf("Alcool: %d\n", alco);
  printf("Gasolina: %d\n", gaso);
  printf("Diesel: %d\n", disel);


  return 0;
}
