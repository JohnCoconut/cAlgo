#ifndef SELECTION_SORT_H
void selection_sort(int a[], int n) {
	for (int j = 0; j < n - 1; j++)
	{
		int key = a[j];
		int i = j + 1;
		int index;
		while (i <= n - 1)
		{
			if (a[i] < key)
			{
				key = a[i];
				index = i;
			}
			i++;
		}
		int temp = a[index];
		a[index] = a[j];
		a[j] = temp;
	}
}
#endif
