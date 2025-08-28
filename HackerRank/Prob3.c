#include<stdio.h>
int main()
{
    int a,b;
    float x,y;
    scanf("%d %d",&a,&b);
    scanf("%f %f",&x,&y);
    int i = a+b;
    int j = a-b;
    float k = x+y;
    float l = x-y;
    printf("%d %d\n", i, j);
    printf("%.1f %.1f\n", k, l);
    
    return 0;
}