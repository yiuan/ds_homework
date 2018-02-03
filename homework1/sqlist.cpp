#include"sqlist.h"
#include<assert.h>
#include<stdlib.h>
#include<stdio.h>
void init_sqlist(sqlist *p) //1.��ʼ��
{
   assert(p != NULL);
   for(int i =0;i<MAXSIZE;i++)
   {
    p->data[i] = 0;
   }
   p->len=0;
}

void clear_sqlist(sqlist *p) //3.����˳�����˳������
{
  for(int i =0;i<MAXSIZE;i++)
  {
    p->data[i] = 0;
  }
  p->len = 0;
}

bool is_empty(sqlist *p)  //4.˳����Ƿ�Ϊ�ձ��ձ��� true�����򷵻� false
{
   return ( p->len != 0);
}

bool is_full(sqlist *p) //4.˳����Ƿ�Ϊ��
{
	return (p->len >= MAXSIZE);
}

bool insert(sqlist *p, int pos, int value)//��ĳλ�ò���Ԫ��
{
	if(p->len == 0  || pos<1)  
	return false;
	
	for(int i = pos-1;i >=p->len ;i--)
	{
		p->data[i+1] = p->data[i];
	}
	 p->data[pos-1] = value; 
	 p->len++;
     return true;  
     
}

bool insert_head(sqlist *p,int value)  //����ͷλ����˳����в���Ԫ��
{
	if( is_full(p))
	{
	  return false;
	}
	for(int i=p->len;i > 0;i--)
	{
		p->data[i-1] = p->data[i];
	 }
	   p->data[0] = value; 
	   p->len++;
       return true;   
}

bool insert_tail(sqlist *p,int value)////����βλ����˳����в���Ԫ��
{
  if(!is_full(p))
  {
    p->data[p->len] = value;  
 
     return true;
  }
  else
	  return false;
}

int get_length(sqlist *p) //5.���˳�����
{
	return p->len;
}

bool delete_value(sqlist *p,int value)  //7.����������ɾ��˳�����Ԫ��*********
{
    int j=0,i=0;
	assert(p != NULL);
	while(i < p->len)
	{
		if(p->data[i] == value)
        {
			for(j=i;j<p->len;j++)
		    {
			   p->data[j] = p->data[j+1];
		    }
		}	
		i++;
    }
	p->len--;
  return true;
}

bool delete_pos(sqlist *p, int pos)//8.����λ��ɾ��˳�����Ԫ��
{
	int i;
	if(p->len == 0 || pos<1 || pos >p->len)
		return false;
	
    if(pos < p->len)
    {
		for(i=pos;i<p->len;i++)
		{
			p->data[i] = p->data[i+1];
		}
    }
	p->len--;
  return true;
}

int search(sqlist *p, int key)
{
  int i;
	assert(p != NULL);
  for(i=0;i<=p->len;i++)
	{
		if(p->data[i] == key);
		{
		  return i;
		}
	}
  return -1;
}

void show(sqlist *p)
{
	assert(p != NULL);
	int i;
	for(i=0;i<=p->len;i++)
	{
		printf("%d ",p->data[i]);
	}
}


bool get_elem(sqlist *p, int pos, int *e)
{
  assert(p != NULL);
 
	if (pos < 0 || pos >= p->len)
	{
		return false;
	}
		*e = p->data[pos];
    return true;	
}


