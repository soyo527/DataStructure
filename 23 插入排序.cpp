//#include<iostream>
//using namespace std;
//
//void InsertSort(int a[], int n)		//≤Â»Î≈≈–Ú
//{
//	for (int i = 1; i < n; i++)
//	{
//		int k = a[i];
//		int j;
//		for (j = i - 1; j >= 0 && a[j] > k; j--)
//			a[j + 1] = a[j];
//		a[j + 1] = k;
//	}
//}
//
//void test()
//{
//	int a[] = { 3,6,1,4,2,9,8,5,7,10 };
//	InsertSort(a, 10);
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