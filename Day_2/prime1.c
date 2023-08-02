#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,m=0,flag=0;
    printf("enter number");
    scanf("%d",&n);
    m=n/2;
    for(i=2;i<=m;i++)
    {
      if(n%i==0)
        {
            printf("not prime");
            flag=1;
            break;
        }
   }
    if(flag==0)
        printf("number is prime");
    return 0;
}
