Question: https://www.hackerrank.com/challenges/sum-numbers-c

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int a;
    int b;
    float c;
    float d;
    scanf("%d%d",&a,&b);
    scanf("%f%f",&c,&d);
    printf("%d %d\n",a+b,a-b);
    printf("%0.1f %0.1f\n",c+d,c-d);
    
    return 0;
}
