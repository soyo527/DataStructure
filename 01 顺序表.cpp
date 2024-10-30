//#include<iostream>
//const int MaxSize = 100;
//using namespace std;
//
//typedef struct
//{
//	int* elem;
//	int length;
//}SqList;
//
//bool InitList(SqList &L)		//初始化操作，建立一个空的线性表L
//{
//	L.elem = new int[MaxSize];	//分配空间
//	if (!L.elem)
//		exit(OVERFLOW);	//分配失败
//	L.length = 0;
//	return true;
//}
//
//void DestroyList(SqList& L)		//销毁已存在的线性表L
//{
//	if(L.elem)
//		delete L.elem;
//}
//
//void ClearList(SqList& L)		//将线性表清空
//{
//	L.length = 0;
//}
//
//int GetList(SqList L)			//求线性表L的长度
//{
//	return L.length;
//}
//
//bool IsEmpty(SqList L)			//判断线性表L是否为空
//{
//	if (L.length == 0)
//		return true;
//	else
//		return false;
//}
//
//bool GetElem(SqList L,int i,int &e)//将线性表L中的第i个位置元素返回给e
//{
//	if (i<1 || i>L.length)
//		return false;
//	e = L.elem[i-1];
//	return true;
//}
//
//int LocatElem(SqList L, int e)		//查找与给定值e相等的元素
//{
//	for (int i = 0; i < L.length; i++)
//		if (e == L.elem[i])
//			return i + 1;
//	return false;
//}
//
//bool ListInsert(SqList& L, int i, int e)//在线性表L中第i个位置插入新元素e
//{
//	if (i<1 || i>L.length+1)
//		return false;
//	if (L.length == MaxSize)
//		return false;
//	for (int j = L.length; j >= i - 1; j--)
//		L.elem[j + 1] = L.elem[j];
//	L.elem[i-1] = e;					//将新元素放到第i个位置
//	L.length++;
//	return true;
//}
//
//bool ListDelete(SqList& L, int i, int& e)	//删除线性表L中第i个位置元素，用e返回
//{
//	if (i<1 || i>L.length)
//		return false;
//	if (L.length == 0)
//		return false;
//	e = L.elem[i - 1];
//	for (int j = i; j < L.length; j++)
//		L.elem[j - 1] = L.elem[j];
//	L.length--;
//	return true;
//}
//
//int main()
//{
//	SqList L;
//	InitList(L);
//	L.elem[0] = 0;
//	L.elem[1] = 1;
//	L.elem[2] = 2;
//	L.elem[3] = 3;
//	L.elem[4] = 4;
//	ListInsert(L, 4, 10);
//
//	cout << L.elem[3] << endl;
//
//	system("pause");
//	return 0;
//}