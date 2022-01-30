#include < stdio.h >

  int main()
{
   int x;
   float age = 0;
   int count = 0;
  while (1) {
    scanf("%d",& x);
    if (x <= 0) {
      break;
    } else {
      age = age + x;
      count++;
    }

  }
  printf("%.2f\n", age / (float)count);
  return 0;
}