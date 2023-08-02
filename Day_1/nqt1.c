#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tw,fw,nv,nw;
    printf("enter no. of vehicles");
    scanf("%d",&nv);
    printf("enter value  of wheels");
    scanf("%d",&nw);
     fw=(nw-2*nv)/2;
     tw=nv-fw;
     printf("TW=%d FW=%d",tw,fw);
     return 0;



}
