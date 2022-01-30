#include <stdio.h>

int main()
{
int n,i,count=0;
scanf("%d",&n);
if(n%2==0){
    i=n+1;
   while(1){
       printf("%d\n",i);
       i=i+2;
       count++;
       if(count==6){
           break;
       }
   }
}
if(n%2==1){
    i=n;
   while(1){
       printf("%d\n",i);
       i=i+2;
       count++;
       if(count==6){
           break;
       }
   }
}
    return 0;
}