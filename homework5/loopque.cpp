#include"loopque.h"

void init_que(loop_que * q)  //初始化空队列
{
	q->head =q->tail = 0;
}

void clear_queue(loop_que * q)   //清空队列
{
  if(!is_empty(q))
  {
    for(int i=0;i<MAXSIZE;i++)
	{
		q->data[i] = 0;
	}
	  q->head = 0;
	  q->tail = 0;
  }
}

bool is_empty(loop_que * q)  //判断是否为空队列
{
	return (q->head == q->tail);
}
   
bool is_full(loop_que *q)
{
  return ((q->tail % MAXSIZE) == q->head);
}
bool en_queue(loop_que *q,QElemType value)   //入队
{
  
	q->data[q->tail] = value;   
	q->tail = (q->tail + 1) % MAXSIZE;        //重新设置队尾指针
	if(is_full(q))
	   return false;
	else
	return true;
}

int de_queue(loop_que *q)  //出队
{
  if(is_empty(q))
	  return -1;
  int temp = q->data[q->head];
  q->head = (q->head +1) % MAXSIZE;   //重新设置队头指针
  return temp;
}

int get_head(loop_que *q)   //获得队头元素：
{
    if(is_empty(q))
	  return -1;
	else
	return q->data[q->head];
}



