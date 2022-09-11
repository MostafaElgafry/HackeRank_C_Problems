#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int V1,V2;
    float V3,V4;
    scanf("%d %d\n",&V1,&V2);
    scanf("%f %f\n",&V3,&V4);
    printf("%d %d\n",V1+V2,V1-V2);
    printf("%.1f %0.1f",V3+V4,V3-V4);
    
    return 0;
}