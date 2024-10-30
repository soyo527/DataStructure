//#include<iostream>
//using namespace std;
//
//typedef struct BiNode
//{
//	int data;
//	BiNode* lchild, * rchild;
//}BiNode, * BiTree;
//
//void InOrderTraverse(BiTree T)
//{
//	BiTree p;
//	InitStack(S);
//	p = T;
//	while (p || StackEmpty(S))
//	{
//		if (p)
//		{
//			Push(p);
//			p = T->lchild;
//		}
//		else
//		{
//			Pop(S, q);
//			cout << q->data;
//			p = q->rchild;
//		}
//	}
//}
//
//int main()
//{
//
//	system("pause");
//	return 0;
//}