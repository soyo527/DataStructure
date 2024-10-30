//#include<iostream>
//using namespace std;
//const int MaxQueue = 100;
//
//typedef struct Qnode
//{
//	int data;
//	Qnode* next;
//}QNode,*QueuePtr;
//
//typedef struct
//{
//	QueuePtr front;
//	QueuePtr rear;
//}LinkQueue;
//
//void InitQueue(LinkQueue& Q)					//初始化
//{
//	Q.front = Q.rear = new QNode;
//	if (!Q.front)
//		exit(OVERFLOW);
//	Q.front->next = NULL;
//}
//
//void DestroyQueue(LinkQueue& Q)					//销毁
//{
//	while (Q.front)
//	{
//		QNode* p = Q.front->next;
//		delete Q.front;
//		Q.front = p;
//	}
//}
//
//void EnQueue(LinkQueue& Q, int e)				//入队
//{
//	QNode* p = new QNode;
//	p->data = e;
//	p->next = NULL;
//	Q.rear->next = p;
//	Q.rear = p;
//	delete p;
//}
//
//bool DeQueue(LinkQueue& Q, int& e)				//出队
//{
//	if (Q.front == Q.rear)
//		return false;
//	QNode* p = Q.front->next;
//	e = p->data;
//	Q.front->next = p->next;
//	if (Q.rear == p)
//		Q.rear = Q.front;						//如果是最后一个元素，要考虑尾指针
//	delete p;
//	return true;
//}
//
//int main()
//{
//	
//	system("pause");
//	return 0;
//}