typedef int Elemtype;

typedef struct Node
{
  Elemtype data;
  struct Node *next;
}node;

void init_list(node *phead);

bool is_empty(node *phead);

int get_length(node *phead);

bool insert_head(node *phead, Elemtype value);

bool insert_tail(node *phead, Elemtype value);

bool destory_list(node *phead);

void show_list(node *phead);

bool delete_listvalue(node *phead,Elemtype value);

bool delete_listpos(node *phead,int pos);

node *get_list(node *phead,Elemtype value);

bool insert_list(node *phead,int pos,Elemtype value);

node *get_list(node *phead,int pos,Elemtype value);

bool delete_head(node *phead);

bool delete_tail(node *phead); 

