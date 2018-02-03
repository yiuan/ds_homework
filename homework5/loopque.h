#define MAXSIZE 10
typedef int QElemType;
typedef struct _loop_que
{
  QElemType data[MAXSIZE];
  QElemType head;
  QElemType tail;
}loop_que;

void init_que(loop_que *q);
bool is_full(loop_que *q);
bool is_empty(loop_que * q);
void clear_queue(loop_que * q);
bool en_queue(loop_que *q,QElemType value);
int de_queue(loop_que *q);
int get_head(loop_que *q);