/*	
	联合演示	
*/

#include <stdio.h>

typedef union 
{
	char ch;
	int num;
	float fnum;
} tmp;
int main()
{	
	tmp tmp_union = {0};
	printf("&(tmp_union.ch)是%p\n",&(tmp_union.ch));
	printf("&(tmp_union.num)是%p\n",&(tmp_union.num));
	printf("&(tmp_union.fnum)是%p\n",&(tmp_union.fnum));
	printf("sizeof(tmp)是%ld\n",sizeof(tmp));
	return 0;
}
