#include <stdio.h>
#include <sys/mman.h>
#include <string.h>
int main()
{
	//将物理地址映射到进程的虚拟地址空间
	void *p = mmap(NULL,1024,PROT_READ | PROT_WRITE, MAP_PRIVATE | MAP_ANONYMOUS,-1,0);
	if(p == MAP_FAILED)
	{
		perror("mmap");
		return 1;
	}
	
 	printf("内存映射成功。。。\n");
	strcpy(p,"tarnea");
	printf("p %s\n",(char *)p);
	//解除映射
	munmap(p,1024);
	return 0;
}
