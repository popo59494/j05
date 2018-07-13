#include <stdio.h>

int	ft_str_is_numeric(char *str);

int	main(void)
{
	char a[] = "";
	int i;

	i = ft_str_is_numeric(a);
	printf("%d", i);
	return (0);
}
