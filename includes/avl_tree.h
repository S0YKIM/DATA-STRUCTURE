#ifndef _BIN_TREE_
# define _BIN_TREE_

typedef struct AVLTreeNodeType
{
	char data;
	int visited;

	struct AVLTreeNodeType* pLeftChild;
	struct AVLTreeNodeType* pRightChild;
} AVLTreeNode;

typedef struct AVLTreeType
{
	struct AVLTreeNodeType* pRootNode;
} AVLTree;

AVLTree		*makeAVLTree(AVLTreeNode rootNode);
AVLTreeNode	*getRootNodeAVL(AVLTree* pAVLTree);
AVLTreeNode	*getLeftChildNodeAVL(AVLTreeNode* pNode);
AVLTreeNode	*getRightChildNodeAVL(AVLTreeNode* pNode);
void		deleteAVLTree(AVLTree* pAVLTree);
void		deleteAVLTreeNode(AVLTree *pAVLTree, int data);
void		insertAVLTreeNode(AVLTreeNode *pParentNode, int data);
void		preorderTraversalAVLTree(AVLTreeNode *node);
void		inorderTraversalAVLTree(AVLTreeNode *node);
void		postorderTraversalAVLTree(AVLTreeNode *node);
void		levelOrderTraversalAVLTree(AVLTreeNode *root);

#endif

#ifndef _COMMON_TREE_DEF_
# define _COMMON_TREE_DEF_

# define TRUE		1
# define FALSE		0
# define ERROR		-1

#endif