#include <stdio.h>

int main()
{
   int n,x,y;
   scanf("%d",&n);
   scanf("%d %d",&x,&y);
   if((x+y)>n){
       printf("Deixa para amanha!\n");
   }else{
       printf("Farei hoje!\n");
   }
    return 0;
}