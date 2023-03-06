// 节点类型声明:
typedef struct _ListNode
{
    int          value;
    struct _ListNode* next;
}ListNode;
// 在链表的末尾, 插入一个元素 n,  返回头节点地址
ListNode* push_back(ListNode* header, int n)
{
  // TODO: 请实现此函数
    header = (ListNode*)malloc(sizeof(ListNode));
   	ListNode* p, * s;
    s = header;
    while (s->next != NULL)
    {
        s = s->next;
    }
    if (s->next == NULL)
    {
      	p= (ListNode*)malloc(sizeof(ListNode));
        p->value = n;
        s->next = p;
        p - next = NULL;
    }
}
// 查询元素n, 返回n第一次出现的节点地址
ListNode* search(ListNode* header, int n)
{
   	header = (ListNode*)malloc(sizeof(ListNode));
    ListNode* p；
     P= header->next;
    while (p != NULL && p->value ！= n)
    {
        p = p->next;
    }
    if (p->value = n)
    {
        retrun p;
    }
}
// 删除链表中 node节点, 返回头节点地址
ListNode* delete_node(ListNode* header, ListNode* node)
{
  	header = (ListNode*)malloc(sizeof(ListNode));
    ListNode* p = header;// TODO: 请实现此函数
    p = header->next;
    while (p->next != node)
    {
        p = p->next;
    }
    if (p->next == node)
    {
        p - next= node->next;
        free(node)
    }
    return header
}
