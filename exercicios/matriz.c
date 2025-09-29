#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{
	char m [65][65];
	int var;
	srand(time(NULL));
	for (int l = 0; l<65; l++)
	{
		for (int c = 0; c<65; c++)
		{
			var = (rand() % 26) + 97;
			m [l][c] = (char)var;
		}
	}
	
	for (int l = 0; l<65; l++)
	{
		printf("|");
		for (int c = 0; c <65; c ++)
		{
			printf(" %c ", m[l][c]);
		}
		printf("|\n");
	}
	
	return (0);
}