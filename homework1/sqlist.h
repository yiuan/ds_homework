#define MAXSIZE 10

typedef struct sqlist
{
   int data[MAXSIZE];
   int len;
}list;


void init_sqlist( sqlist *p);

void clear_sqlist(sqlist *p);

bool is_empty(sqlist *p);

bool is_full(sqlist *p);

int get_length(sqlist *p);

bool insert(sqlist *p, int pos, int value);

bool insert_head(sqlist *p,int value);

bool insert_tail(sqlist *p,int value);

bool delete_value(sqlist *p,int value);

bool delete_pos(sqlist *p, int pos);

int search(sqlist *p, int key);

void show(sqlist *p);

bool get_elem(sqlist *p, int pos, int *e);