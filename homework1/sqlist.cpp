#include"sqlist.h"
#include<assert.h>
#include<stdlib.h>
#include<stdio.h>
void init_sqlist(sqlist *p) //1.初始化
{
   assert(p != NULL);
   for(int i =0;i<MAXSIZE;i++)
   {
    p->data[i] = 0;
   }
   p->len=0;
}

void clear_sqlist(sqlist *p) //3.清零顺序表，将顺序表清空
{
  for(int i =0;i<MAXSIZE;i++)
  {
    p->data[i] = 0;
  }
  p->len = 0;
}

bool is_empty(sqlist *p)  //4.顺序表是否为空表，空表返回 true，否则返回 false
{
   return ( p->len != 0);
}

bool is_full(sqlist *p) //4.顺序表是否为满
{
	return (p->len >= MAXSIZE);
}

bool insert(sqlist *p, int pos, int value)//向某位置插入元素
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

bool insert_head(sqlist *p,int value)  //根据头位置向顺序表中插入元素
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

bool insert_tail(sqlist *p,int value)////根据尾位置向顺序表中插入元素
{
  if(!is_full(p))
  {
    p->data[p->len] = value;  
 
     return true;
  }
  else
	  return false;
}

int get_length(sqlist *p) //5.获得顺序表长度
{
	return p->len;
}

bool delete_value(sqlist *p,int value)  //7.根据数据项删除顺序表中元素*********
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

bool delete_pos(sqlist *p, int pos)//8.根据位置删除顺序表中元素
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


