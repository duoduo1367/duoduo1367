#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
	int tmp = joseph(100, 8);
	printf("%d\n", tmp);
	return 0;
}



int joseph(int m, int n)
{
	int p[1000];
	int dead_count = 0;
	int pos = 0;
	int count_num = 0;
	memset(p, 0x00, sizeof(int)*1000);
	while(1)
	{
		if(p[pos] == 0)
		{
			count_num ++;
			if (count_num == n)
			{
				dead_count++;
				p[pos] = 1;
				count_num = 0;
				if (dead_count == m-1)
					break;
			}
			
		}
		pos = (pos+1)%m;

	}

	for (pos = 0; pos < m; pos++)
	{
		if (p[pos] == 0)
		{
			return pos;
		}
	}

	return -1;
}