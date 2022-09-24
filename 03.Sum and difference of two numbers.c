#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int a,b;
    float c,d;
    scanf("%d %d\n%f %f",&a,&b,&c,&d);
    int sum1=0,dif1=0;
    float sum2=0,dif2=0;
    sum1=a+b;
    dif1=a-b;
    sum2=c+d;
    dif2=c-d;
    printf("%d %d\n%0.1f %0.1f",sum1,dif1,sum2,dif2);
    
    return 0;
}