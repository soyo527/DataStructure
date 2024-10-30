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
//	while (i<=S.length&&j<=T.length)		//j>T.length，找到子串了；i>S.length，遍历完了没找到
//	{
//		if (S.ch[i] == T.ch[j])
//		{
//			i++;
//			j++;
//		}
//		else
//		{
//			i = i - j + 2;					//i返回到上次匹配的首位的下一位
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