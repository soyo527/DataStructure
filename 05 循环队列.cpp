//#include<iostream>
//using namespace std;
//const int MaxQueue = 100;
//
//typedef struct
//{
//	int* base;
//	int front;							//ͷָ��
//	int rear;							//βָ��
//}SqQueue;
//
//void InitQueue(SqQueue& Q)				//��ʼ��
//{
//	Q.base = new int[MaxQueue];
//	if (!Q.base)
//		exit(OVERFLOW);
//	Q.front = 0;
//	Q.rear = 0;
//}
//
//int QueueLength(SqQueue Q)				//����г���
//{
//	return (Q.rear - Q.front + MaxQueue) % MaxQueue;
//}
//
//bool EnQueue(SqQueue& Q, int e)			//���
//{
//	if ((Q.rear + 1) % MaxQueue == Q.front)
//		return false;					//���ջ���򷵻�
//	Q.base[Q.rear] = e;					//βָ�������Ԫ��
//	Q.rear = (Q.rear + 1) % MaxQueue;	//βָ����ƣ����������Χ������
//	return true;
//}
//	
//bool DeQueue(SqQueue& Q, int& e)		//����
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