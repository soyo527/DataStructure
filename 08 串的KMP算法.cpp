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
//void get_next(SString T, int* next)
//{
//	int i = 1, j = 0;
//	next[1] = 0;
//	while (i <= T.length)
//		if (j == 0 || T.ch[i] == T.ch[j])
//		{
//			i++;
//			j++;
//			next[i] = j;
//		}
//		else
//			j = next[j];
//}
//
//int KMP(SString S, SString T)
//{
//	int i = 1, j = 1;
//	int next[255];
//	get_next(T, next);
//	while (i<=S.length&&j<=T.length)		//j>T.length，找到子串了；i>S.length，遍历完了没找到
//	{
//		if (S.ch[i] == T.ch[j])
//		{
//			i++;
//			j++;
//		}
//		else
//			j = next[j];
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