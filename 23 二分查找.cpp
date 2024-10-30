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
//int Search_Bin(SSTable ST, int key)			//·ÇµÝ¹é
//{
//	int low = 1;
//	int high = ST.length;
//	while (low <= high)
//	{
//		int mid = (low + high) / 2;
//		if (ST.R[mid].key == key)
//			return mid;
//		else if (key < ST.R[mid].key)
//			high = mid - 1;
//		else low = mid + 1;
//	}
//	return 0;
//}
//
//int Search_Bin_(SSTable ST, int key,int low,int high)			//µÝ¹é
//{
//	int mid = (low + high) / 2;
//	if (low > high)
//		return 0;
//	if (ST.R[mid].key == key)
//		return mid;
//	else if (key < ST.R[mid].key)
//		return Search_Bin_(ST, key, low, mid - 1);
//	else
//		return Search_Bin_(ST, key, mid + 1, high);
//}
//
//int main()
//{
//	SSTable ST;
//	system("pause");
//	return 0;
//}