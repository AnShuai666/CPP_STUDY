#include <stdio.h>
#include <sys/types.h>
#include <dirent.h>

int main(int argc, char *argv[])
{
	DIR *dirp = opendir(argv[1]);
	struct dirent *p  = NULL;
	if(dirp == NULL)
	{
		perror("opendir");
		return 1;
	}
	printf("directory open success...\n");
	while((p = readdir(dirp)) != NULL)
	{
		printf("%s\t%lu\n",p->d_name,p->d_ino);
	}
	closedir(dirp);
	dirp = NULL;
	return 0;
}
