//#include<iostream>
//using namespace std;
//
//typedef struct
//{
//	int key;
//
//}ElemType;
//
//typedef struct
//{
//	ElemType* R;
//	int length;
//}SSTable;
//
//int Search_Seq(SSTable ST, int key)			//��ͨ����ÿ��ѭ��Ҫ�ж�����
//{
//	for (int i = ST.length; i > 0; i--)
//		if (ST.R[i].key == key)
//			return i;
//	return 0;
//}
//
//int Search_Seq_(SSTable ST, int key)			//����ڱ� ����ÿ��ѭ��Ҫ�ж�һ��
//{
//	ST.R[0].key = key;
//	int i;
//	for (i = ST.length; ST.R[i].key != key; i--);
//	return i;
//}
//
//int main()
//{
//	SSTable ST;
//	system("pause");
//	return 0;
//}