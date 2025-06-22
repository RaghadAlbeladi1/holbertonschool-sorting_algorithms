#include "sort.h"

/**
 * swap_int - swaps two integers in an array and prints it
 * @a:     pointer to first integer
 * @b:     pointer to second integer
 * @array: the whole array (for printing)
 * @size:  size of the array
 */
static void swap_int(int *a, int *b, int *array, size_t size)
{
int tmp = *a;
*a = *b;
*b = tmp;
print_array(array, size);
}

/**
 * lomuto_partition - partitions a subarray around a pivot (last element)
 * @array: the array to partition
 * @low:   starting index of the subarray
 * @high:  ending index of the subarray (pivot)
 * @size:  size of the full array (for printing)
 *
 * Return: the final pivot index
 */
static size_t lomuto_partition(int *array, int low, int high, size_t size)
{
int pivot = array[high];
int i = low - 1;
int j;

for (j = low; j <= high - 1; j++)
{
if (array[j] <= pivot)
{
i++;
if (i != j)
swap_int(&array[i], &array[j], array, size);
}
}
if (i + 1 != high)
swap_int(&array[i + 1], &array[high], array, size);
return (i + 1);
}

/**
 * quick_sort_rec - recursively sorts subarrays
 * @array: the array to sort
 * @low:   lower bound index
 * @high:  upper bound index
 * @size:  size of the full array (for printing)
 */
static void quick_sort_rec(int *array, int low, int high, size_t size)
{
size_t p;

if (low < high)
{
p = lomuto_partition(array, low, high, size);
quick_sort_rec(array, low, (int)p - 1, size);
quick_sort_rec(array, (int)p + 1, high, size);
}
}

/**
 * quick_sort - sorts an array of integers in ascending order
 *              using the Quick sort algorithm (Lomuto scheme)
 * @array: the array to sort
 * @size:  number of elements in @array
 */
void quick_sort(int *array, size_t size)
{
if (array == NULL || size < 2)
return;

quick_sort_rec(array, 0, (int)size - 1, size);
}
