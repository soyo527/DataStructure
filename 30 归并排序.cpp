//#include<iostream>
//using namespace std;
//int n = 10;
//
//void Merge(int a[], int low, int mid, int high)
//{
//	int i, j, k;
//	int* b = new int[n];
//	for (k = low; k <= high; k++)
//		b[k] = a[k];
//	for (i = low, j = mid + 1, k = i; i <= mid && j <= high; k++)
//	{
//		if (b[i] <= b[j])
//			a[k] = b[i++];
//		else
//			a[k] = b[j++];
//	}
//	while (i <= mid)	a[k++] = b[i++];
//	while (j <= high)	a[k++] = b[j++];
//}
//
//void MergeSort(int a[], int low, int high)
//{
//	if (low < high)
//	{
//		int mid = (low + high) / 2;
//		MergeSort(a, low, mid);
//		MergeSort(a, mid + 1, high);
//		Merge(a, low, mid, high);
//	}
//}
//
//int main()
//{
//	
//	system("pause");
//	return 0;
//}