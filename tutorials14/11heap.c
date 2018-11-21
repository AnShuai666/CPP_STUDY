/*
	动态分配内存演示
*/
#include <stdio.h>
#include <stdlib.h>

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

pt *midpt(rect * p_r)
{
	pt *p_mid = (pt *)malloc(sizeof(pt));
	if(!p_mid)	
		exit(0);
	p_mid->row = (p_r->pt1.row + p_r->pt2.row) / 2;
	p_mid->col = (p_r->pt1.col + p_r->pt2.col) / 2;

	return p_mid;
}

int main()
{
	rect r;
	printf("请输入一个矩形的坐标：\n");
	scanf("%d%d%d%d",&r.pt1.row,&r.pt1.col,&r.pt2.row,&r.pt2.col);
	pt *p_mid = NULL;
	p_mid = midpt(&r);
	printf("(%d,%d)\n",p_mid->row,p_mid->col);
	return 0;
}

