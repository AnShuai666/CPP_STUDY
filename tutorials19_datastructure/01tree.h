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
#ifndef		__01TREE_H__
#define		__01TREE_H__

struct node;

typedef struct
{
	struct node* p_node;
	
} tree;

typedef struct node
{
	int num;
	tree left;
	tree right;
} node;

//树的初始化函数
void tree_init(tree *p_tree);

//树的清理函数 后序遍历
void tree_deinit(tree *p_tree);

//在有序二叉树里查找某个数字的位置 先序遍历
//tree *tree_serch_in_order(const tree* p_tree, int num);

//在有序二叉树里插入新数字
void tree_insert_in_order(tree *p_tree, int num);

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


//中序遍历函数
void tree_miter(const tree *p_tree,void (* p_func)(int));

//前序遍历函数
void tree_fiter(const tree *p_tree, void (* p_func)(int));

//后序遍历函数 
void tree_liter(const tree *p_tree, void (* p_func)(int));

//删除
void tree_remove(tree *p_tree, int num);
#endif //__O1TREE_H__
















