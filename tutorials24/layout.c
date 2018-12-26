#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
int var_g = 50;
void count()
{
	static int c = 1;
	c ++;
	printf("c = %d\n",c);
	printf("c adress = %p\n",&c);
	return;
}

int main()
{
	//buf 的空间分配在栈帧
	char buf[] =  "terena";
	//str变量的内容是代码段
	char *str = "tenara";
	int i;
	//char *p;
	//*p = 'm';

	//获取进程自己的pid
	printf("pid = %d\n",getpid());
	printf("buf %p\n",buf);
	printf("str adress %p\n",&str);
	printf("str content %p\n",str);
	printf("str content %s\n",str);
	
	for(i = 0; i < 5; i++)
	{
		count();
	}
	printf("var_g adress %p\n",&var_g);
	getchar();
	return 0;
}
