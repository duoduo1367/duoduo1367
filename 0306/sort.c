#include "sort.h"
void swap(int * p,int * q)
{
	int temp;
	temp=*p;
	*p=*q;
	*q=temp;

}

void bubble_sort(int a[],int n)
{
	int i,j,flag=0;
	for(i=0;i<n-1;i++)
	{
		if(flag==1)
			break;
		for(j=0;j<n-1-i;j++)
		{
			if(a[j]>a[j+1])
			{
				swap(&a[j],&a[j+1]);
				flag=0;
			}
		}
	}
}

void select_sort(int a[],int n)
{
	int i,j,max;
	for(i=0;i<n;i++)
	{
		max=i;
		for(j=i+1;j<n;j++)
		{
			
			if(a[j]<a[max])
				max=j;
		}
		swap(&a[i],&a[max]);  
	}

}

void insert_sort(int a[],int n)
{
	int i,j,k,temp;
	for(i=1;i<n;i++)
		for(j=0;j<i;j++)
		{
			if(a[i]<a[j])
			{
				temp=a[i];
				for(k=i;k>=j;k--)
					a[k]=a[k-1];
				a[j]=temp;
			}
		}

	}



	void print(int a[],int n)
	{
		int i;
		for(i=0;i<n;i++)
			printf("%d ",a[i]);
		printf("\n");
	}
