/*
// ListNode 声明如下:
typedef struct _ListNode
{
    int                  value;   
    struct _ListNode    *next;
}ListNode;
*/
// 参数说明:
//    a  数组
//    size 数组a的长度
// 函数返回值:
//    单链表第一个节点的地址, 如果 size 为 0, 则返回 NULL
ListNode* create_list(int a[], int size)
{
  if(size==0)
  {
    return NULL;
  }
  ListNode* header ;
   header = (ListNode*)malloc(sizeof(ListNode));
  ListNode* p=header ;
    // TODO: 请实现创建单链表, 并返回单链表第一个节点的地址 
    // 接收元
        for (int i = 0; i < size; i++)
        {
            int value = a[i];
            p->next = (ListNode*)malloc(sizeof(ListNode));
            p->next->value = value;
            p = p->next;
        }
    return header->next;
}
