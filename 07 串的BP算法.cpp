//#include<iostream>
//using namespace std;
//const int MAXLEN = 255;
//
//typedef struct
//{
//	char ch[MAXLEN + 1];
//	int length;
//}SString;
//
//int Index(SString S, SString T)
//{
//	int i = 1, j = 1;
//	while (i<=S.length&&j<=T.length)		//j>T.length���ҵ��Ӵ��ˣ�i>S.length����������û�ҵ�
//	{
//		if (S.ch[i] == T.ch[j])
//		{
//			i++;
//			j++;
//		}
//		else
//		{
//			i = i - j + 2;					//i���ص��ϴ�ƥ�����λ����һλ
//			j = 1;
//		}
//	}
//	if (j > T.length)
//		return i - T.length;
//	else
//		return 0;
//}
//
//int main()
//{
//	
//	system("pause");
//	return 0;
//}