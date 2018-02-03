#include<stdlib.h>
#include"plist.h"
#include<stdio.h>
#include<assert.h>

void init_sqlist(sqlist *plist) //1.初始化
{
	assert(plist != NULL);

	plist->data = (ElemType *)malloc(MAXSIZE * sizeof(ElemType));
	assert(plist->data != NULL);
    for(int i = 0;i<plist->len;i++)
	{
	  plist->data[i] = 0;
	}
	plist->len = 0;
	plist->listsize = INCR_SIZE;
}

void destroy_sqlist(sqlist *plist)//2.销毁顺序表
{
	free(plist->data);
	plist->len = 0;
	plist->data  = NULL;
}

void clear_sqlist(sqlist *plist)//3.清空顺序表
{
   assert(plist != NULL);

	for(int i = 0;i<MAXSIZE;i++)
   {
     plist->data[i] = 0;
   }
   plist->len = 0;
}

bool is_empty(sqlist *plist)//4.顺序表是否为空，空true，不为空false
{
  return ( plist->len == 0);
}

bool is_full(sqlist *plist)//判断顺序表是否已满，满true，有余false
{
	
	return (plist->len == plist->listsize);
}

int get_length(sqlist *plist)//5.获取顺序表的长度
{
	return plist->len; //******************
}

void incr_list(sqlist *plist)
{
	 plist->data = (ElemType *)realloc(plist->data,plist->listsize*2*sizeof(ElemType));
	 assert(plist->data != NULL);
	 plist->listsize *= 2;
}

bool insert_head(sqlist *p,ElemType value)  //根据头位置向顺序表中插入元素
{
	if( is_full(p))
	{
	  return false;
	}
	for(int i = p->len;i >= 0;i--)
	{
		p->data[i] = p->data[i+1];
	 }
	   p->data[0] = value; 
	   p->len++;
       return true; 
}

bool insert_tail(sqlist *p,ElemType value)
{
  if(!is_full(p))
  {
	 
	  p->data[p->len++] = value;  
	 return true;   
  }
  else
	  return false;
}

bool insert(sqlist *plist, ElemType pos, ElemType val)//6.在顺序表中插入元素
{
	if(plist->len == 0 || pos>plist->len || pos<1)  
	return false;  //抛出异常
     
	if(is_full(plist))
	{
	  incr_list(plist);
	}
   
	for(int i = plist->len;i >= pos-1;i--)
	{
		plist->data[i+1] = plist->data[i];
	}
	 plist->data[pos-1] = val; 
	 plist->len++;
     return true;  
}

bool delete_value(sqlist *plist, ElemType val)//7.删除某个元素
{
   int i=0,j;
	if(plist->len == 0)  
	return false;  //抛出异常
   
	if(plist->data[i] != val)
	{
	   i++;
	 }
	for(j=i;j<=plist->len;j++)
	{
		plist->data[j] = plist->data[j+1];
	}
	plist->len--;
	return true;
}

bool delete_pos(sqlist *plist, ElemType pos)//8.根据位置删除某个元素
{
    int j;
	if(plist->len == 0 || pos>plist->len || pos<1)  
	return false;  //抛出异常
    
    for(j=pos;j<=plist->len;j++)
	{
		plist->data[j-1] = plist->data[j];
	}
	plist->len--;
	return true;
}

int search(sqlist *plist, ElemType key)//9.找到元素为key
{
	int i=0;
	while(i<=plist->len && plist->data[i] != key)
	  i++;

	if(i<=plist->len)
		return i;
	else
   return -1;
}

void show(sqlist *plist)//10.打印顺序表的元素
{
	assert(plist != NULL);

	for(int i=0;i < plist->len;i++)
	{
	  printf("%d  ",plist->data[i]);
	}
}

bool get_elem(list *plist, ElemType pos, ElemType *e)//11.获得顺序表第 pos 个位置的元素返回给 e
{
	if(plist->len == 0 || pos>plist->len || pos<1)  
	return false;  //抛出异常

	if(pos<=plist->len)
	*e = plist->data[pos-1];
	return true;
}
