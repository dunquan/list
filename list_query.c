//    ���������ѯ����
PNode FindList(PNode List) {
    PNode P = List->Next;    //    ������ʱָ��Pָ���׽ڵ�ĵ�ַ
    int num = 0;    //    ���ڼ�¼����ڵ�λ��
    int val = 0;    //    ���ڴ��Ҫ��ѯ��ֵ
    printf("������Ҫ��ѯ������");
    scanf_s("%d", &val);    //    ����Ҫ��ѯ����ֵ
    while (P != NULL&&P->Element != val) {
        P = P->Next;
        ++num;
    }
    if (P != NULL)
        printf("�ҵ��Ľڵ�Ϊ��%d", num + 1);
    else
        printf("�Ҳ����ýڵ�");
    printf("\n");
    return P;
}