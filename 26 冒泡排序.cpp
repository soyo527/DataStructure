#include<bits/stdc++.h>
using namespace std;

void swap(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}

void BubbleSort(int a[], int n)
{
	bool flag = true;
	for (int i = 0; i < n && flag; i++)
	{
		flag = false;
		for (int j = i + 1; j < n; j++)
			if (a[i] > a[j])
			{
				swap(a[i], a[j]);
				flag = true;
			}
	}
}

void test()
{
	int a[] = { 3,6,1,4,2,9,8,5,7,10 };
	BubbleSort(a, 10);
	for (int i = 0; i < 10; i++)
		cout << a[i] << endl;
}

int main()
{
	test();
	system("pause");
	return 0;
}