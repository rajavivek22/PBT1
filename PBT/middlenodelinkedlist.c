#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
//}head=NULL,s=NULL;


int main()
{
    struct Node* head = NULL;
    struct Node* arr;
    struct Node* ptr = NULL;
    int dat,no;
    scanf("%d",&no);
    head = (struct Node*)malloc(sizeof(struct Node));
    arr = (struct Node*)malloc(sizeof(struct Node)*no);
    ptr = (struct Node*)malloc(sizeof(struct Node));
    head->next=arr;
    for(int i=0;i<no;i++)
    {
        (arr+i)->next=(arr+i+1);
        scanf("%d",&dat);
        (arr+i)->data=dat;
    }
    (arr+no-1)->next=NULL;
    for(int i=0;i<no;i++)
    {
        if(i!=no-1)
        {
        printf("%d->",(arr+i)->data);
        continue;
        }
        printf("%d",(arr+i)->data);
    }
    //int n=0;
    ptr=head;

    ptr=head;
    int i=0;
    while(i<no/2)
    {
        ptr=ptr->next;
        i++;
    }
    if(no%2==1)
    printf("\n%d",ptr->data);
    else
    {
        printf("\n%d->%d",ptr->data,ptr->next->data);
    }
    return 0;
}
