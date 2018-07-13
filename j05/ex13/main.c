#include <stdio.h>

int	ft_str_is_lowercase(char *str);

int	main(void)
{
	char a[] = "";
	int i;

	i = ft_str_is_lowercase(a);
	printf("%d", i);
	return (0);
}
