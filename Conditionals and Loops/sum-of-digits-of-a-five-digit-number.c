#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n;
    int d1,d2,d3,d4,d5;
    scanf("%d", &n);
    d1=n;
    d2 = d1%10000;
    d1 = d1/10000;
    
    d3 = d2%1000;
    d2 = d2/1000;
    
    d4 = d3%100;
    d3 = d3/100;
    
    d5 = d4%10;
    d4 = d4/10;
    
    printf("%d",d1+d2+d3+d4+d5);
    return 0;
}