/*
	树演示
	很多时候是遍历
	树的遍历通常采用递归函数实现 
	先遍历左子树 再遍历右子树
	根节点处理时间
	前序遍历   最先处理根节点
	中序遍历   中间处理根节点
	后序遍历   最后处理根节点
*/
#include <stdio.h>
#include <stdlib.h>
#include "01tree.h"

//树的初始化函数
void tree_init(tree *p_tree)
{
	p_tree->p_node = NULL;
}

//树的清理函数 后序遍历
void tree_deinit(tree *p_tree)
{
	if(!(p_tree->p_node))
	{
		return;
	}
	tree_deinit(&(p_tree->p_node->left));
	tree_deinit(&(p_tree->p_node->right));
	free(p_tree->p_node);
	p_tree->p_node = NULL;
}

//在有序二叉树里查找某个数字的位置 先序遍历
tree *tree_search_in_order(const tree* p_tree, int num)
{
	if(!(p_tree->p_node))
	{	
		//如果树里没有节点,则最上面的位置就是要查找的位置
		return (tree *)p_tree;
	}	

	if(p_tree->p_node->num == num)
	{
		//如果根节点的内容就是指定的数字,则最上面的位置就是要查找的位置
		return (tree *)p_tree;
	}
	else if(p_tree->p_node->num > num)
	{
		//如果根节点内容比指定的数字大,就应该在左子树里查找位置
		return tree_search_in_order(&(p_tree->p_node->left),num);
	}
	else
	{
		//如果根节点内容比指定的数字大,就应该在右子树里查找位置
		return tree_search_in_order(&(p_tree->p_node->right),num);
	}
}

//在有序二叉树里插入新数字
void tree_insert_in_order(tree *p_tree, int num)
{
	tree *p_tmp = tree_search_in_order(p_tree,num);
	if(p_tmp->p_node)
	{
		//如果指定数字存在就结束函数
		return;
	}

	//动态分配新节点
	node *p_node =	NULL;
	p_node = (node *)malloc(sizeof(node));
	if(!p_node)
	{
		printf("动态分配内存失败");
		return;
	}
	p_node->num = num;
	p_node->left.p_node = NULL;
	p_node->right.p_node = NULL;
	
	//把新节点查到指定位置
	p_tmp->p_node = p_node;
	  
}

//按照从小到大把所有数字显示在屏幕上 中序遍历
/*
void tree_show(const tree *p_tree)
{
	if(!(p_tree->p_node))
	{
		return;
	}
	tree_show(&(p_tree->p_node->left));
	printf("%d ", p_tree->p_node->num);
	tree_show(&(p_tree->p_node->right));
}
*/

void print_cb(int num)
{
	printf("%d ",num);
}

//中序遍历函数
void tree_miter(const tree *p_tree,void (* p_func)(int))
{
	if(!(p_tree->p_node))
	{
		return;
	}
	//中序遍历左子树
	tree_miter(&(p_tree->p_node->left),p_func);
	//使用函数指针形参捆绑的函数处理根节点
	p_func(p_tree->p_node->num);
	//中序遍历右子树
	tree_miter(&(p_tree->p_node->right),p_func);
}

//前序遍历函数
void tree_fiter(const tree *p_tree, void (* p_func)(int))
{
	if(!p_tree->p_node)
	{
		return;
	}
	p_func(p_tree->p_node->num);
	tree_fiter(&(p_tree->p_node->left),p_func);
	tree_fiter(&(p_tree->p_node->right),p_func);
}

//后序遍历函数 
void tree_liter(const tree *p_tree, void (* p_func)(int))
{
	if(!(p_tree->p_node))
	{
		return;
	}

	tree_liter(&(p_tree->p_node->left),p_func);
	tree_liter(&(p_tree->p_node->right),p_func);
	p_func(p_tree->p_node->num);
}

//从有序二叉树里删除某个数字
void tree_remove(tree *p_tree, int num)
{
	if(!(p_tree->p_node))
	{
		return;
	}
	tree *p_tmp = tree_search_in_order(p_tree, num);
	if(!(p_tmp->p_node->left.p_node))
	{
		//左子树不存在,就用右子树根节点替换要删除的节点
		p_tmp->p_node = p_tmp->p_node->right.p_node;
	}
	else if(!(p_tmp->p_node->right.p_node))
	{
		//右子树不存在,就用左子树根节点替换要删除的节点
		p_tmp->p_node = p_tmp->p_node->left.p_node;
	}
	else
	{
		tree *p_tmp1 = tree_search_in_order(&(p_tmp->p_node->left),p_tmp->p_node->right.p_node->num);
		p_tmp->p_node = p_tmp->p_node->left.p_node;
		p_tmp1->p_node = p_tmp->p_node->right.p_node;
	}
	free(p_tmp->p_node);
	p_tmp->p_node = NULL;
}

//计算树的高度的函数
/*
int tree_height(const tree *p_tree)
{
	
}
*/















