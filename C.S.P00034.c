#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char st[100],str[100],c;
    int i,j;
    printf("Input the string: ");
    gets(st);
    for(i=0;i<strlen(st);i++)
    {
        c=st[i];
        if(islower(c))
        {
            str[strlen(st)-i-1]=toupper(c);
        }
        else if(isupper(c))
        {
            str[strlen(st)-i-1]=tolower(c);
        }
        else str[strlen(st)-i-1]=c;
    }
    puts(str);
    fflush(stdin);
    getchar();
}