#include <stdio.h>
#include <dlfcn.h>
typedef int (* math_t)(int,int);
int main()
{
	
	//动态加载动态库文件libtmath.so
	void *p = dlopen("libtmath.so",RTLD_NOW);
	if(p == NULL)
	{
		//dlopen()加载错误
		printf("%s\n",dlerror());
		//printf("load failed!\n");
		return 1;
	}
	printf("load success!\n");
	//获取函数t_sub加载到内存地址
	void *func = dlsym(p,"t_sub");
	if(func == NULL)
	{
		printf("%s\n",dlerror());
		return 2;
	}
	math_t q = (math_t)func;
	printf("6-2 = %d\n",q(6,2));
	//关闭加载
	dlclose(p);
	return 0;
}
