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
ListNode* create_list(int a[], int size )
{\
  	ListNode*header=(ListNode*)malloc(sizeof(ListNode));
  	ListNode*s,*r=header;
    if(size==0)
    {
      	header->next=NULL;
    }// TODO: 请实现创建单链表, 并返回单链表第一个节点的地址
  	int i=0;
  	while(size)
    {
      s=(ListNode*)malloc(sizeof(ListNode));
      s->next=NULL;
      s->value=a[i];
      i++;
      r->next=s;
      size--;
    }
  return (header->next);
}
