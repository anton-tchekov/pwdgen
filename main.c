#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int random_in_range(int min, int max);

int main(int argc, char **argv)
{
	int i, n;
	char c;

	if(argc != 2)
	{
		fprintf(stderr, "Usage: ./pwdgen [Number of Characters]\n");
		return 1;
	}

	if((n = atoi(argv[1])) == 0)
	{
		n = 16;
	}

	srand(time(0));
	for(i = 0; i < n; i++)
	{
		c = random_in_range(33, 127);
		fputc(c, stdout);
	}

	fputc('\n', stdout);
	return 0;
}

int random_in_range(int min, int max)
{
	return((rand() % (max - min)) + min);
}
