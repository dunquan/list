//     定义链表插入函数
//    在链表位置第pos节点前插入包含数据val的节点
void InsertList(PNode List, int pos, int val) {
    int position = 0;
    PNode P = List;    //    定义节点p指向头节点
                    //    寻找pos节点的前驱结点
    while (P != NULL&&position<pos - 1)
    {
        P = P->Next;
        ++position;
    }
    PNode Tmp = (PNode)malloc(sizeof(Node));    //    分配一个临时节点用来存储要插入的数据
    if (Tmp == NULL)
    {
        printf("内存分配失败！");
        exit(-1);
    }
    //    插入节点
    Tmp->Element = val;
    Tmp->Next = P->Next;
    P->Next = Tmp;
}