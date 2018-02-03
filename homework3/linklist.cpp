#include<stdlib.h>
#include<stdio.h>
#include"linklist.h"
#include<assert.h>
void init_list(node *phead)//1.
{
  phead->next = NULL;
}

bool is_empty(node *phead)//2.
{
	return phead->next == NULL;
}

int get_length(node *phead) //3.***********
{
	node *p = phead;
	int i=0;
    while(p != NULL)
    {
      i++;
	  p = p->next;
    }
  return i;
}

bool insert_head(node *phead, Elemtype value)//4.
{
  node *newnode = (node *)malloc(sizeof(Elemtype));
  newnode->data = value;
  
  newnode->next = phead->next;
  phead->next = newnode;
  return true;
}

bool insert_tail(node *phead, Elemtype value) //5.
{
  node *newnode = (node *)malloc(sizeof(Elemtype));
  newnode->data = value;
  node *p = phead;
  
  while(p->next != NULL)  
  {
	  p = p->next;
  } 
  p = newnode;
  newnode->next = NULL;
  
  return true;
}

bool destory_list(node *phead)//6.**************边遍历边删除
{
	node *p = phead->next;
   node *q;
  while(p != NULL)
  {
	  q = p->next;
	  free(p);
      p = q;
  } 
  return true;
}

void show_list(node *phead)//7.
{
  assert(phead !=NULL);
  node *p = phead->next;
  while( p != NULL)
  {
	  
      printf("%d ",p->data);
	  p = p->next;
  } 
}

bool delete_listvalue(node *phead,Elemtype value)//8.***********
{
  node *p,*q;
  p = phead;
  while(p->next != NULL)
  {
     if(p->data == value)
	 {
		 q = p->next;
		 p->next = q->next;
		
	    free(q); 
	 } 
	 return true;
	 p = p->next;
  } 
  return false;
}

node *get_list(node *phead,Elemtype value)//9.
{
  node *p = phead;
  while(p->next != NULL)
  {
     if(p->data !=value)
		  p=p->next;
	 else 
		  break;
  }
    return p;
}

bool delete_listpos(node *phead,int pos)//10.
{
  int i= 0;
  node *pre = phead;
  node *t;
  while(pre->next !=NULL && i<pos-1)
  {
	  pre = pre->next;
      i++;
  }
  t = pre->next;
  pre->next = t->next;
  free(t);
  return true;
}

bool insert_list(node *phead,int pos,Elemtype value)//11.根据位置插入节点
{
    if(pos <=0)
		return false;
    node *p = phead;
	int k = 0;
	while(p != NULL && k<pos-1)
	{
		k++;
		p = p->next;
		
	}
	if(p == NULL)
	{
	  printf("插入位置不合法！");
	  return false;
	}
    
	node *newnode = (node *)malloc(sizeof(Elemtype));
	newnode->data = value;
	newnode->next = p->next;
	p->next = newnode;
	return true;
}

node *get_list(node *phead,int pos,Elemtype value)  //12.根据位置获得结点
{
  node *p=phead;

  int i=0;
 
  while(p->next && i<=pos)
  {
	  p = p->next;
	  if(i == pos)
       p->data = value;
      return p;
  }
  return NULL;
}

bool delete_head(node *phead)//13.头删法
{
	node *p = phead;
	node *q;
	if(p->next == NULL)
		return false;
	else
		q = p->next;
		p->next =q->next; 
		free(q);
		return true;
}

bool delete_tail(node *phead)//14.尾删法
{
  if(phead == NULL)
	  return false;
  node *p = phead;
 
  while(p->next != NULL)
  {
	  p = p->next;
  }
  free(p);
  return true;
}