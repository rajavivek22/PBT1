#include <stdio.h>
#include<string.h>
int main()
{
    char a[1000],b[1000];
    scanf("%[^\n]%*c",a);
    scanf("%[^\n]%*c",b);
    int c[1000]={0},d[1000]={0};
    int e;
    int i,flag=0;
    if(strlen(a)==strlen(b))
    {
        for(i=0;i<strlen(a);i++)
        {
          e=((int)a[i]);
          c[e]++;
          printf("%d\n",e);
          e=((int)b[i]);
          printf("%d\n",e);
          d[e]++;
        }
        for(i=0;i<123;i++)
        {
            printf("%d %d\n",c[i],d[i]);
            if(c[i]!=d[i])
            {

                flag=1;
            }
        }
        if(flag==0)
        {
            printf("Anagram");
        }
        else
        {
            printf("Not an anagram");
        }
    }
    else
    {
        printf("Not an anagram");
    }
    return 0;
}
