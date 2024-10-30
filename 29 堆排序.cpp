//#include<iostream>
//using namespace std;
//
//void HeapAdjust(int a[], int k, int len)		//调整为大根堆
//{
//	a[0] = a[k];
//	for (int i = k * 2; i <= len; i++)
//	{
//		if (i < len && a[i] < a[i + 1])
//			i++;
//		if (a[0] > a[i])
//			break;
//		else
//		{
//			a[k] = a[i];
//			k = i;
//		}
//	}
//	a[k] = a[0];
//}
//
//void BuildMaxHeap(int a[], int len)
//{
//	for (int i = len / 2; i > 0; i--)
//		HeapAdjust(a, i, len);
//}
//
//void HeapSort(int a[], int len)
//{
//	BuildMaxHeap(a, len);
//	for (int i = len; i > 1; i--)
//	{
//		swap(a[i], a[1]);
//		HeapAdjust(a, 1, i - 1);
//	}
//}
//
//void test()
//{
//	int a[] = { 0,3,6,1,4,2,9,8,5,7,10 };
//	HeapSort(a, 10);
//	for (int i = 1; i <= 10; i++)
//		cout << a[i] << endl;
//}
//
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}