//     ����������뺯��
//    ������λ�õ�pos�ڵ�ǰ�����������val�Ľڵ�
void InsertList(PNode List, int pos, int val) {
    int position = 0;
    PNode P = List;    //    ����ڵ�pָ��ͷ�ڵ�
                    //    Ѱ��pos�ڵ��ǰ�����
    while (P != NULL&&position<pos - 1)
    {
        P = P->Next;
        ++position;
    }
    PNode Tmp = (PNode)malloc(sizeof(Node));    //    ����һ����ʱ�ڵ������洢Ҫ���������
    if (Tmp == NULL)
    {
        printf("�ڴ����ʧ�ܣ�");
        exit(-1);
    }
    //    ����ڵ�
    Tmp->Element = val;
    Tmp->Next = P->Next;
    P->Next = Tmp;
}