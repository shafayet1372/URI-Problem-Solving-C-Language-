#include <stdio.h>
int main()
{
    int n,i,x;
     int big=0;
   while(scanf("%d",&n)!=EOF){
    for(i=1,big=0;i<=n;i++){
        
        scanf("%d",&x);
        
        if(x>big){
            big=x;
        }
    }
    if(big<10){
        printf("1\n");
    }else if(big>10 && big<20){
        printf("2\n");
    }else if(big>=20){
        printf("3\n");
    }
   }
    return 0;
}