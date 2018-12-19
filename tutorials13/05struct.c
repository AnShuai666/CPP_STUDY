/*
	结构体练习
*/
#include <stdio.h>
typedef struct
{
	int row;
	int col;
}pt;

typedef struct
{
	pt center;
	int radius;
}circle;

int L2(const pt* pt1, const pt* pt2)
{
	int l2 = (pt1->row - pt2->row) * (pt1->row - pt2->row) + (pt1->col - pt2->col) * (pt1->col - pt2->col);
	return l2;
}

int relation(const pt* p_pt, const circle* p_circle)
{
	int d = L2(p_pt, &p_circle->center);
	int ra2 = (p_circle->radius) * (p_circle->radius) ;

	if(d < ra2)
	{
		return 0;
	}
	else if(d == ra2)
	{
		return 1;
	}
	else
	{
		return 2;
	}		
}


int main()
{
	circle circle1 = {0};
	pt pt1 = {0};
	printf("请输入圆的坐标和半径：\n");
	scanf("%d%d%d",&circle1.center.row,&circle1.center.col,&circle1.radius);
	printf("请输入点的坐标：\n");
	scanf("%d%d",&pt1.row,&pt1.col);
	int re =relation(&pt1,&circle1);

	if(re == 0)
		printf("点在圆内\n");
	else if(re == 1)
		printf("点在圆上\n");
	else
		printf("点在圆外\n");

	return 0;
}
