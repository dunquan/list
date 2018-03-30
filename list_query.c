//    定义链表查询函数
PNode FindList(PNode List) {
    PNode P = List->Next;    //    定义临时指针P指向首节点的地址
    int num = 0;    //    用于记录链表节点位置
    int val = 0;    //    用于存放要查询的值
    printf("请输入要查询的数：");
    scanf_s("%d", &val);    //    输入要查询的数值
    while (P != NULL&&P->Element != val) {
        P = P->Next;
        ++num;
    }
    if (P != NULL)
        printf("找到的节点为：%d", num + 1);
    else
        printf("找不到该节点");
    printf("\n");
    return P;
}