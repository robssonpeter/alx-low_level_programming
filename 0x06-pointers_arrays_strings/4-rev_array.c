#include <string.h>
#include <stdio.h>
/**
 * reverse_array - compare
 * @a: a
 * @n: n
 * Description: reverse array
 * Return: int
 */
void reverse_array(int *a, int n)
{
	int i;

	for (i = n - 1; i >= 0; i--)
	{	
		if (i != n - 1)
		{
			printf(", ");
		}
		printf("%d", a[i]);	
		/*rev[n - 1 - i] = a[i + n - 1];*/
	}
	printf("\n");	
}
