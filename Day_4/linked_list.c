#include <stdio.h>
#include <stdlib.h>
struct node
{
    int info;
    struct node*link;
};
typedef struct node*NODE;
NODE getnode()
{
    NODE x;
    x=(NODE)malloc(sizeof(struct node));
    if(x==NULL)
    {
        printf("out\n");
        exit(0);
    }
    return x;
}
NODE insertfront(int item,NODE first)
{
    NODE temp;
    temp=getnode();
    temp->info=item;
    temp->link=first;
    return temp;
}
void display(NODE first)
{
    NODE temp;
    if(first==NULL)
    {
        printf("em\n");
        return;
    }
    temp=first;
    while (temp!=NULL)
    {
        printf("%d\t",temp->info);
        temp=temp->link;
    }
    printf("\n");

}
int main()
{
    NODE first=NULL;
    int ch,item;
    while(1)
    {
        printf("1.insert 2.dis\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:printf("enter\n");
            scanf("%d",&item);
            first=insertfront(item,first);
            break;
            case 2:display(first);
            break;

        }
    }
    return 0;
}
