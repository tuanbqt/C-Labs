#include <stdio.h>
#include <string.h>
int main()
{
	char str[100];
	int i, key;
	do{
		printf("Please enter a string: ");
		gets(str);
		printf("The old string: %s",&str);
		for(i=strlen(str);i>=0;i--)
		{
			if (str[i]==' ')
			{
				str[i]='\0';
				printf("\nThe reversed string: %s ",&str[i]+1);
			}
		}
		printf("%s\n",str);
		printf("Press enter to continue another reverse, ESC to exit\n");
		key=getch();
}while(key!=27);
}
