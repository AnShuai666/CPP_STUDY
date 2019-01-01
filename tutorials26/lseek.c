#include <fcntl.h>
#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/stat.h>

int main(int argc,char* argv[])
{
	int fd;
	int r;
	char buf[128];
	//以读写的方式打开文件
	fd = open(argv[1],O_RDWR);
	if(fd == -1)	
	{
		return 1;
	}
	//对文件的内容读写操作
	r = read(fd,buf,4);
	//标准输出
	write(1,buf,r);
	//将文件的读写位置设置为文件的尾部
	lseek(fd,0,SEEK_END);
	write(fd,buf,r);
	//关闭文件
	close(fd);
	return 0;
}
