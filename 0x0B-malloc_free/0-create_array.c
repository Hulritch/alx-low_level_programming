#include <stdio.h>
#include <stdlib.h>
#include "main.h"

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	if(size == 0)
		return(NULL);

	char *s = (char*)malloc(sizeof(char)*size);

	for (i = 0; i < size; i++)
		s[i] = c;

	return (s);

}
