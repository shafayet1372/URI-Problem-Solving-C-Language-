#include <stdio.h>

int main()
{
  
 int n,i,x,y,j,c,result=0;
 
 while(1){
     
     scanf("%d",&x);
        
        if(x==0)
        break;
         if(x%2==0){
             c=x;
              for(j=0;j<=4;j++){
         
         result=result+c;
          
          c=c+2;
            
         }
           printf("%d\n",result);
         }
             else{
             x++;
                c=x;
         for(j=0;j<=4;j++){
         
         result=result+c;
          
          c=c+2;
           
         }
           printf("%d\n",result);
         
         }
         
        
          result=0;
     
    
 }

    return 0;
}
