#include <string.h>

void bzero(void *s, size_t n)
{
		unsigned char *c;

		c = (unsigned char *)s;
		while(n > 0)
		{
			*c++ = '0';
			n--;
		}
}

