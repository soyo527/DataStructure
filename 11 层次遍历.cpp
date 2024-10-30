//#include<iostream>
//using namespace std;
//const int MaxSize = 100;
//
//typedef struct BiNode
//{
//	int data;
//	BiNode* lchild, * rchild;
//}BiNode, * BiTree;
//
//typedef struct
//{
//	BiNode data[MaxSize];
//	int front, rear;
//}SqQueue;
//
//void LevelOrder(BiNode* b)
//{
//	BiNode* p;
//	SqQueue* qu;
//	InitQueue(qu);
//	enQueue(qu, b);
//	while (!QueueEmpty(qu))
//	{
//		deQueue(qu, p);
//		cout << p->data << endl;
//		if (p->lchild != NULL)
//			enQueue(qu, p->lchild);
//		if (p->rchild != NULL)
//			enQueue(qu, p->rchild);
//	}
//}
//
//int main()
//{
//	
//	system("pause");
//	return 0;
//}