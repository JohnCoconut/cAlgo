#include <stdio.h>

void sort(int a[], int n) {
	for (int j = 1; j <= n - 1; j++) 
	{
		int key = a[j];
		int i = j - 1;
		while (i >= 0 && a[i] >= key)
		{
			a[i + 1] = a[i];
			--i;
		}
		a[i + 1] = key;
	}
}

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
	sort(a, n);
	print_a(a, n);
	printf("\n");
}
