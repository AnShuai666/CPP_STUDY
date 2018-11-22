/*
	文本文件操作演示
*/

#include <stdio.h>
#include <string.h>
int main()
{
	int arr[] = {1, 2, 3, 4, 5};
	char buf[10] = {0};
	FILE *p_file = fopen("a.txt","wb");
	if(!p_file)
		return 1;
	for (int i = 0 ; i < 5; i++)
	{
		sprintf(buf, "%d", *(arr+i));
		fwrite(buf,sizeof(char),strlen(buf),p_file);
	}
	fclose(p_file);
	p_file = NULL;
	return 0;
}
