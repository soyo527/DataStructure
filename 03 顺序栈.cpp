//#include<iostream>
//using namespace std;
//const int MaxSize = 100;
//
//typedef struct
//{
//	int* top;							//ջ��ָ��
//	int* base;							//ջ��ָ��
//	int stacksize;						//ջ���������
//}SqStack;
//
//void InitStack(SqStack& S)				//��ʼ��
//{	
//	S.base = new int[MaxSize];
//	if (!S.base)
//		exit(OVERFLOW);
//	S.top = S.base;
//	S.stacksize = MaxSize;
//}
//
//bool IsEmpty(SqStack S)					//��ջΪ�գ�����TRUE;���򷵻�FALSE
//{
//	if (S.top == S.base)
//		return true;
//	return false;
//}
//
//int StackLength(SqStack S)				//��ջ�ĳ���
//{
//	return S.top - S.base;
//}
//
//void StackClear(SqStack& S)				//���ջ
//{
//	if(S.base)
//	S.top = S.base;
//}
//
//void StackDestroy(SqStack& S)			//����ջ
//{
//	if (S.base)
//	{
//		delete S.base;
//		S.stacksize = 0;
//		S.base = S.top = NULL;
//	}
//}
//
//bool Push(SqStack& S, int e)			//��ջ
//{
//	if (S.top-S.base==S.stacksize)		//ջ��
//		return false;
//	*S.top = e;
//	S.top++;
//	return true;
//}
//
//bool Pop(SqStack& S,int &e)
//{
//	if (S.top == S.base)				//ջ��
//		return false;
//	S.top--;
//	e = *S.top;
//	return true;
//}
//
//int main()
//{
//	SqStack S;
//
//
//	system("pause");
//	return 0;
//}