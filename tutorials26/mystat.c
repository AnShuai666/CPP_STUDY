#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <pwd.h>

int main(int argc, char *argv[])
{
	struct stat sbuf;
	struct passwd *p;
	int s;
	//获取指定文件的元数据
	s = stat(argv[1],&sbuf);
	//获取文件的元数据失败
	if(s == -1)
	{
		perror("stat");
		return 1;
	}

	printf("size:%ld\n",sbuf.st_size);
	printf("hard links:%ld\n",sbuf.st_nlink);
	printf("inode number:%ld\n",sbuf.st_ino);
//	printf("user id:%d\n",sbuf.st_uid);
	p = getpwuid(sbuf.st_uid);
	if(p == NULL)
	{
		return 2;
	}
	printf("username:%s\n",p->pw_name);
	//printf("gid:%d\n",sbuf.st_gid);
	struct group *q = getgrgid(sbuf.st_gid);
	printf("group name:%s\n",q->gr_name);

	return 0;
}
