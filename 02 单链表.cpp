//#include<iostream>
//using namespace std;
//
//typedef struct Lnode
//{
//	int data;
//	struct Lnode* next;
//}Lnode,*LinkList;
//
//void InitLinkList(LinkList& L)		//初始化
//{
//	L= new Lnode;					//生成新结点作头结点，用头指针L指向头结点
//	L->next = NULL;					//将头结点的指针域置空
//}
//
//bool IsEmpty(LinkList L)			//判空
//{
//	if (L->next = NULL)
//		return true;
//	return false;
//}
//
//void DestroyList(LinkList& L)		//单链表的销毁
//{
//	从头指针开始，依次释放所有结点
//	Lnode* p;						//定义一个新的指针p指向头结点
//	while(L!=NULL)
//	{
//		p = L;	
//		L = L->next;				//把头指针往后移动
//		delete p;					//删除p节点
//	}
//}
//
//void List(LinkList& L)				//清空单链表
//{
//	依次释放所有结点，并将仪结爲指针域设置为空(p指针一直指向首元结点)
//	Lnode* p = L->next;		//定义一个新的指针p指向首元结点
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
//int ListLength(LinkList L)			//求单链表长度
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
//bool GetElem(LinkList L, int i, int& e)//取单链表中第i个元素的内容
//{
//	int j = 1;
//	Lnode* p = L->next;
//	while (j < i && p != NULL)
//	{
//		p = p->next;
//		j++;
//	}
//	if (p == NULL || j > i)				//p为空表示i超出单链表范围，j>i表示i输入的值小于1
//		return false;
//	e = p->data;
//	return true;
//}
//
//Lnode* LocateElem_1(LinkList L, int e)	//按值查找(返回地址)
//{
//	Lnode* p = L->next;
//	while (p != NULL && p->data != e)
//		p = p->next;
//	return p;
//}
//
//int LocateElem_2(LinkList L, int e)		//按值查找(返回位置序号)
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
//bool ListInsert(LinkList& L, int i, int e)//在第i个结点前插入值为e的新结点
//{
//	Lnode* p = L;							//p要指向头结点，否则无法插入第一个元素
//	int j = 0;								//p在头结点位置，因此j=0
//	while (p != NULL && j < i-1)			//找到i-1的位置，i-1是要插入的位置的直接前驱
//	{
//		p = p->next;
//		j++;
//	}
//	if (p == NULL||j>i-1)
//		return false;
//	Lnode* s = new Lnode;
//	s->data = e;							//把e的值给到s
//	s->next = p->next;						//把p的指针域赋给s的指针域
//	p->next = s;							//p的指针域指向s
//	return true;
//}
//
//bool ListDelete(LinkList &L,int i)			//删除第i个结点
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
//void CreatList(LinkList& L, int n)			//头插法建立单链表
//{
//	L = new Lnode;
//	L->next = NULL;
//	for (int i = n; i >0; i--)
//	{
//		Lnode* p = new Lnode;
//		cin >> p->data;
//		p->next = L->next;					//插入到表头
//		L->next = p;
//	}
//}
//
//void x(LinkList& L, int n)	//尾插法建立单链表
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
//	LinkList L;						//定义链表
//	Lnode* p;						//定义结点指针
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