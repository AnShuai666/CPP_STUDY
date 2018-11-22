/*
	文本文件演示 fprintf使用
*/
#include <stdio.h>

int main()
{
	int arr[5] = {1, 2, 3, 4, 5};
	FILE *p_file = fopen("a.txt","w");
	if(!p_file)
		return 1;
	for(int i =0; i < 5; i++)
	{
		fprintf(p_file, "%d", *(arr+i));
	}
	fclose(p_file);
	p_file = NULL;
	return 0;
}
