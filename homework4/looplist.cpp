#include"looplist.h"
#include<stdlib.h>
#include<stdio.h>

void init_list(looplist *pd)
{
	pd->data = 0;
	pd->next = pd;
}

void insert_head(looplist *pd,ElemType value)
{
  looplist *newnode = (looplist *)malloc(sizeof(ElemType));
  newnode->data = value;
  looplist *p = pd;

  while(p->next != pd)
  {
	  p = p->next;
  }
  p->next = newnode;
  newnode->next = pd;
}

void insert_list(looplist *pd,int pos,ElemType value)
{
  looplist *newnode = (looplist *)malloc(sizeof(ElemType));
  newnode->data = value;
  looplist *p = pd;

  while(p->next != pd)
  {
	  p = p->next;
  }
  p->next = newnode;
  newnode->next = pd;
}

void show(looplist *pd)
{
	looplist *p = pd;
	while(p->next != pd)
	{
		p = p->next;
		printf("%d  ",p->data);
	}
}

int delete_number(looplist *pd)
{	
  looplist *p = pd;
  while(p->next->next != pd)
  {
     for(int i=0;i<2;i++)
      {
		 p = p->next;
		 if(p == pd || p->next ==pd)
	     {
			p = p->next;
	      }
		 /*if(p == pd)  
		 {
			 p = p->next;
		 }
		 if(p->next ==pd)
		 {
			 p = p->next->next;
		 }*/
    }
	looplist *q = p->next;
	p->next = q->next;
	if(p == pd || p->next ==pd)
	 {
		   p = p->next;
	 }
   
  }
  return p->data;
}