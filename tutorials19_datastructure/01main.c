/*
	二叉树测试
*/

#include <stdio.h>
#include "01tree.h"
void ptint_cb(int num)
{
	printf("%d ",num);
}
int main()
{
	tree tr = {0};
	tree_init(&tr);
	tree_insert_in_order(&tr,40);
	tree_insert_in_order(&tr,20);
	tree_insert_in_order(&tr,70);
	tree_insert_in_order(&tr,55);
	tree_insert_in_order(&tr,81);
	tree_insert_in_order(&tr,76);
	tree_insert_in_order(&tr,90);
	tree_insert_in_order(&tr,84);
	
	tree_remove(&tr,70);
	tree_remove(&tr,90);
	tree_miter(&tr,ptint_cb);
	printf("\n");


	tree_deinit(&tr);
	return 0;
}
