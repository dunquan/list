//����ɾ������������
void DeleteTheList(PNode List) {
    PNode P, Tmp;
    P = List->Next;    //����ָ��Pָ������Ҫɾ��������List�ĵ�һ����ڵ�
    List->Next = NULL;
    while (P != NULL) {
        Tmp = P->Next;        //��ʱTmpָ��Ҫɾ���Ľڵ���¸��ڵ�
        free(P);    //�ͷ�ָ��Pָ��Ľڵ�
        P = Tmp;    //���¸�ֵ
    }
    printf("ɾ������ɹ���\n");
}



////////////////////ɾ�������е�Ԫ��
//   ����ɾ������Ԫ�غ���
//    ɾ�������еĵ�pos�ڵ�
void DeleteList(PNode List, int pos) {
    int position = 0;
    PNode P = List;    //    ����һ��ָ��pָ������ͷ�ڵ�
                    //    Ѱ��pos�ڵ�λ�õ�ǰ���ڵ�
    while (P != NULL&&position < pos - 1) {
        P = P->Next;
        ++position;
    }

    //    ɾ���ڵ�
    PNode Tmp = P->Next;    //    ������ʱָ��Tmpָ��Ҫɾ���Ľڵ�
    P->Next = Tmp->Next;    //    ʹҪɾ���ڵ��ǰ�����ָ��������ڵ�
    free(Tmp);    //    �ͷ�ɾ���ڵ���ڴ�ռ䣬��ֹ�ڴ�й©
    Tmp = NULL;    //    ʹqָ���ָ�룬��ֹ����Ұָ��
}