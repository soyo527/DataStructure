//#include<iostream>
//using namespace std;
//
//typedef struct StackNode
//{
//	int data;
//	StackNode* next;
//}StackNode,*LinkStack;
//
//void InitStack(LinkStack& S)			//��ʼ��
//{
//	S = NULL;
//}
//
//bool IsEmpty(LinkStack S)				//�п�
//{
//	if (S==NULL)
//		return true;
//	else
//		return false;
//}
//
//bool Push(LinkStack& S, int e)			//��ջ
//{
//	StackNode* p = new StackNode;
//	p->data = e;
//	p->next = S;
//	S = p;
//	return true;
//}
//
//bool Pop(LinkStack& S, int& e)			//��ջ
//{
//	if (S == NULL)
//		return false;
//	e = S->data;
//	StackNode* p = S;
//	S = S->next;
//	delete p;
//	return true;
//}
//
//int main()
//{
//	LinkStack S;
//	system("pause");
//	return 0;
//}