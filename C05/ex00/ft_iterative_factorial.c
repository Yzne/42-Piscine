
#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb < 0)
		return (0);
	while (nb > 1)
	{
		result = result * nb;
		nb--;
	}
	return (result);
}
/* 
int main(void)
{
	int num;
	int result;

	num = 0;
	result = ft_iterative_factorial(num);
	printf("%d! = %d\n", num, result);
}
 */