#include <stdio.h>

int main()
{
 double x,y,a,b;
 double total_weight,total;
 total_weight=3.5+7.5;
 scanf("%lf%lf",&x,&y);
 total=(x*3.5)+(y*7.5);
 total=total/total_weight;
 
 printf("MEDIA = %.5lf\n",total);

    return 0;
}