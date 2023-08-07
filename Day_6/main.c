#include <stdio.h>
#include <stdlib.h>

int maximum(int a[100],int n)
{
    int max=a[0];
    for(int i=1;i<=n-1;i++)
    {
        if(a[i]>max)
            max=a[i];
    }
    printf("the maximum element is %d",max);

}
int main()
{
    int n,a[100],i;
    printf("enter the size of array\n");
    scanf("%d",&n);
    printf("enter the elements into array\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    maximum(a,n);
}
