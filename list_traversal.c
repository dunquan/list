//    ���������������
void TraverseList(PNode List) {
    PNode P = List->Next;    //    �׽ڵ㸳ֵ����ʱ�ڵ�P
    printf("���������ֵΪ��");
    if (P == NULL)
        printf("����Ϊ��");
    while (P != NULL)        //����ʱ�ڵ�P��Ϊβ�ڵ�ʱ�������ǰ�ڵ�ֵ 
    {
        printf("%d ", P->Element);
        P = P->Next;
    }
    printf("\n");
}