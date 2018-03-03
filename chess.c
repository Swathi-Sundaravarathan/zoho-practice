#include<stdio.h>

int main() 
{
    int i,n=0;
    
    while(n<8)
    {
        for(i=0;i<4;i++)
        {
            if(n%2==0)
            {
                printf("1 0 ");
            }
            else
            {
                printf("0 1 ");
            }
        }
        printf("\n");
        n++;
    }
}
