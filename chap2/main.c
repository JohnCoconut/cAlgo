#include <stdio.h>
#include "selection_sort.h"


void print_a(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
}

int main()
{
	int a[] = {3, 1, 4, 1, 5, 9, 2, 6};
	int n = sizeof(a) / sizeof(a[0]);
	selection_sort(a, n);
	print_a(a, n);
	printf("\n");
}
