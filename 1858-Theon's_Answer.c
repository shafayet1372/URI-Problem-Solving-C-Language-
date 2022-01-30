#include <stdio.h>
int main()
{
  long  int n;
   
   scanf("%ld",&n);
   long int ar[n];
   long int i,low=500000000,d,index;
   for(i=0;i<n;i++){
       
       scanf("%ld",&d);
       if(d<low  ){
           
           low=d;
           index=i;
       }
       
   }
   printf("%ld\n",index+1);
    return 0;
}
