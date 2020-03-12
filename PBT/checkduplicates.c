#include<stdio.h>
int main()
{
    int a[1000],b[1000]={0};
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(b[a[i]]==1)
        {
            printf("%d ",a[i]);
        }
        b[a[i]]++;
    }
}
