#include <stdio.h>
#include "tmath.h" 
typedef int (*p_func[4])(int,int);
int main()
{
	int a = 6, b = 2;
	printf("a+b = %d\n",t_add(a,b));
	printf("a-b = %d\n",t_sub(a,b));
	printf("a*b = %d\n",t_mul(a,b));
	printf("a/b = %d\n",t_div(a,b));
	return 0;
}
