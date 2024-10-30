//#include <iostream>
//#include <cstring>
//#define _CRT_SECURE_NO_WARNINGS 
//using namespace std;
//
//typedef struct
//{
//    int weight;
//    int parent, lch, rch;
//} HTNode, * HuffmanTree;
//
//typedef char** HuffmanCode;         //��ά�ַ����飬ָ��ÿ���ַ�����ͷָ��(��Ź���������)
//
//void Select(HuffmanTree HT, int n, int& s1, int& s2)
//{
//    int min1 = INT_MAX, min2 = INT_MAX;
//    s1 = s2 = -1;
//
//    for (int i = 0; i < n; ++i)
//    {
//        if (HT[i].parent == 0)
//        {
//            if (HT[i].weight < min1)
//            {
//                min2 = min1;
//                s2 = s1;
//                min1 = HT[i].weight;
//                s1 = i;
//            }
//            else if (HT[i].weight < min2)
//            {
//                min2 = HT[i].weight;
//                s2 = i;
//            }
//        }
//    }
//}
//
//void CreateHuffmanTree(HuffmanTree& HT, int n)      //��������
//{
//    if (n <= 1)
//        return;
//
//    int m = 2 * n - 1;
//    HT = new HTNode[m];
//
//    for (int i = 0; i < m; ++i)
//    {
//        HT[i].weight = 0;
//        HT[i].parent = 0;
//        HT[i].lch = 0;
//        HT[i].rch = 0;
//    }
//
//    cout << "������ " << n << " ��Ȩֵ: ";
//    for (int i = 0; i < n; ++i)
//    {
//        cin >> HT[i].weight;
//    }
//
//    for (int i = n; i < m; ++i)
//    {
//        int s1, s2;
//        Select(HT, i, s1, s2);
//        HT[s1].parent = i;
//        HT[s2].parent = i;
//        HT[i].lch = s1;
//        HT[i].rch = s2;
//        HT[i].weight = HT[s1].weight + HT[s2].weight;
//    }
//}
//
//void CreateHuffmanCode(HuffmanTree& HT, HuffmanCode& HC, int n) //����������
//{
//    HC = new char* [n];         // ����n���ַ������ͷָ��ʸ��
//    char* cd = new char[n];     //������ʱ��ű���Ķ�̬����ռ�
//    cd[n - 1] = '\0';           // ���������
//    for (int i = 0; i < n; ++i) // ����ַ������������
//    {
//        int start = n - 1;
//        int c = i;
//        int f = HT[c].parent;
//        while (f != 0)          // ��Ҷ�ӽ�㿪ʼ���ϻ��ݣ�ֱ�������
//        {
//            start--;            // ����һ��start��ǰָһ��λ��
//            if (HT[f].lch == c) // ���c�ǵ����ӣ������ɴ���0
//                cd[start] = '0';
//            else                // ���c�ǵ��Һ��ӣ������ɴ���1
//                cd[start] = '1';
//            c = f;              // �������ϻ���
//            f = HT[f].parent; 
//        }                       // ����ڸ��ַ��ı���
//        HC[i] = new char[n - start];                    // Ϊ�ڸ��ַ����������ռ�
//        strcpy(HC[i], &cd[start]);    // ����õı������ʱ�ռ�cd���Ƶ�HC�ĵ�ǰ����
//    }
//
//    delete[] cd;
//}
//
//int main()
//{
//    HuffmanTree H = nullptr;
//    int n;
//
//    cout << "������Ȩֵ�ĸ���: ";
//    cin >> n;
//
//    CreateHuffmanTree(H, n);
//
//    cout << "��������������ɡ�" << endl;
//    for (int i = 0; i < 2 * n - 1; ++i)
//    {
//        cout << "��� " << i << " - weight: " << H[i].weight << ", parent: " << H[i].parent << ", lch: " << H[i].lch << ", rch: " << H[i].rch << endl;
//    }
//
//    HuffmanCode HC;
//    CreateHuffmanCode(H, HC, n);
//
//    cout << "������������ɡ�" << endl;
//    for (int i = 0; i < n; ++i)
//    {
//        cout << "�ַ� " << i << " �Ĺ���������: " << HC[i] << endl;
//        delete[] HC[i];
//    }
//
//    delete[] HC;
//    delete[] H;
//    system("pause");
//    return 0;
//}
