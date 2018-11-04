/*
	结构体练习
*/

#include <stdio.h>

typedef struct 
{
	int row;
	int col;	
} pt;

void print(const pt* p_pt)
{
	printf("点的位置为：(%d,%d)\n",p_pt->row,p_pt->col);
}

/*
pt* read()
{	
	static pt pt1;
	printf("请输入点的坐标：\n");
	scanf("%d%d",&pt1.row,&pt1.col);
	return &pt1;
}
*/
/*
void read(pt* p_pt1)
{	
	printf("请输入点的坐标：\n");
	scanf("%d%d",&p_pt1->row,&p_pt1->col);
}
*/

pt* read(pt* p_pt1)
{	
	printf("请输入点的坐标：\n");
	scanf("%d%d",&p_pt1->row,&p_pt1->col);
	return p_pt1;
}

int main()
{
	pt pt1 = {0};
	pt * p_pt = &pt1;
	printf("请输入点的坐标：\n");
	scanf("%d%d",&(p_pt->row),&(p_pt->col));
	print(p_pt);

	pt pt2 = {0};

	pt* p_pt2 = read(&pt2);
	print(p_pt2);

	//read(p_pt);
	//print(p_pt);

	return 0;
}
