#include<stdio.h>
#include<string.h>

int strncpy_(char a[],char b[],int n)
{
	int i;
	if(n>strlen(b))
	{
		printf("error\n");
		return 0;

	} 
	else
	{
		for(i=0;i<n;i++)
			a[i]=b[i];
		a[i]='\0';
	}
	return 1;
}


int strncmp_(char a[],char b[],int n)
{
	int i;
	if(n>strlen(a)||n>strlen(b))
	{
		printf("error\n");
		return 0;
	}
	else
	{
		for(i=0;i<n;i++)
		{
			if(a[i]>b[i])
				return 1;
			if(a[i]<b[i])
				return -1;
			if(a[i]==b[i])
				continue;
		}
		return 0;

	}
}






int main()
{
	char a[20]={"helloworld"};
	char b[20]="happiness";
	printf("%d\n",strncmp_(a,b,6));
	strncpy_(a,b,6);
	puts(a);
	
}