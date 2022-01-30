#include <stdio.h>

int main()
{
     int n,count=0,i;
     scanf("%d",&n);
     int ar[4];
     for(i=0;i<5;i++){
         scanf("%d",&ar[i]);
         if(n==ar[i]){
             count++;
         }
     }
     
     printf("%d\n",count);
      

    return 0;
}