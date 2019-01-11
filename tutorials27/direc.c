#include <stdio.h>

int main()
{
	int fd , s_fd;
	char msg[] = "this is a test\n";
	fd = open("somefile",O_RDWR|O_CREAT,0664);
	if(fd == -1)
	{
		perror("open");
		return 1;
	}

	//复制标准输出文件描述符到s_fd
	s_fd = dup(STDOUT_FILENO);
	//将fd文件描述符复制到标准输出
	dup2(fd,STDOUT_FILENO);
	close(fd);
	
	//向标准输出文件描述符中输出字符串
	write(STDOUT_FILENO,msg,strlen(msg));
	dup2(s_fd,STDOUT_FILENO);
	write(STDOUT_FILENO,msg,strlen(msg));
	close(s_fd);
	return 0;
}
