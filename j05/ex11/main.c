#include <stdio.h>

int	ft_str_is_alpha(char *str);

int	main(void)
{
	char a[] = "huenJHDUeh6Jhd";
	int i;

	i = ft_str_is_alpha(a);
	printf("%d", i);
	return (0);
}
