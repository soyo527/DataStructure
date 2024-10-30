//#include<iostream>
//using namespace std;
//
//typedef struct BiNode
//{
//	int data;
//	BiNode* lchild, * rchild;
//}BiNode, * BiTree;
//
//bool CreatBiTree(BiTree& T)
//{
//	int ch;
//	cin >> ch;
//	if (ch == '#')
//		T = NULL;
//	else
//	{
//		if (!(T = new BiNode))
//			exit(OVERFLOW);
//		T->data = ch;
//		CreatBiTree(T->lchild);
//		CreatBiTree(T->rchild);
//	}
//	return true;
//}
//
//int main()
//{
//
//	system("pause");
//	return 0;
//}