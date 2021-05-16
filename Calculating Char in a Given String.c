#include<stdio.h>
#include<ctype.h>

int scan_line(char line[],int *pv,int *pc,int *pd,int *pw,int *po, int *);

main()
{
	char line[50];
	int vowels = 0;
	int consonants = 0;
	int digits = 0;
	int whitespace = 0;
	int other =0;
	int count=0;
	printf("Enter a LIne of Text\n");
	gets(line);
	puts(line);
	
	scan_line(line, &vowels, &consonants, &digits, &whitespace, &other, &count);
	
	printf("\n Vowels - %d\n Consonants - %d\n Digits - %d\n Whitespace - %d\n Other - %d\n",vowels,consonants,digits,whitespace,other);
	
	printf("The count is %d",count);

}


int scan_line(char line[],int *pv,int *pc,int *pd,int *pw,int *po, int *count)
{
	
	int c;
	while((c=toupper(line[*count]))!='\0')
	{
			if(c=='A'||c=='E'||c=='O'||c=='U'||c=='I')
			++*pv;
			else if(c>='A'&&c<='Z')
			++*pc;
			
			else if(c>='0'&&c<='9')
			++*pd;
			
			else if(isspace(c)||c=='\t')
			++*pw;
			else 
			++*po;

	++*count;
	}
	
	return *count;
}

