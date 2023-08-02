#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,inp,ref=0,n,count=1;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&inp);
        if(inp>ref)
        {

            count++;
            ref=inp;
        }
    }
    printf("%d",count);

}
