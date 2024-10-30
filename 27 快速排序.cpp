//#include<iostream>
//using namespace std;
//
//int Partition(int a[], int low, int high)
//{
//	int pivot = a[low];
//	while (low < high)
//	{
//		while (low < high && a[high] >= pivot)
//			high--;
//		a[low] = a[high];
//		while (low < high && a[low] <= pivot)
//			low++;
//		a[high] = a[low]; 
//	}
//	a[low] = pivot;
//	return low;
//}
//
//void QuickSort(int a[], int low ,int high)
//{
//	if (low < high)
//	{
//		int pivotpos = Partition(a, low, high);
//		QuickSort(a, pivotpos + 1, high);
//		QuickSort(a, low, pivotpos - 1);
//	}
//}
//
//void test()
//{
//	int a[] = { 3,6,1,4,2,9,8,5,7,10 };
//	QuickSort(a, 0, 9);
//	for (int i = 0; i < 10; i++)
//		cout << a[i] << endl;
//}
//
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}