#include <stdio.h>

extern char **environ;
int i = 0;
int main(int argc, char *argv[])
{
	char **p;
	for (p = environ; *p != NULL; p++)
		i++;
	printf("Number of environment variables: %d\n", i);
	return 0;
}
// env | wc -l
