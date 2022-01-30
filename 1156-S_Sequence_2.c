#include <stdio.h>

int main()
{
    
    float i;
    float result=0,k=1;
    for(i=1;i<=39;i=i+2){
        result=result+i/k;
        k=k*2;
        
    }
     printf("%.2f\n",result);
    return 0;
}