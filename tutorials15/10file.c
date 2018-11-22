/*
	位置指针练习
*/

#include <stdio.h>

typedef struct
{
	int id;
	float salary;
	char name[10];
} person;
int main()
{
	int id = 0, size = 0;
	FILE *p_file;
	p_file = fopen("a.bin","rb");
	if(!p_file)
		return 0 ;
	while(1)
	{
		size = fread(&id,sizeof(int),1,p_file);

		if(!size)
			break;
		printf("%d\n",id);
		fseek(p_file,sizeof(person)-sizeof(int),SEEK_CUR);
		
	}
	fclose(p_file);
	p_file = NULL;
	return 0;
}
