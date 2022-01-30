#include<stdio.h>
int main()
{
    
  int x,y,z,m=0,l=0,n=0;
  scanf("%d %d %d",&x,&y,&z);
  scanf("%d %d %d",&m,&l,&n);
  if(m>x){
      m=m-x;
  }else{
      m=0;
  }
  if(l>y){
      l=l-y;
  }else{
      l=0;
  }
  if(n>z){
      n=n-z;
  }else{
      n=0;
  }
  printf("%d\n",m+l+n);
    return 0;
}