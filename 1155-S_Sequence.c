#include <stdio.h>

int main()
{
  double a,i,result=0;
  
 for(i=1;i<=100;i++){
     a=1/i;
     result=result+a;
     
     
 }
  printf("%.2lf\n",result);
 
   
    return 0;
}