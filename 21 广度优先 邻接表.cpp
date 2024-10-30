//#include<iostream>
//using namespace std;
//#define MaxInt 32767			//表示极大值正无穷
//#define MVNum 100				//最大顶点数
//typedef int VerTexType;		//假设顶点的数据类型为int型
//int visited[100];
//
//const int MaxQueue = 100;
//
//typedef struct
//{
//	int* base;
//	int front;							//头指针
//	int rear;							//尾指针
//}SqQueue;
//
//void InitQueue(SqQueue& Q)				//初始化
//{
//	Q.base = new int[MaxQueue];
//	if (!Q.base)
//		exit(OVERFLOW);
//	Q.front = 0;
//	Q.rear = 0;
//}
//
//int QueueLength(SqQueue Q)				//求队列长度
//{
//	return (Q.rear - Q.front + MaxQueue) % MaxQueue;
//}
//
//bool EnQueue(SqQueue& Q, int e)			//入队
//{
//	if ((Q.rear + 1) % MaxQueue == Q.front)
//		return false;					//如果栈满则返回
//	Q.base[Q.rear] = e;					//尾指针里放新元素
//	Q.rear = (Q.rear + 1) % MaxQueue;	//尾指针后移，如果超出范围，归零
//	return true;
//}
//	
//bool DeQueue(SqQueue& Q, int& e)		//出队
//{
//	if (Q.front == Q.rear)
//		return false;
//	e = Q.base[Q.front];
//	Q.front = (Q.front + 1) % MaxQueue;
//	return true;
//}
//
//
//typedef struct ArcNode			//边结点
//{
//	int adjvex;					//该边所指向的顶点的位置
//	struct ArcNode* nextarc;    //指向下一条边的指针
//	int info;					//和边相关的信息
//}ArcNode;
//
//typedef struct VNode			//顶点
//{
//	VerTexType data;			//顶点的信息
//	ArcNode* firstarc;			//指向第一条依附该顶点的边的指针
//}VNode,AdjList[MVNum];
//
//typedef struct
//{
//	AdjList vertices;			//VNode v[MVNum]
//	int vexnum, arcnum;
//}ALGraph;
//
//int LocateVex(ALGraph G, int v)
//{
//	for (int i = 0; i < G.vexnum; i++)
//		if (v == G.vertices[i].data)
//			return i;
//}
//
//void CreateUDG(ALGraph& G)
//{
//	cin >> G.vexnum >> G.arcnum;//输入总顶点数，总边数
//	for (int i = 0; i < G.vexnum; i++)	//输入各个点，构造表头结点表
//	{
//		cin >> G.vertices[i].data;		//输入顶点值
//		G.vertices[i].firstarc = NULL;	//初始化表头结点的指针域
//	}
//	for (int k = 0; k < G.arcnum; k++)	//输入各个边，构造邻接表
//	{
//		int v1,v2;						//输入一条边依附的两个顶点
//		cin >> v1 >> v2;
//		int i = LocateVex(G, v1);
//		int j = LocateVex(G, v2);		//确定v1和v2在G中的位置
//		ArcNode* p1 = new ArcNode;		//生成新的边结点
//		p1->adjvex = j;					//邻接点序号为j
//		p1->nextarc = G.vertices[i].firstarc;
//		G.vertices[i].firstarc = p1;	//将新结点p1插入顶点vi的边表头部
//		ArcNode* p2 = new ArcNode;		//生成新的边结点
//		p2->adjvex = i;					//邻接点序号为i
//		p2->nextarc = G.vertices[j].firstarc;
//		G.vertices[j].firstarc = p2;	//将新结点p2插入顶点vj的边表头部
//	}
//}
//
//void BFS(ALGraph G,int v)					//按广度优先遍历联通图
//{
//	cout << v;
//	visited[v] = true;					//访问第v个顶点
//	SqQueue Q;
//	InitQueue(Q);						//辅助队列Q初始化
//	EnQueue(Q, v);					//v进队
//	while (QueueLength(Q) != 0)
//	{
//		int u;
//		DeQueue(Q, u);					//队头元素出队并置为u
//		int w = ;
//		for(w=FirstAdjVex(G,u);w>0;w=NextAdjVex(G,u,w))
//			if (!visited[w])
//			{
//				cout << w;
//				visited[w] = 1;
//				EnQueue(Q, w);
//			}
//	}
//}
//
//int main()
//{
//	ALGraph G;
//	CreateUDG(G);
//	cout << G.vertices[1].firstarc[0].adjvex;
//	system("pause");
//	return 0;
//}