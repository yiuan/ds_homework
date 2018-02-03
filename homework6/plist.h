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

void init_sqlist(sqlist *plist);//1.初始化

void destroy_sqlist(sqlist *plist);//2.销毁顺序表

void clear_sqlist(sqlist *plist);//3.清空顺序表

bool is_empty(sqlist *plist);//4.顺序表是否为空，空true，不为空false

bool is_full(sqlist *plist);//判断顺序表是否已满，满true，有余false

int get_length(sqlist *plist);//5.获取顺序表的长度

void incr_list(sqlist *plist);

bool insert_head(sqlist *p,ElemType value);

bool insert_tail(sqlist *p,ElemType value);

bool insert(sqlist *plist, int pos, ElemType val);//6.在顺序表中插入元素

bool delete_value(sqlist *plist, ElemType val);//7.删除某个元素

bool delete_pos(sqlist *plist, ElemType pos);//8.根据位置删除某个元素

int search(sqlist *plist, ElemType key);//9.找到元素为key

void show(sqlist *plist);//10.打印顺序表的元素

bool get_elem(sqlist *plist, int pos, ElemType *e);//11.获得顺序表第 pos 个位置的元素返回给 e

