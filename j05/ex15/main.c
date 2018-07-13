#include <stdio.h>

int	ft_str_is_printable(char *str);

int	main(void)
{
	char a[] = "";
	int i;

	i = ft_str_is_printable(a);
	printf("%d", i);
	return (0);
}
