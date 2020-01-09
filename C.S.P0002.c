#include <stdio.h>
#include <string.h>
int main()
{
	char s[100];
	int i,a;
	int key;
	char *digit[]={ "", "one", "two", "three", "four","five", "six", "seven", "eight", "nine"};
	char *ten[] = { "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
	char *tens_mul[] = {"", "", "twenty", "thirty", "forty", "fifty","sixty", "seventy", "eighty", "ninety"};
	do
	{
	printf("\nEnter a number from 0 to 9999: ");
	scanf("%s",&s);
	for(i=0;i<strlen(s);i++)
	{
		a=strlen(s)-i;
		switch(a)
		{
			case 4:	if (s[i]!='0') printf("%s thousand, ",digit[s[i]-'0']);
					break;
			case 3: if (s[i]!='0') printf("%s hundred,",digit[s[i]-'0']);
					break;
			case 2: if (s[i]=='1') printf("%s ",ten[s[i+1]-'0']);
					if (s[i]!='1'&&s[i]!='0') printf("%s ",tens_mul[s[i]-'0']);
					break;
			case 1: if (s[i-1]!='1'&&s[i]!='0')
					printf("%s",digit[s[i]-'0']);
					if (s[i]=='0') printf("%s",digit[s[i]-'0']);
					break;
			default: break;
			
		}
	}
	printf("\nEnter to continue");
	printf("\nEsc to exit!");
	key=getch();
}while(key!=27);
}
