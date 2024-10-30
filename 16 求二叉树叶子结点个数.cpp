//#include<iostream>
//using namespace std;
//
//typedef struct BiNode
//{
//	int data;
//	BiNode* lchild, * rchild;
//}BiNode, * BiTree;
//
//int NodeCount(BiTree T)
//{
//	if (T == NULL)
//		return 0;
//	if (T->lchild == NULL && T->rchild == NULL)
//		return 1;
//	else
//		return NodeCount(T->lchild) + NodeCount(T->rchild);
//}
//
//int main()
//{
//
//	system("pause");
//	return 0;
//}