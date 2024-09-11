
#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	count;

	count = 97;
	while (count >= 97 && count <= 122)
	{
		write(1, &count, 1);
		count++;
	}
}
/*
int	main(void)
{
	ft_print_alphabet();
	return (0);
}	
*/

//this is a second and shorter version of ft_print_alphabet

/*	
void	ft_print_alphabet()
{
	write(1, "abcdefghijklmnopqrstuvwxyz", 26);
}
*/