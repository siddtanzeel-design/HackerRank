#include <stdio.h>
#include <string.h>

int main() 
{
    char str[1000];
    int count[10]={0};
    int i;
    scanf("%s",str);
    for(i=0;str[i]!='\0';i++) 
    {
        if(str[i]>='0' && str[i]<='9') 
        {
            count[str[i]-'0']++;
        }
    }
    for(i=0;i<10;i++) 
    {
        printf("%d ",count[i]);
    }
    return 0;
}
