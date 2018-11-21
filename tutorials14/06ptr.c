/*
	二级指针练习
*/

#include <stdio.h>
typedef struct 
{
	int row;
	int col;
} pt;

typedef struct
{
	pt center;
	int radius;
} circle;

void max(const circle *p_cl1, const circle *p_cl2, circle **pp_cl)
{
	*pp_cl = (circle *)(p_cl1->radius > p_cl2->radius ? p_cl1 : p_cl2);
}


int main()
{
	circle cl1 = {0};
	circle cl2 = {0};
	circle *p_cl =NULL;
	
	printf("请输入第一个圆的位置:\n");
	scanf("%d%d%d",&(cl1.center.row),&(cl1.center.col),&(cl1.radius));
	printf("请输入第二个圆的位置:\n");
	scanf("%d%d%d",&(cl2.center.row),&(cl2.center.col),&(cl2.radius));
	max(&cl1,&cl2,&p_cl);
	printf("面积较大的圆是:(%d,%d,%d)\n",p_cl->center.row,p_cl->center.col,p_cl->radius);

	return 0;
}
