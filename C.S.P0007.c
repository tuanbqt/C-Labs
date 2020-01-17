#include <stdio.h>
#include <string.h>
#include <conio.h>
int delet(int i, char st[])
{
    int j;
    for (j=i+1;j<strlen(st);j++)
            {
                st[j-1]=st[j];
                if (j==strlen(st)-1)
                 st[j]='\0';
            }
}
int main()
{
    char st[100];
    char *first;
    int i,j,key;
    do{
        printf("\nInput the string: ");
        gets(st); 
        first=strstr(st,"  ");
        for (i=0;i<strlen(st);i++)
        {
            if((st[i]==' ')&&(st[i+1]=' '))
            delet(i,st);
        }
        puts(st);
        printf("\nPress enter to continue, Esc to exit.");
        fflush(stdin);
        key=getch();

    }while (key!=27);

}