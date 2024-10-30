//#include<iostream>
//using namespace std;
//
//typedef struct Lnode
//{
//	int data;
//	struct Lnode* next;
//}Lnode,*LinkList;
//
//void InitLinkList(LinkList& L)		//��ʼ��
//{
//	L= new Lnode;					//�����½����ͷ��㣬��ͷָ��Lָ��ͷ���
//	L->next = NULL;					//��ͷ����ָ�����ÿ�
//}
//
//bool IsEmpty(LinkList L)			//�п�
//{
//	if (L->next = NULL)
//		return true;
//	return false;
//}
//
//void DestroyList(LinkList& L)		//�����������
//{
//	��ͷָ�뿪ʼ�������ͷ����н��
//	Lnode* p;						//����һ���µ�ָ��pָ��ͷ���
//	while(L!=NULL)
//	{
//		p = L;	
//		L = L->next;				//��ͷָ�������ƶ�
//		delete p;					//ɾ��p�ڵ�
//	}
//}
//
//void List(LinkList& L)				//��յ�����
//{
//	�����ͷ����н�㣬�����ǽ᠑ָ��������Ϊ��(pָ��һֱָ����Ԫ���)
//	Lnode* p = L->next;		//����һ���µ�ָ��pָ����Ԫ���
//	Lnode* q = new Lnode;
//	while(p!=NULL)
//	{
//		q = q->next;	
//		delete p;
//		p = q;
//	}
//	L->next = NULL;
//}
//
//int ListLength(LinkList L)			//��������
//{
//	Lnode* p = L->next;
//	int length = 0;
//	while (p != NULL)
//	{
//		length++;
//		p = p->next;
//	}
//	return length;
//}
//
//bool GetElem(LinkList L, int i, int& e)//ȡ�������е�i��Ԫ�ص�����
//{
//	int j = 1;
//	Lnode* p = L->next;
//	while (j < i && p != NULL)
//	{
//		p = p->next;
//		j++;
//	}
//	if (p == NULL || j > i)				//pΪ�ձ�ʾi����������Χ��j>i��ʾi�����ֵС��1
//		return false;
//	e = p->data;
//	return true;
//}
//
//Lnode* LocateElem_1(LinkList L, int e)	//��ֵ����(���ص�ַ)
//{
//	Lnode* p = L->next;
//	while (p != NULL && p->data != e)
//		p = p->next;
//	return p;
//}
//
//int LocateElem_2(LinkList L, int e)		//��ֵ����(����λ�����)
//{
//	Lnode* p = L->next;
//	int j = 1;
//	while (p != NULL && p->data != e)
//	{
//		p = p->next;
//		j++;
//	}
//	if (p == NULL)
//		return 0;
//	return j;
//}
//
//bool ListInsert(LinkList& L, int i, int e)//�ڵ�i�����ǰ����ֵΪe���½��
//{
//	Lnode* p = L;							//pҪָ��ͷ��㣬�����޷������һ��Ԫ��
//	int j = 0;								//p��ͷ���λ�ã����j=0
//	while (p != NULL && j < i-1)			//�ҵ�i-1��λ�ã�i-1��Ҫ�����λ�õ�ֱ��ǰ��
//	{
//		p = p->next;
//		j++;
//	}
//	if (p == NULL||j>i-1)
//		return false;
//	Lnode* s = new Lnode;
//	s->data = e;							//��e��ֵ����s
//	s->next = p->next;						//��p��ָ���򸳸�s��ָ����
//	p->next = s;							//p��ָ����ָ��s
//	return true;
//}
//
//bool ListDelete(LinkList &L,int i)			//ɾ����i�����
//{
//	Lnode* p = L;
//	int j = 0;
//	while (p != NULL && j < i-1)
//	{
//		p = p->next;
//		j++;
//	}
//	if (p == NULL || j > i - 1)
//		return false;
//	Lnode* s = new Lnode;
//	s = p->next;
//	p->next = s->next;
//	delete s;
//	
//	return true;
//}
//
//void CreatList(LinkList& L, int n)			//ͷ�巨����������
//{
//	L = new Lnode;
//	L->next = NULL;
//	for (int i = n; i >0; i--)
//	{
//		Lnode* p = new Lnode;
//		cin >> p->data;
//		p->next = L->next;					//���뵽��ͷ
//		L->next = p;
//	}
//}
//
//void x(LinkList& L, int n)	//β�巨����������
//{
//	L = new Lnode;
//	L->next = NULL;
//	Lnode* q = L;
//	for (int i = n; i > 0; i--)
//	{
//		Lnode* p = new Lnode;
//		cin >> p->data;
//		p->next = NULL;					
//		q->next = p;
//		q = p;
//	}
//}
//
//int main()
//{
//	LinkList L;						//��������
//	Lnode* p;						//������ָ��
//
//	InitLinkList(L);
//
//	x(L, 3);
//
//	cout << L->next->data << endl;
//
//	cout << L->next->next->data << endl;
//
//	cout << L->next->next->next->data << endl;
//
//	system("pause");
//	return 0;
//}