//#include<iostream>
//using namespace std;
//#define MaxInt 32767			//��ʾ����ֵ������
//#define MVNum 100				//��󶥵���
//typedef int VerTexType;		//���趥�����������Ϊint��
//int visited[100];
//
//const int MaxQueue = 100;
//
//typedef struct
//{
//	int* base;
//	int front;							//ͷָ��
//	int rear;							//βָ��
//}SqQueue;
//
//void InitQueue(SqQueue& Q)				//��ʼ��
//{
//	Q.base = new int[MaxQueue];
//	if (!Q.base)
//		exit(OVERFLOW);
//	Q.front = 0;
//	Q.rear = 0;
//}
//
//int QueueLength(SqQueue Q)				//����г���
//{
//	return (Q.rear - Q.front + MaxQueue) % MaxQueue;
//}
//
//bool EnQueue(SqQueue& Q, int e)			//���
//{
//	if ((Q.rear + 1) % MaxQueue == Q.front)
//		return false;					//���ջ���򷵻�
//	Q.base[Q.rear] = e;					//βָ�������Ԫ��
//	Q.rear = (Q.rear + 1) % MaxQueue;	//βָ����ƣ����������Χ������
//	return true;
//}
//	
//bool DeQueue(SqQueue& Q, int& e)		//����
//{
//	if (Q.front == Q.rear)
//		return false;
//	e = Q.base[Q.front];
//	Q.front = (Q.front + 1) % MaxQueue;
//	return true;
//}
//
//
//typedef struct ArcNode			//�߽��
//{
//	int adjvex;					//�ñ���ָ��Ķ����λ��
//	struct ArcNode* nextarc;    //ָ����һ���ߵ�ָ��
//	int info;					//�ͱ���ص���Ϣ
//}ArcNode;
//
//typedef struct VNode			//����
//{
//	VerTexType data;			//�������Ϣ
//	ArcNode* firstarc;			//ָ���һ�������ö���ıߵ�ָ��
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
//	cin >> G.vexnum >> G.arcnum;//�����ܶ��������ܱ���
//	for (int i = 0; i < G.vexnum; i++)	//��������㣬�����ͷ����
//	{
//		cin >> G.vertices[i].data;		//���붥��ֵ
//		G.vertices[i].firstarc = NULL;	//��ʼ����ͷ����ָ����
//	}
//	for (int k = 0; k < G.arcnum; k++)	//��������ߣ������ڽӱ�
//	{
//		int v1,v2;						//����һ������������������
//		cin >> v1 >> v2;
//		int i = LocateVex(G, v1);
//		int j = LocateVex(G, v2);		//ȷ��v1��v2��G�е�λ��
//		ArcNode* p1 = new ArcNode;		//�����µı߽��
//		p1->adjvex = j;					//�ڽӵ����Ϊj
//		p1->nextarc = G.vertices[i].firstarc;
//		G.vertices[i].firstarc = p1;	//���½��p1���붥��vi�ı߱�ͷ��
//		ArcNode* p2 = new ArcNode;		//�����µı߽��
//		p2->adjvex = i;					//�ڽӵ����Ϊi
//		p2->nextarc = G.vertices[j].firstarc;
//		G.vertices[j].firstarc = p2;	//���½��p2���붥��vj�ı߱�ͷ��
//	}
//}
//
//void BFS(ALGraph G,int v)					//��������ȱ�����ͨͼ
//{
//	cout << v;
//	visited[v] = true;					//���ʵ�v������
//	SqQueue Q;
//	InitQueue(Q);						//��������Q��ʼ��
//	EnQueue(Q, v);					//v����
//	while (QueueLength(Q) != 0)
//	{
//		int u;
//		DeQueue(Q, u);					//��ͷԪ�س��Ӳ���Ϊu
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