//#include<iostream>
//using namespace std;
//
//typedef struct BSTNode
//{
//	int key;
//	BSTNode* lchild, * rchild;
//}BSTNode,*BSTree;
//
//BSTNode* BST_Search(BSTree T, int key)		//�ǵݹ����
//{
//	while (T!=NULL&&T->key!=key) 
//	{
//		if (T->key > key)
//			T = T->lchild;
//		else T = T->rchild;
//	}
//	return T;
//}
//
//BSTNode* BST_Search_(BSTree T, int key)		//�ݹ����
//{
//	if (T == NULL)
//		return NULL;
//	if (key = T->key)
//		return T;
//	else if (T->key > key)
//		return BST_Search_(T->lchild, key);
//	else 
//		return BST_Search_(T->rchild, key);
//}
//
//BSTNode* BST_Insert(BSTree &T, int k)		//�ݹ����
//{
//	if (T == NULL)
//	{
//		T = new BSTNode;
//		T->key = k;
//		T->lchild = T->rchild = NULL;
//	}
//	else if (k = T->key)
//		return 0;
//	else if (T->key > k)
//		return BST_Insert(T->lchild, k);
//	else
//		return BST_Insert(T->rchild, k);
//}
//
//void Creat_BST(BSTree& T, int str[], int n)		//��������������
//{
//	T = NULL;
//	for (int i = 0; i < n; i++)
//		BST_Insert(T, str[i]);
//}
//
//int main()
//{
//	
//	system("pause");
//	return 0;
//}