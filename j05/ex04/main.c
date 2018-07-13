#include <stdio.h>

char *ft_strncpy(char *dest, char *src, unsigned int n);

int		main(void)
{
	char a[] = "tatadfrgrvrdfgvr";
	char b[] = "tototrtrt";

	printf("%s\n", a);
	printf("%s\n", b);
	ft_strncpy(a, b, 10);
	printf("%s\n", a);
	printf("%s\n", b);
	return (0);
}
