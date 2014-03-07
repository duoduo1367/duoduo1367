#include <stdio.h>
int main()
{
	int i,dead=0,num=0;
	int a[105]={0};
	int pos;
	while(1)
	{
		if(a[i]==0)
		{
			num++;
			if(num==8)
				{   a[i]=1;
					num=0;
					dead++;
				}

		}

		i=(i+1)%100;
		if(dead==99)
			break;
	}
	for (pos = 0; pos < 100; pos++)
	{
		if (a[pos] == 0)
		{
			i=pos;
		}

	}

	printf("%d",i);
	return 0;

}