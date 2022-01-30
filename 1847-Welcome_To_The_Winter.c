#include <stdio.h>
int main()
{
    int a,b,c,sum1,sum2;
    
    scanf("%d %d %d",&a,&b,&c);
    
    if(b<a && c>=b){
        printf(":)\n");
        
    }else if(b>a && c<=b){
        printf(":(\n");
    }else if(b>a && c>b){
        sum1=c-b;
        sum2=b-a;
        if(sum1<sum2){
            printf(":(\n");
        }else{
            printf(":)\n");
        }
    }else if(a>b && b>c){
        sum1=b-c;
        sum2=a-b;
        if(sum1<sum2){
            printf(":)\n");
        }else{
            printf(":(\n");
        }
    }else if(a==b && b<c){
        printf(":)\n");
    }else if(a==b && b>c){
        printf(":(\n");
    }else{
        printf(":(\n");
    }
    
    return 0;
}
