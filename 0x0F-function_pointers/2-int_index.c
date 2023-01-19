/**
 * int_index - the function
 * @array: the array
 * @size: size of the array
 * @cmp: the function to execute
 * Description: the function
 * Return: int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	i = 0;
	while (i < size)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
		i++;
	}
	return (-1);
}
