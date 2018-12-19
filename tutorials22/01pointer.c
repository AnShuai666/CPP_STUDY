/*
	指针复习
*/

#include <stdio.h>

int main()
{
	int var_i = 321;
	char var_c = 'A';
	int *var_p;
	
	var_p = &var_i;
	printf("*var_p是%d\n",*var_p);

	char *var_cp;
	var_cp = (char *)&var_i;
	printf("*var_cp是%d\n",*var_cp);
	
	int *var_ip = &var_i;
	var_cp = &var_c;
	printf("var_p 是%d\n",*var_p);
	printf("var_c   是%d\n",*(var_cp));
	printf("var_c + 1 是%d\n",*(var_cp + 1));
	printf("var_c + 2 是%d\n",*(var_cp + 2));
	printf("var_c + 3 是%d\n",*(var_cp + 3));

	int **var_q = &var_ip;
	printf("var_q是%p\n", &var_q);
	printf("var_q是%p\n", var_q);
	printf("*var_q是%p\n", *var_q);
	printf("var_i是%p\n", &var_i);
	printf("**var_q是%d\n", **var_q);
	return 0;


}


