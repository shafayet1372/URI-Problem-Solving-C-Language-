#include <stdio.h>

int main()
{
    int n,i,a;
    
    scanf("%d",&n);
    int N[n];
    int x[n];
    int p;
    for(i=0;i<n;i++){
       
        scanf("%d", &N[i]);
        if(x[0]){
          if(N[i]<x[0]){
              x[0]=N[i];
              p=i;
          }
        }else{
            x[0]=N[i];
        }
        
    }
    printf("Menor valor: %d\n",x[0]);
    printf("Posicao: %d\n",p);
    
 return 0;
}