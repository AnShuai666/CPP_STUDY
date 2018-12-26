#include <stdio.h>
#include <assert.h>
char *mystrcpy(char *dest, const char *src)
{
	assert(dest != NULL && src != NULL);

	char *ret = dest;
	while( (*dest++ = *src++) != '\0' );
	return ret;
}

int main()
{
	char *buf = "asddf";
	char dest[10];
	mystrcpy(dest,buf);
	printf("buf is %s \n",buf);
	printf("dest is %s \n",dest);
	return 0;
}
