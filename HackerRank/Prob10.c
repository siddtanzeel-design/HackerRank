#include<stdio.h>
int main() 
{

    int n;
    scanf("%d", &n);
  	int s=2*n-1;
    for(int i=0;i<s;i++)
    {
        for(int j=0;j<s;j++)
        {
            int m;
            if(i<j)
                m=i;
            else
                m=j;
            if(m>(s-i-1))
                m=s-i-1;
            if(m>(s-j-1))
                m=s-j-1;
            int v=n-m;
            printf("%d ",v);
        }
        printf("\n");
    }
    return 0;
}