
void	ft_swap(int *a, int *b)
{	
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
/*
#include <stdio.h>

int main(void)
{
	int		a;
	int		b;
	int		*pa;
	int		*pb;

	a = 1;
	b = 2;

	pa = &a;
	pb = &b;

	ft_swap(pa, pb);

	printf("a : %d, b : %d\n", a, b);
}
*/