#include<stdio.h>
int main()
{
    int a[1000]={0},b[1000]={0};
    int t1=0;
    int t2=0;
    int op;
    int data;
    int cas;
    do
    {
        printf("1.EnQueue/2.Dequeue?");
        scanf("%d",&cas);
        if(cas==1)
        {
            printf("Enter the element: ");
            scanf("%d",&data);
            {
                while(t1>=0)
                {
                    b[t2++]=a[t1--];
                }
                t1++;
                t2--;
                a[t1++]=data;
                while(t2>=0)
                {
                    a[t1++]=b[t2--];
                }
                t1--;
                t2++;
            }
            for(int i=0;i<t1;i++)
            {
                printf("%d ",a[i]);
            }
            printf("\n");
        }
        else
        {
            t1--;
            for(int i=0;i<t1;i++)
            {
                printf("%d ",a[i]);
            }
            printf("\n");
        }
        printf("Continue? 0/1");
        scanf("%d",&op);
    }while(op!=0);
}
