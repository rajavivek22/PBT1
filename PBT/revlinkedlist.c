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
    struct Node* rear=NULL;
    struct Node* front=NULL;
    int dat,no;
    scanf("%d",&no);
    head = (struct Node*)malloc(sizeof(struct Node));
    arr = (struct Node*)malloc(sizeof(struct Node)*no);
    ptr = (struct Node*)malloc(sizeof(struct Node));
    front = (struct Node*)malloc(sizeof(struct Node));
    rear = (struct Node*)malloc(sizeof(struct Node));
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
    while(ptr!=NULL)
    {
        rear=ptr->next;
        ptr->next=front;
        front=ptr;
        ptr=rear;
    }
    head=front;
    ptr=head;
    printf("\n");
    while(ptr->data!=0)
    {
        if(ptr->next->data==0)
        {
            printf("%d",ptr->data);
        }
        else
        {
        printf("%d->",ptr->data);
        }
        ptr=ptr->next;
    }
    //head=ptr->next;

    return 0;
}
