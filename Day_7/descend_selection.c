
#include <stdio.h>
#include <stdlib.h>
#include<time.h>
int main()
{

    int i,max,temp,a[100],j,n;
    int m;
    printf("number\n");
    scanf("%d",&n);
    printf("enter elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    for(i=0;i<=(n-2);i++)
    {
        max=i;
        for(j=i+1;j<=n-1;j++)
        {
            if(a[j]>a[max])
                max=j;
        }
        temp=a[i];
        a[i]=a[max];
        a[max]=temp;
    }

    printf("\nsorted list\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }







return 0;
}
