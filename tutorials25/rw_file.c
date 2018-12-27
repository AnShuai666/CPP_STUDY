#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>


int main(int argc,char *argv[])
{
	int fd;
	//以读写的方式打开文件
	fd = open(argv[1],O_RDWR|O_CREAT|O_EXCL,0666);
	if(fd == -1)
	{
		perror("open");
		return 1;
	}
	printf("file oopen success...\n");

	//关闭文件
	close(fd);
	return 0;
}
