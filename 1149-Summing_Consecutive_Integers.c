#include <stdio.h>

int main()
{


int x,n,i,y,result=0;

scanf("%d %d",&x,&y);

while(y<=0){
    scanf("%d",&y);
}

for(i=0;i<y;i++){
    result=result+x;
    x++;
}
printf("%d\n",result);
    return 0;
}
