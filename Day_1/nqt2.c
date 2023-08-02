#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char hs,n,m;
    printf("enter h");
    scanf("%s",&hs);

    n=strlen(hs);

    if (n==m)
    {
        printf("0");
    }
    else if(n>m)
    {
        printf("pos");
    }
    else
    {
        printf("neg");
    }

}
