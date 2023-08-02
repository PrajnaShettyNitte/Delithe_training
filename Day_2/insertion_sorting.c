#include <stdio.h>
void main()
{
    int v,j;
   int a[20],i,n;
    printf("number of elements\n");
    scanf("%d",&n);
    printf("enter the elements\n");
    for(i=0;i<n;i++)
    {

        scanf("%d",&a[i]);

    }
    for(i=1;i<=n-1;i++)
    {
       v=a[i];
       j=i-1;
    while(j>=0 && a[j]>v)
     {
        a[j+1]=a[j];
        j=j-1;
     }
    a[j+1]=v;
    }
    printf("Sorted List:\n");
    for(i=0;i<=n-1;i++)
      {
          printf("%d\t",a[i]);
      }
}
