typedef int ElemType;

typedef struct loop_list
{
  int data;
  struct loop_list *next;
}looplist;

void init_list(looplist *pd);

void insert_head(looplist *pd,ElemType value);

int delete_number(looplist *pd);

void show(looplist *pd);