#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n;
    scanf("%d", &n);
    int rem=0,sum=0;
    for(int i=n;i!=0;i=i/10)
    {
         rem=i%10;
         sum=sum+rem;  
    }
    printf("%d",sum);
    return 0;
}