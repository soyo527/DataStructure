//#include<iostream>
//using namespace std;
//#define MaxInt 32767			//��ʾ����ֵ������
//#define MVNum 100				//��󶥵���
//typedef char VerTexType;		//���趥�����������Ϊ�ַ���
//typedef int ArcType;			//�ߵ�Ȩֵ����Ϊ����
//
//typedef struct
//{
//	VerTexType vexs[MVNum];		//�����
//	ArcType arcs[MVNum][MVNum];	//�ڽӾ���
//	int vexnum, arcnum;			//ͼ�ĵ�ǰ�����ͱ���
//}AMGraph;
//
//int LocateVex(AMGraph G, int v)
//{
//	for (int i = 0; i < G.vexnum; i++)
//		if (v == G.vexs[i])
//			return i;
//}
//
//void CreatUDN(AMGraph& G)		//����������
//{
//	cin >> G.vexnum >> G.arcnum;	//�����ܶ������ͱ���
//	for (int i = 0; i < G.vexnum; i++)
//		cin >> G.vexs[i];			//������������Ϣ
//	for (int i = 0; i < G.vexnum; i++)
//		for (int j = 0; j < G.vexnum; j++)
//			G.arcs[i][j]=MaxInt;	//�ߵ�Ȩֵ��ʼ��Ϊ����ֵ
//	for (int k = 0; k < G.arcnum; k++)		//�����ڽӾ���
//	{
//		int v1, v2, w;
//		cin >> v1 >> v2 >> w;		//�������������Լ�Ȩֵ
//		int i = LocateVex(G, v1);
//		int j = LocateVex(G, v2);	//ȷ��v1��v2��G�е�λ��
//		G.arcs[i][j] = w;			//��(v1��v2)��Ȩֵ��Ϊw
//		G.arcs[j][i] = G.arcs[i][j];//�Գ�λ��ҲҪ�޸�
//	}
//}
//
//int main()
//{
//	
//	system("pause");
//	return 0;
//}