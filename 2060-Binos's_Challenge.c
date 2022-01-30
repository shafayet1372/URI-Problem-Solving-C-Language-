/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
     int i,n,l2=0,l3=0,l4=0,l5=0,x;
     scanf("%d",&n);
     
     for(i=0;i<n;i++){
         scanf("%d",&x);
         
         if(x%2==0){
             l2++;
         }
         if(x%3==0){
             l3++;
         }
         if(x%4==0){
             l4++;
         }
         if(x%5==0){
             l5++;
         }
     }
     printf("%d Multiplo(s) de 2\n",l2);
      printf("%d Multiplo(s) de 3\n",l3);
       printf("%d Multiplo(s) de 4\n",l4);
       printf("%d Multiplo(s) de 5\n",l5);
     
    return 0;
}