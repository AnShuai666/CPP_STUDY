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
	pt pt1;
	pt pt2;	
}rect;

rect* read(rect* p_rect)
{
	printf("请输入矩形的坐标：\n");
	scanf("%d%d%d%d",&p_rect->pt1.row,&p_rect->pt1.col,&p_rect->pt2.row,&p_rect->pt2.col);
	return p_rect;
}

void print(const rect* p_rect)
{
	printf("矩形的坐标是：（%d,%d）,（%d,%d）\n",p_rect->pt1.row,p_rect->pt1.col,p_rect->pt2.row,p_rect->pt2.col);
}

int area(const rect* p_rect)
{
	int area = 0;
	area = (p_rect->pt1.row-p_rect->pt2.row)*(p_rect->pt1.col-p_rect->pt2.col);
	area = area >= 0 ? area : 0 - area;
	return area;
}
int main()
{
	rect rect1 = {0};
	rect *p_rect = &rect1;
	
	p_rect = read(p_rect);
	print(p_rect);
	int a = area(p_rect);
	printf("面积是：%d\n",a);

	return 0;
}
