#include<stdio.h>

int main()
{
    int i,a[5]={10,20,30,40,5};
    int max=a[0],max1=a[0],p;
    
    for(i=0;i<5;i++)
    {
        if((a[i]>max))
        {
            max1=max;
            max=a[i];
        }
    }
    
    printf("%d %d",max,max1);
}
