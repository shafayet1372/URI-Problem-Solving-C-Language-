#include <stdio.h>

int main()
{
     int n,i;
     scanf("%d",&n);
      double sum=0.0,x,y;
      
      for(i=0;i<n;i++){
          scanf("%lf %lf",&x,&y);
          if(x==1001){
              sum=sum+(1.50*y);
          }
           if(x==1002){
              sum=sum+(2.50*y);
          }
           if(x==1003){
              sum=sum+(3.50*y);
          }
           if(x==1004){
              sum=sum+(4.50*y);
          }
           if(x==1005){
              sum=sum+(5.50*y);
          }
      }
     printf("%.2lf\n",sum);
      

    return 0;
}