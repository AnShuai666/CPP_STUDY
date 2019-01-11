#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
int main()
{
	int fd;
	//以读写方式打开文件
	fd = open("hello",O_RDWR);
	if(fd == -1)
	{
		perror("open");
		return 1;
	}

	//定义锁变量
	struct flock lock;
	//初始化锁变量的字段内容
	lock.l_type = F_WRLCK;
	lock.l_whence = SEEK_SET;
	lock.l_start = 0;
	lock.l_len = 6;

	//给hello文件加读锁
	int f = fcntl(fd,F_SETLKW,&lock);
	if(f == -1)
	{
		perror("fcntl");
		return 2;
	}
	printf("B添加读锁成功！\n");
	getchar();
	
	close(fd);
	fd = -1;
	return 0;
}
