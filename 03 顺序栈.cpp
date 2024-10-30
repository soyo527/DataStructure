//#include<iostream>
//using namespace std;
//const int MaxSize = 100;
//
//typedef struct
//{
//	int* top;							//栈顶指针
//	int* base;							//栈底指针
//	int stacksize;						//栈的最大容量
//}SqStack;
//
//void InitStack(SqStack& S)				//初始化
//{	
//	S.base = new int[MaxSize];
//	if (!S.base)
//		exit(OVERFLOW);
//	S.top = S.base;
//	S.stacksize = MaxSize;
//}
//
//bool IsEmpty(SqStack S)					//若栈为空，返回TRUE;否则返回FALSE
//{
//	if (S.top == S.base)
//		return true;
//	return false;
//}
//
//int StackLength(SqStack S)				//求栈的长度
//{
//	return S.top - S.base;
//}
//
//void StackClear(SqStack& S)				//清空栈
//{
//	if(S.base)
//	S.top = S.base;
//}
//
//void StackDestroy(SqStack& S)			//销毁栈
//{
//	if (S.base)
//	{
//		delete S.base;
//		S.stacksize = 0;
//		S.base = S.top = NULL;
//	}
//}
//
//bool Push(SqStack& S, int e)			//入栈
//{
//	if (S.top-S.base==S.stacksize)		//栈满
//		return false;
//	*S.top = e;
//	S.top++;
//	return true;
//}
//
//bool Pop(SqStack& S,int &e)
//{
//	if (S.top == S.base)				//栈空
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