#include <stdio.h>
#include <tmath.h> 
typedef int (*p_func[4])(int,int);
int main()
{
	int a = 6, b = 2;
	p_func p = {t_add,t_sub,t_mul,t_div};
	for(int i = 0; i < 4; i++)
	{
		printf("%d\n",p[i](a,b));
	}
	return 0;
}
