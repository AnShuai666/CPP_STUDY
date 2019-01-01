#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

int main(int argc,char *argv[])
{
	int fd, r;
	char buf[128];
	//以只读方式打开文件
	fd = open(argv[1],O_RDONLY);
	if(fd == -1)
	{
		perror("open");
		return 1;
	}
	//读取文件的内容
	while(1)
	{
		r = read(fd,buf,128);
		if(r <= 0)
			break;
		//将读取到的内容输出到显示器
		write(1,buf,r);
	}
	close(fd);
	return 0;
}
