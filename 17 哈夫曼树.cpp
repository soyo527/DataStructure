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
//typedef char** HuffmanCode;         //二维字符数组，指向每个字符串的头指针(存放哈夫曼编码)
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
//void CreateHuffmanTree(HuffmanTree& HT, int n)      //哈夫曼树
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
//    cout << "请输入 " << n << " 个权值: ";
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
//void CreateHuffmanCode(HuffmanTree& HT, HuffmanCode& HC, int n) //哈夫曼编码
//{
//    HC = new char* [n];         // 分配n个字符编码的头指针矢量
//    char* cd = new char[n];     //分配临时存放编码的动态数组空间
//    cd[n - 1] = '\0';           // 编码结束符
//    for (int i = 0; i < n; ++i) // 逐个字符求哈夫曼编码
//    {
//        int start = n - 1;
//        int c = i;
//        int f = HT[c].parent;
//        while (f != 0)          // 从叶子结点开始向上回溯，直到根结点
//        {
//            start--;            // 回溯一次start向前指一个位置
//            if (HT[f].lch == c) // 结点c是的左孩子，则生成代码0
//                cd[start] = '0';
//            else                // 结点c是的右孩子，则生成代码1
//                cd[start] = '1';
//            c = f;              // 继续向上回溯
//            f = HT[f].parent; 
//        }                       // 求出第个字符的编码
//        HC[i] = new char[n - start];                    // 为第个字符串编码分配空间
//        strcpy(HC[i], &cd[start]);    // 将求得的编码从临时空间cd复制到HC的当前行中
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
//    cout << "请输入权值的个数: ";
//    cin >> n;
//
//    CreateHuffmanTree(H, n);
//
//    cout << "哈夫曼树构建完成。" << endl;
//    for (int i = 0; i < 2 * n - 1; ++i)
//    {
//        cout << "结点 " << i << " - weight: " << H[i].weight << ", parent: " << H[i].parent << ", lch: " << H[i].lch << ", rch: " << H[i].rch << endl;
//    }
//
//    HuffmanCode HC;
//    CreateHuffmanCode(H, HC, n);
//
//    cout << "哈夫曼编码完成。" << endl;
//    for (int i = 0; i < n; ++i)
//    {
//        cout << "字符 " << i << " 的哈夫曼编码: " << HC[i] << endl;
//        delete[] HC[i];
//    }
//
//    delete[] HC;
//    delete[] H;
//    system("pause");
//    return 0;
//}
