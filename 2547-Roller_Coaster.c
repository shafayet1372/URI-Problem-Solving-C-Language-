#include<stdio.h>
int main()
{
    int i,n,x,y,d,count;
    while(scanf("%d",&n)!=EOF){
        count=0;
        scanf("%d %d",&x, &y);
        for(i =0;i<n;i++){
            scanf("%d",&d);
            if(d>=x && d <=y ){
                
                count++;
        }
        }
        printf("%d\n",count);
    }

    return 0;
}