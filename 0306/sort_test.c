
#include "sort.h"
int main()
{
	int a[100];
	int i;
	srand(time(NULL));
	for(i=0;i<100;i++)
		a[i]=rand()%1000;

	bubble_sort(a,100);
	print(a,100);

	for(i=0;i<100;i++)
		a[i]=rand()%1000;

	select_sort(a,100);
	print(a,100);


	for(i=0;i<100;i++)
		a[i]=rand()%1000;

	insert_sort(a,100);
	print(a,100);


	return 0;


}











