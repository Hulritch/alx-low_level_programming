#include "main.h"

void *malloc_checked(unsigned int b)
{
void *brick;
brick = malloc(b);
if (brick == NULL)
	exit(98);
return (brick)
}
