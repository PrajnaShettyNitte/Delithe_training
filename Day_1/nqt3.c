#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,count,i,n;
    printf("%d",num);
    scanf("%d",&num);

    for (i=0;i<strlen(num);i++)
    {
        count=count+1;
    }
    printf("%d",count);
    if(count==n)
    {
        printf("palindrome");
    }
    else
        printf("not pal");




}
