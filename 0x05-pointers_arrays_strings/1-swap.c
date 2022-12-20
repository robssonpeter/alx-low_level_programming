/**
 * swap_int - swapping values
 * @a: pointer a
 * @b: pointer b
 * Description: swapping values between and b
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int swapper;

	swapper = *a;
	*a = *b;
	*b = swapper;
}
