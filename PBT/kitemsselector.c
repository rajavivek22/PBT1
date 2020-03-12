#include <stdio.h>

int main(int argc,char *argv[])
{
    int i;
    int k;
    int size=0;
    //printf("%d",argc);
    for(i=0;argv[i+1]!=NULL;i++)
    {
        size++;
    }
    scanf("%d",&k);
    int a[k];
    for (i = 0; i < k; i++)
        a[i] = atoi(argv[i+1]);

    srand(time(NULL));
    for (int i=0; i < size; i++)
    {
        int j = rand() % (i+1);

        if (j < k)
          a[j] = atoi(argv[i+1]);
    }
    for(i=0;i<k;i++)
    {
        printf("%d ",a[i]);
    }

    return 0;
}
