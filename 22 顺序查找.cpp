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
//int Search_Seq(SSTable ST, int key)			//普通查找每次循环要判断两次
//{
//	for (int i = ST.length; i > 0; i--)
//		if (ST.R[i].key == key)
//			return i;
//	return 0;
//}
//
//int Search_Seq_(SSTable ST, int key)			//添加哨兵 查找每次循环要判断一次
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