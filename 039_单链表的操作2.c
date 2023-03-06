
/*
// 节点类型声明:
typedef struct _ListNode
{
    int          value;
    struct _ListNode* next;
}ListNode;
*/
// 在链表的末尾, 插入一个元素 n,  返回头节点地址
ListNode* push_back(ListNode* header, int n)
{
  // TODO: 请实现此函数
   	ListNode* p, * s;
  	if(header==NULL)
    {
        header = (ListNode*)malloc(sizeof(ListNode));
      	header->next=(ListNode*)malloc(sizeof(ListNode));
       	header->next->next=NULL;
		header->next->value=n;
    }
  if(header!=NULL)
  {
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
        p ->next = NULL;
      	free(p);
    }
  }
  return header->next;
}
// 查询元素n, 返回n第一次出现的节点地址
ListNode* search(ListNode* header, int n)
{
    ListNode* p;
     p=header;
    while (p->value!=n)
    {
      p=p->next;
    }
  return p;
   
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
        p ->next= node->next;
      node=NULL;
    }
    return header;
}
