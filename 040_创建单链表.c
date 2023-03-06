// ListNode 声明如下:
typedef struct _ListNode
{
    int                  value;
    struct _ListNode* next;
}ListNode;
// 参数说明:
//    a  数组
//    size 数组a的长度
// 函数返回值:
//    单链表第一个节点的地址, 如果 size 为 0, 则返回 NULL
ListNode* create_list(int a[], int size)
{

   // TODO: 请实现创建单链表, 并返回单链表第一个节点的地址
    header= (ListNode*)malloc(sizeof(ListNode));
    ListNode* s, * r = header;
    if (size == 0)
    {
        return NULL;
    }
    while (size)
    {
        s = (ListNode*)malloc(sizeof(ListNode));
        r->next = s;
        size--;
    }
    s->next = NULL;
    return (header - next);

}