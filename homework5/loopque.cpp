#include"loopque.h"

void init_que(loop_que * q)  //��ʼ���ն���
{
	q->head =q->tail = 0;
}

void clear_queue(loop_que * q)   //��ն���
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

bool is_empty(loop_que * q)  //�ж��Ƿ�Ϊ�ն���
{
	return (q->head == q->tail);
}
   
bool is_full(loop_que *q)
{
  return ((q->tail % MAXSIZE) == q->head);
}
bool en_queue(loop_que *q,QElemType value)   //���
{
  
	q->data[q->tail] = value;   
	q->tail = (q->tail + 1) % MAXSIZE;        //�������ö�βָ��
	if(is_full(q))
	   return false;
	else
	return true;
}

int de_queue(loop_que *q)  //����
{
  if(is_empty(q))
	  return -1;
  int temp = q->data[q->head];
  q->head = (q->head +1) % MAXSIZE;   //�������ö�ͷָ��
  return temp;
}

int get_head(loop_que *q)   //��ö�ͷԪ�أ�
{
    if(is_empty(q))
	  return -1;
	else
	return q->data[q->head];
}



