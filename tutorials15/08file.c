/*
	文件练习
*/
#include <stdio.h>
typedef struct
{
	int id;
	float salary;
	char name[10];
}person;
int main()
{
	person pson = {0};
	FILE *p_file = fopen("a.bin","rb");
	if(!p_file)
		return 1;
	while(1)
	{
		int size = fread(&pson,sizeof(person),1,p_file);
		if(!size)
			break;
		printf("id是%d\n",pson.id);
		printf("薪资是%g\n",pson.salary);
		printf("姓名是%s\n",pson.name);
	}
	
	fclose(p_file);
	p_file = NULL;
	return 0;
}
