/*
	文件操作演示
	文件操作基本步骤
	1.打开文件(fopen())
		两个参数：
		（1）路径
		（2）打开方式
			"r"		
			"r+"
			"w"
			"w+"
			"a"
			"a+"
			"b"
	2.操作文件(fread()/fwrite())
		四个参数
		（1）地址
		（2）单存储区大小
		（3）存储区个数
		（4）文件指针
		返回值：
		实际操作存储区个数
	3.关闭文件(fclose())
*/

#include <stdio.h>

int main()
{
	FILE *p_file = 	fopen("a.txt", "w");
	if(!p_file)
	{
		printf("打开文件失败！");
		return 1;
	}
	
	//操作文件
	fclose(p_file);
	p_file = NULL;
	return 0;
}
