#include <string.h>

void *memset(void *s, int c, size_t n)
{
	unsigned char *x;

	x = (unsigned char *)s;
	while (n > 0)
	{
		*x = (unsigned char)c;
		n--;
	}
	return (s);
}
