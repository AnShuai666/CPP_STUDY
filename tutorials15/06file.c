/*
	文本文件操作 fscanf读
*/
#include <stdio.h>
int main()
{
	int arr[5] = {0};
	FILE *p_file = fopen("a.txt", "r");
	if(!p_file)
		return 0;
	for(int i = 0; i < 5; i++)
	{
		fscanf(p_file,"%d",arr+i);
	}
	for(int i =0; i<5; i++)
	{
		printf("%d ",*(arr+i));
	}
	printf("\n");

	fclose(p_file);
	p_file = NULL;
	return 0;
}
