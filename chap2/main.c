#include <stdio.h>
#include "selection_sort.h"

#define SIZE 309203

int a[SIZE];

void print_a(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%d\n", a[i]);
	}
}

void read_from_file(const char *filename, int a[], int num) {
	int i = 0;
	FILE *fs = fopen(filename, "r");
	while ((fscanf(fs, "%d", &a[i]) != EOF) && i < num)
		i++;
}

int main()
{
	read_from_file("rand.txt", a, SIZE);
	int n = sizeof(a) / sizeof(a[0]);
	selection_sort(a, n);
	print_a(a, n);
	printf("\n");
}
