#include <stdio.h>

char *ft_strcpy(char *dest, char *src);

int		main(void)
{
	char a[] = "tatadfrgrvrdfgvr";
	char b[] = "tototrtrt";

	printf("%s\n", a);
	printf("%s\n", b);
	ft_strcpy(a, b);
	printf("%s\n", a);
	printf("%s\n", b);
	return (0);
}
