#include<stdio.h>

int main()
{
    int i,a[5]={10,20,30,40,5};
    int max1=a[0],max2=a[1],p;
    if(max2>max1)
    {
        p=max1;
        max1=max2;
        max2=p;
    }
    for(i=0;i<5;i++)
    {
        if((a[i]>max1))
        {
            max2=max1;
            max1=a[i];
        }
        else if(a[i]>max2)
        {
            max2=a[i];
        }
    }
    
    printf("%d %d",max1,max2);
}
