#include <stdio.h>

void main()
{
    
    int n,i=1,count=0;
    scanf("%d",&n);
    while(n>=i)
    {
        if(n%i==0)
        {
            count++;
            
        }
        i++;
    }
    if(count==2)
    {
        printf("the number is prime");
    }
    else
    {
        printf("the number is not prime");
    }
}