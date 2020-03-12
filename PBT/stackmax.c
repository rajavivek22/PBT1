#include<stdio.h>
int main()
{
    int a[10000]={0},b[10000]={0};
    int t=-1;
    //int max=0;
    int cas=0;
    int data;
    do
    {
      printf("Select an option\n\n1.Push\n2.Pop\n3.Display Max\n4.Quit\n");
      scanf("%d",&cas);
      if(cas==1)
      {
          t++;
          printf("\nEnter the element\n");
          scanf("%d",&data);
          a[t]=data;
          if(t==0)
          {
              b[t]=a[t];
              continue;
          }
          if(a[t]>b[t-1])
          {
              b[t]=a[t];
          }
      }
      if(cas==2)
      {
          if(t!=-1)
          {
              t--;
          }
      }
      if(cas==3)
      {
          printf("\nMax Element:%d\n",b[t]);
      }
    }while(cas!=4);
    return 0;
}
