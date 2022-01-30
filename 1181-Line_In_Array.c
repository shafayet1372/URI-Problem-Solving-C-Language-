#include <stdio.h>

int main()
{
   int n;
   char T[2];
   int x,y;
   float p;
   float sum=0;
   scanf("%d",&n);
   scanf("%s",T);
   for(x=0;x<12;x++){
       
       for(y=0;y<12;y++){
           scanf("%f",&p);
           if(n==x){
               sum=sum+p;
           }
       }
       
       
   }
   
   if(T[0]=='S')
        printf("%.1lf\n",sum);
    else if(T[0]=='M')
    {
        sum=sum/12.0;
        printf("%.1lf\n",sum);
    }

    return 0;
}