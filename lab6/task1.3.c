#include <stdio.h>

extern char **environ;
int i = 0;
int main (int argc, char *argv[])
{
	char **p = environ;
	while (*p != NULL && i < 10)
	{
		i++;
		printf ("%s\n", *p);
		p++;
	}
	return 0;
}
