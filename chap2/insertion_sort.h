#ifndef INSERTION_SORT_H
void insertion_sort(int a[], int n) {
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
#endif
