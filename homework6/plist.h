#define MAXSIZE 10
#define INIT_SIZE 5
#define INCR_SIZE 5

typedef int ElemType;

typedef struct list
{
   ElemType *data;
   ElemType len;
   ElemType listsize;
 }sqlist;

void init_sqlist(sqlist *plist);//1.��ʼ��

void destroy_sqlist(sqlist *plist);//2.����˳���

void clear_sqlist(sqlist *plist);//3.���˳���

bool is_empty(sqlist *plist);//4.˳����Ƿ�Ϊ�գ���true����Ϊ��false

bool is_full(sqlist *plist);//�ж�˳����Ƿ���������true������false

int get_length(sqlist *plist);//5.��ȡ˳���ĳ���

void incr_list(sqlist *plist);

bool insert_head(sqlist *p,ElemType value);

bool insert_tail(sqlist *p,ElemType value);

bool insert(sqlist *plist, int pos, ElemType val);//6.��˳����в���Ԫ��

bool delete_value(sqlist *plist, ElemType val);//7.ɾ��ĳ��Ԫ��

bool delete_pos(sqlist *plist, ElemType pos);//8.����λ��ɾ��ĳ��Ԫ��

int search(sqlist *plist, ElemType key);//9.�ҵ�Ԫ��Ϊkey

void show(sqlist *plist);//10.��ӡ˳����Ԫ��

bool get_elem(sqlist *plist, int pos, ElemType *e);//11.���˳���� pos ��λ�õ�Ԫ�ط��ظ� e

