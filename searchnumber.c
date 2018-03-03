#include<stdio.h>

int main() 
{
    int i,a[10]={1,2,3,2,1,1,1,5,6,1},x=9,b[10],p=0;
    
    for(i=0;i<10;i++)
    {
        if(a[i]==x)
        {
            b[p++]=i;
        }
    }
    if(p==0)
    {
        printf("elememt not found");
    }
    
    for(i=0;i<p;i++)
    {
        printf("%d ",b[i]);
    }
}
