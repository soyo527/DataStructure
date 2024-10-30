//#include<iostream>
//using namespace std;
//
//void ShellSort(int a[], int n)
//{
//	for(int d=n/2;d>=1;d=d/2)
//		for (int i = d + 1; i <= n; i++)
//			if (a[i - d] > a[i])
//			{
//				a[0] = a[i];
//				int j;
//				for (j = i - d; j > 0 && a[0] < a[j]; j -= d)
//					a[j + d] = a[j];
//				a[j + d] = a[0];
//			}
//}
//
//void test()
//{
//	int a[11] = { 0,3,6,1,4,2,9,8,5,7,10 };
//	ShellSort(a, 10);
//	for (int i = 0; i < 10; i++)
//		cout << a[i+1] << endl;
//}
//
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}