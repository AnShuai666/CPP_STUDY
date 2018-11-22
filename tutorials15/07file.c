/*
	
*/

#include <stdio.h>
#include <string.h>
typedef struct
{
	int id;
	float salary;
	char name[10];
} person;

int main()
{
	int choice = 0;
	person prsn = {0};
	FILE *p_file = fopen("a.bin","ab");
	if(!p_file)
		return 1;
	while(1)
	{
		printf("请输入id:");
		scanf("%d",&prsn.id);
		printf("请输入工资：");
		scanf("%g",&prsn.salary);
		scanf("%*[^\n]");
		scanf("%*c");
		
		printf("请输入姓名：");
		fgets(prsn.name, 10, stdin);
		
		if(strlen(prsn.name) == 9 && prsn.name[8] != '\n')
		{
			scanf("%*[^\n]");
			scanf("%*c");
		}
		fwrite(&prsn,sizeof(person),1,p_file);
		printf("请决定是否继续进行输入，1代表继续，0代表退出");
		scanf("%d",&choice);
		if(!choice)
			break;
	}

	fclose(p_file);
	p_file = NULL;
	return 0;
}
