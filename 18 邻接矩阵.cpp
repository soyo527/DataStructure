//#include<iostream>
//using namespace std;
//#define MaxInt 32767			//表示极大值正无穷
//#define MVNum 100				//最大顶点数
//typedef char VerTexType;		//假设顶点的数据类型为字符型
//typedef int ArcType;			//边的权值类型为整型
//
//typedef struct
//{
//	VerTexType vexs[MVNum];		//顶点表
//	ArcType arcs[MVNum][MVNum];	//邻接矩阵
//	int vexnum, arcnum;			//图的当前点数和边数
//}AMGraph;
//
//int LocateVex(AMGraph G, int v)
//{
//	for (int i = 0; i < G.vexnum; i++)
//		if (v == G.vexs[i])
//			return i;
//}
//
//void CreatUDN(AMGraph& G)		//构造无向网
//{
//	cin >> G.vexnum >> G.arcnum;	//输入总顶点数和边数
//	for (int i = 0; i < G.vexnum; i++)
//		cin >> G.vexs[i];			//依次输入点的信息
//	for (int i = 0; i < G.vexnum; i++)
//		for (int j = 0; j < G.vexnum; j++)
//			G.arcs[i][j]=MaxInt;	//边的权值初始化为极大值
//	for (int k = 0; k < G.arcnum; k++)		//构造邻接矩阵
//	{
//		int v1, v2, w;
//		cin >> v1 >> v2 >> w;		//输入两个顶点以及权值
//		int i = LocateVex(G, v1);
//		int j = LocateVex(G, v2);	//确定v1和v2在G中的位置
//		G.arcs[i][j] = w;			//边(v1，v2)的权值置为w
//		G.arcs[j][i] = G.arcs[i][j];//对称位置也要修改
//	}
//}
//
//int main()
//{
//	
//	system("pause");
//	return 0;
//}