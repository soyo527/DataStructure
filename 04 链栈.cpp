//#include<iostream>
//using namespace std;
//
//typedef struct StackNode
//{
//	int data;
//	StackNode* next;
//}StackNode,*LinkStack;
//
//void InitStack(LinkStack& S)			//初始化
//{
//	S = NULL;
//}
//
//bool IsEmpty(LinkStack S)				//判空
//{
//	if (S==NULL)
//		return true;
//	else
//		return false;
//}
//
//bool Push(LinkStack& S, int e)			//入栈
//{
//	StackNode* p = new StackNode;
//	p->data = e;
//	p->next = S;
//	S = p;
//	return true;
//}
//
//bool Pop(LinkStack& S, int& e)			//出栈
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