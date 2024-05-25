#include "search_algos.h"

/**
 * interpolation_search - searches for a value in an array of
 * integers using the Interpolation search algorithm
 *
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: index of the number
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t posit, low, high;
	double i;

	if (array == NULL)
		return (-1);

	low = 0;
	high = size - 1;

	while (size)
	{
		i = (double)(high - low) / (array[high] - array[low]) * (value - array[low]);
		posit = (size_t)(low + i);
		printf("Value checked array[%d]", (int)posit);

		if (posit >= size)
		{
			printf(" is out of range\n");
			break;
		}
		else
		{
			printf(" = [%d]\n", array[posit]);
		}

		if (array[posit] == value)
			return ((int)posit);

		if (array[posit] < value)
			low = posit + 1;
		else
			high = posit - 1;

		if (low == high)
			break;
	}

	return (-1);
}
