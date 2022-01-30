#include <stdio.h>

int main()
{
   int n,i,X[1000],k=0,j,m;
   scanf("%d",&n);
    
   for(i=0;i<1000;i++){
       
   
    if(n==k){
        k=0;
    }
   X[i]=k;
   k++;
     
       
   }
   for(j=0;j<1000;j++){
       printf("N[%d] = %d\n",j,X[j]);
   }

    return 0;
}