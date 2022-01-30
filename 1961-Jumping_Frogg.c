#include <stdio.h>

int main()
{
      int i,n,x,j,result,count=0;
    scanf("%d %d",&n,&x);
    
    int ar[x];
    for(i=0;i<x;i++){
        scanf("%d",&ar[i]);
    }
    
    for(i=0;i<x-1;i++){
        result=ar[i+1]-ar[i];
        if(result<0){
            result=result*(-1);
        }
        if(result>n){
            
            printf("GAME OVER\n");
            break;
        }else{
            count++;
        }
        
    }
    if(count==(x-1)){
        printf("YOU WIN\n");
    }

    return 0;
}