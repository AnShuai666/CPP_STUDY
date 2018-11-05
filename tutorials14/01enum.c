/*
	枚举类型演示
*/

#include <stdio.h>
int main()
{		
	//enum season {CHUN, XIA, QIU, DONG};	
	enum season {CHUN, XIA=5, QIU, DONG};	
	printf("QIU 是%d\n",QIU);
	return 0;
}
