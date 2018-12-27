#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int main(int argc, char *argv[])
{
	int fd;
	//以只读方式打开文件
	fd = open(argv[1],O_RDONLY);
	if(fd == -1)
	{
		perror("open");
		return 1;
	}
	printf("open file success...\n");
	//关闭文件
	close(fd);
	return 0;
}
