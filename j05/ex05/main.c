#include <stdio.h>

char *ft_strstr(char *str, char *to_find);

int		main(void)
{
	char a[] = "aadfrgrvrtatotaadfgvr";
	char b[] = "tot";
	char *c;

	printf("%s\n", a);
	printf("%s\n", b);
	c = ft_strstr(a, b);
	printf("%s\n", c);
	return (0);
}
