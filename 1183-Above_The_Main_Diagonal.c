#include <stdio.h>

int main()
{
   int n;
   char T[2];
   int x,y;
   float p;
   float sum=0;
   int k=0;
   int element=0;
   scanf("%d",&n);
   scanf("%s",T);
   for(x=0;x<12;x++){
       
       for(y=0;y<12;y++){
           scanf("%f",&p);
           if(y>k){
               sum=sum+p;
               element++;
           }
       }
       k++;
       
   }
   
   if(T[0]=='S')
        printf("%.1lf\n",sum);
    else if(T[0]=='M')
    {
        sum=sum/(float)element;
        printf("%.1lf\n",sum);
    }

    return 0;
}