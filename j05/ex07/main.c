#include <stdio.h>

char ft_strncmp(char *s1, char *s2, unsigned int n);

int		main(void)
{
	char a[] = "aadfrgrvrtatotaadfgvr";
	char b[] = "tot";
	int c;

	printf("%s\n", a);
	printf("%s\n", b);
	c = ft_strncmp(a, b, 4);
	printf("%d\n", c);
	return (0);
}
