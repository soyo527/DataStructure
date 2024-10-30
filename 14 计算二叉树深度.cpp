//#include<iostream>
//using namespace std;
//
//typedef struct BiNode
//{
//	int data;
//	BiNode* lchild, * rchild;
//}BiNode, * BiTree;
//
//int Depth(BiTree T)
//{
//	if (T == NULL)
//		return 0;
//	else
//	{
//		int m = Depth(T->lchild);
//		int n = Depth(T->rchild);
//		if (m >= n)
//			return m + 1;
//		else
//			return n + 1;
//	}
//}
//
//int main()
//{
//	
//	system("pause");
//	return 0;
//}