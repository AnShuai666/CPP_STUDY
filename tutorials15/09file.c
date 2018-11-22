/*
	位置指针演示ftell rewind fseek
*/

#include <stdio.h>
int main()
{	char ch = 0;
	FILE *p_file = fopen("abc.txt","rb");
	if(!p_file)
		return 1;
	rewind(p_file);
	printf("位置指针是：%ld\n",ftell(p_file));
	fread(&ch, sizeof(char), 1, p_file);
	printf("%c\n",ch);
	
	//rewind(p_file);
	fseek(p_file,3,SEEK_CUR);
	printf("位置指针是：%ld\n",ftell(p_file));
	fread(&ch, sizeof(char), 1, p_file);
	printf("%c\n",ch);
	
	//fseek(p_file,3, SEEK_SET);
	fseek(p_file,-3,SEEK_END);
	printf("位置指针是：%ld\n",ftell(p_file));
	fread(&ch, sizeof(char), 1, p_file);
	printf("%c\n",ch);
	fclose(p_file);
	p_file = NULL;

	return 0;
}


