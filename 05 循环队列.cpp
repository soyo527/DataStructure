//#include<iostream>
//using namespace std;
//const int MaxQueue = 100;
//
//typedef struct
//{
//	int* base;
//	int front;							//头指针
//	int rear;							//尾指针
//}SqQueue;
//
//void InitQueue(SqQueue& Q)				//初始化
//{
//	Q.base = new int[MaxQueue];
//	if (!Q.base)
//		exit(OVERFLOW);
//	Q.front = 0;
//	Q.rear = 0;
//}
//
//int QueueLength(SqQueue Q)				//求队列长度
//{
//	return (Q.rear - Q.front + MaxQueue) % MaxQueue;
//}
//
//bool EnQueue(SqQueue& Q, int e)			//入队
//{
//	if ((Q.rear + 1) % MaxQueue == Q.front)
//		return false;					//如果栈满则返回
//	Q.base[Q.rear] = e;					//尾指针里放新元素
//	Q.rear = (Q.rear + 1) % MaxQueue;	//尾指针后移，如果超出范围，归零
//	return true;
//}
//	
//bool DeQueue(SqQueue& Q, int& e)		//出队
//{
//	if (Q.front == Q.rear)
//		return false;
//	e = Q.base[Q.front];
//	Q.front = (Q.front + 1) % MaxQueue;
//	return true;
//}
//
//int main()
//{
//	
//	system("pause");
//	return 0;
//}