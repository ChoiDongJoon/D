#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int i;
	for (i = 0; i < 6; i++)
	for (i = 0; i < 5; i++)
		printf("%d ", rand());
	return 0;
}