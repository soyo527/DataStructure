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
//bool InitList(SqList &L)		//��ʼ������������һ���յ����Ա�L
//{
//	L.elem = new int[MaxSize];	//����ռ�
//	if (!L.elem)
//		exit(OVERFLOW);	//����ʧ��
//	L.length = 0;
//	return true;
//}
//
//void DestroyList(SqList& L)		//�����Ѵ��ڵ����Ա�L
//{
//	if(L.elem)
//		delete L.elem;
//}
//
//void ClearList(SqList& L)		//�����Ա����
//{
//	L.length = 0;
//}
//
//int GetList(SqList L)			//�����Ա�L�ĳ���
//{
//	return L.length;
//}
//
//bool IsEmpty(SqList L)			//�ж����Ա�L�Ƿ�Ϊ��
//{
//	if (L.length == 0)
//		return true;
//	else
//		return false;
//}
//
//bool GetElem(SqList L,int i,int &e)//�����Ա�L�еĵ�i��λ��Ԫ�ط��ظ�e
//{
//	if (i<1 || i>L.length)
//		return false;
//	e = L.elem[i-1];
//	return true;
//}
//
//int LocatElem(SqList L, int e)		//���������ֵe��ȵ�Ԫ��
//{
//	for (int i = 0; i < L.length; i++)
//		if (e == L.elem[i])
//			return i + 1;
//	return false;
//}
//
//bool ListInsert(SqList& L, int i, int e)//�����Ա�L�е�i��λ�ò�����Ԫ��e
//{
//	if (i<1 || i>L.length+1)
//		return false;
//	if (L.length == MaxSize)
//		return false;
//	for (int j = L.length; j >= i - 1; j--)
//		L.elem[j + 1] = L.elem[j];
//	L.elem[i-1] = e;					//����Ԫ�طŵ���i��λ��
//	L.length++;
//	return true;
//}
//
//bool ListDelete(SqList& L, int i, int& e)	//ɾ�����Ա�L�е�i��λ��Ԫ�أ���e����
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