//#include<iostream>
//using namespace std;
//
//typedef struct BiNode
//{
//	int data;
//	BiNode* lchild, * rchild;
//}BiNode, * BiTree;
//
//int Copy(BiTree T, BiTree& NewT)
//{
//	if (T == NULL)
//	{
//		NewT = NULL;
//		return 0;
//	}
//	else
//	{
//		NewT = new BiNode;
//		NewT->data = T->data;
//		Copy(T->lchild, NewT->lchild);
//		Copy(T->rchild, NewT->rchild);
//	}
//}
//
//int main()
//{
//	
//	system("pause");
//	return 0;
//}