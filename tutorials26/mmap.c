#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/mman.h>

int main(int argc, char *argv[])
{
	int fd;
	//以读写方式打开文件
	fd = open(argv[1],O_RDWR);
	if(fd == -1)
	{
		perror("open");
		return 1;
	}
	//建立映射
	void *p = mmap(NULL,6,PROT_READ|PROT_WRITE,MAP_SHARED,fd,0);
	if(p == MAP_FAILED)
	{
		perror("mmap");
		return 2;
	}
	printf("success...\n");
	//关闭文件
	close(fd);
	int *q = (int *)p;
	q[0] = 0x30313233;
	munmap(p,6);
	return 0;
}
