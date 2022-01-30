/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <math.h>
int main()
{
   int n,i,d;
   scanf("%d",&n);
   char a[1000];
   for(i=0;i<n;i++){
       scanf("%s",a);
       scanf("%d",&d);
       if(a[0]=='T' && a[1]=='h' && a[2]=='o' && a[3]=='r'){
           printf("Y\n");
       }else{
           printf("N\n");
       }
   }
    return 0;
}