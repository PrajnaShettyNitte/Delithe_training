#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[50],i,n,max;
    printf("enter n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    max=arr[0];
    for(i=0;i<n;i++)
    {
        if (arr[i]>max)
        {
            max=arr[i];
        }

    }
    printf("%d",max);


}
