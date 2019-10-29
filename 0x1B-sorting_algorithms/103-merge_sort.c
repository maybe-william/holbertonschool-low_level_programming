#include "sort.h"

/**
 * myswap - swap the value in two places
 * @a: the first pointer
 * @b: the second pointer
 */
void myswap(int *a, int *b)
{
	a[0] ^= b[0];
	b[0] ^= a[0];
	a[0] ^= b[0];
}

/**
 * printarr - print the array in merge sort fashion
 * @label: the label to print in front
 * @arr: the array to print
 * @size: the size of the array
 */
void printarr(char *label, int *arr, size_t size)
{
	size_t i = 0;

	printf("%s", label);
	for (i = 0; i < size; i++)
	{
		if (i != 0)
			printf(",");
		printf(" %d", arr[i]);
	}
	printf("\n");
}

/**
 * merge - merge two arrays in place
 * @arr1: array 1
 * @size1: size of array 1
 * @arr2: array 2
 * @size2: size of array 2
 */
void merge(int *arr1, size_t size1, int *arr2, size_t size2)
{
	int *p1 = NULL, *p2 = NULL, *myarr = NULL;
	size_t i = 0, x = 0;

	printf("Merging...\n");
	printarr("[left]:", arr1, size1);
	printarr("[right]:", arr2, size2);
	if (arr1[size1 - 1] <= arr2[0])
	{
		printarr("[Done]:", arr1, size1 + size2);
		return;
	}
	myarr = malloc((size1 + size2) * sizeof(int));
	p1 = arr1;
	p2 = arr2;
	i = 0;
	while (i < size1 + size2)
	{
		x = 1;
		if (p1 == NULL || p1 >= arr1 + size1 || (*p2 < *p1))
			x = 2;
		if (p2 == NULL || p2 >= arr2 + size2)
			x = 1;
		if (x == 2)
		{
			myarr[i] = *p2;
			p2++;
		}
		if (x == 1)
		{
			myarr[i] = *p1;
			p1++;
		}
		i++;
	}
	for (i = 0; i < (size1 + size2); i++)
		arr1[i] = myarr[i];
	printarr("[Done]:", arr1, size1 + size2);
	free(myarr);
}

/**
 * merge_sort - sort an array by recursively merging
 * @array: the array to merge
 * @size: the size of the array to merge
 */
void merge_sort(int *array, size_t size)
{
	size_t mid = 0;

	if (size == 1)
		return;
	if (size == 2)
	{
		merge(array, 1, array + 1, 1);
		return;
	}

	mid = size / 2;
	merge_sort(array, mid);
	merge_sort(array + mid, size - mid);
	merge(array, mid, array + mid, size - mid);
}
