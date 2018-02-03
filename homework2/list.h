#define MAXSIZE 10

typedef struct
{
  int data[MAXSIZE];
  int len;
}list;

void init_list(list *p);

void mergelist(list *la,list *lb,list *lc);

void delete_A_B(list *pA,list *pB);

bool delete_pos(list *plist, int pos);//8.根据位置删除某个元素

bool insert(list *p, int pos, int value);

void show(list *p);