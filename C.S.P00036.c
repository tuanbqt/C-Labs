#include <stdio.h>
#include <string.h>
//char a[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
int main()
{
    char st[100],c,d[26];
    int i;
    for (i=0;i<=25;i++)
    {
        d[i]=0;
    }
    printf("Input a string: ");
    gets(st);
    strlwr(st);
    for (i = 0; i < strlen(st); i++)
    {
        c=st[i];
        if((c>='a')&&(c<='z'))
        {
            d[c-97]++;
        }
    }
    for (i=0;i<=25;i++)
    {
        if (d[i]>0)
        {
            printf("\n%c : %d",97+i,d[i]);
        }
    }
    fflush(stdin);
    getchar();
}
