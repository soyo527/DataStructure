//#include<iostream>
//using namespace std;
//
//void swap(int& a, int& b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
//
//void SelectSort(int a[], int n)
//{
//	for (int i = 0; i < n - 1; i++)
//	{
//		int min = i;
//		for (int j = i + 1; j < n; j++)
//			if (a[j] < a[min])
//				min = j;
//		if(min!=i)
//			swap(a[i], a[min]);
//	}
//}
//
//void test()
//{
//	int a[] = { 3,6,1,4,2,9,8,5,7,10 };
//	SelectSort(a, 10);
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