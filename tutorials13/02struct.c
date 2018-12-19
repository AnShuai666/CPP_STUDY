/*
	结构体练习
*/

#include <stdio.h>

typedef struct
{
	int row;
	int col;
} pt;

typedef struct
{
	pt pt1;
	pt pt2;
} rect;


int main(int argc, char ** argv)
{
	rect rect1 = {0};
	rect rect2 = {0};
	rect * p_rect = &rect2;
	int area1, area2;
	printf("请输入长方形1坐标：\n");
	scanf("%d%d%d%d",&rect1.pt1.row,&rect1.pt1.col,&rect1.pt2.row,&rect1.pt2.col);
	printf("长方形1的坐标为：(%d,%d),(%d,%d)\n",rect1.pt1.row,rect1.pt1.col,rect1.pt2.row,rect1.pt2.col);
	printf("请输入长方形2的坐标：\n");
	scanf("%d%d%d%d",&p_rect->pt1.row,&(p_rect->pt1.col),&(p_rect->pt2.row),&(p_rect->pt2.col));
	printf("长方形2的坐标为：(%d,%d),(%d,%d)\n",p_rect->pt1.row,p_rect->pt1.col,p_rect->pt2.row,p_rect->pt2.col);


	area1 = (rect1.pt1.row-rect1.pt2.row) * (rect1.pt2.col-rect1.pt1.col);
	area2 = (p_rect->pt1.row-p_rect->pt2.row) * (p_rect->pt2.col-p_rect->pt1.col);
	area1 = area1 >= 0 ? area1 : 0 - area1;
	area2 = area2 >= 0 ? area2 : 0 - area2;

	printf("rect1 面积是%d\n",area1);
	printf("rect2 面积是%d\n",area2);
	return 0;
}
