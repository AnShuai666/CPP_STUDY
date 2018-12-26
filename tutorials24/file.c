#include <stdio.h>
#include <errno.h>
#include <string.h>
int main(int argc,char *argv[])
{
	FILE *fp;
	//打开文件argv[1]
	fp = fopen(argv[1],"r");
	//错误发生
	if(fp == NULL)
	{
		//输出错误信息到显示器
		//perror("fopen"); 
		printf("错误编号：%d\n",errno);
		printf("错误信息描述：%s\n",strerror(errno));
		return 1;
	}
	printf("open file success...\n");
	//关闭文件
	fclose(fp);
	fp = NULL;
	return 0;
}
