#include<stdlib.h>
#include"plist.h"
#include<stdio.h>
#include<assert.h>

void init_sqlist(sqlist *plist) //1.��ʼ��
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

void destroy_sqlist(sqlist *plist)//2.����˳���
{
	free(plist->data);
	plist->len = 0;
	plist->data  = NULL;
}

void clear_sqlist(sqlist *plist)//3.���˳���
{
   assert(plist != NULL);

	for(int i = 0;i<MAXSIZE;i++)
   {
     plist->data[i] = 0;
   }
   plist->len = 0;
}

bool is_empty(sqlist *plist)//4.˳����Ƿ�Ϊ�գ���true����Ϊ��false
{
  return ( plist->len == 0);
}

bool is_full(sqlist *plist)//�ж�˳����Ƿ���������true������false
{
	
	return (plist->len == plist->listsize);
}

int get_length(sqlist *plist)//5.��ȡ˳���ĳ���
{
	return plist->len; //******************
}

void incr_list(sqlist *plist)
{
	 plist->data = (ElemType *)realloc(plist->data,plist->listsize*2*sizeof(ElemType));
	 assert(plist->data != NULL);
	 plist->listsize *= 2;
}

bool insert_head(sqlist *p,ElemType value)  //����ͷλ����˳����в���Ԫ��
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

bool insert(sqlist *plist, ElemType pos, ElemType val)//6.��˳����в���Ԫ��
{
	if(plist->len == 0 || pos>plist->len || pos<1)  
	return false;  //�׳��쳣
     
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

bool delete_value(sqlist *plist, ElemType val)//7.ɾ��ĳ��Ԫ��
{
   int i=0,j;
	if(plist->len == 0)  
	return false;  //�׳��쳣
   
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

bool delete_pos(sqlist *plist, ElemType pos)//8.����λ��ɾ��ĳ��Ԫ��
{
    int j;
	if(plist->len == 0 || pos>plist->len || pos<1)  
	return false;  //�׳��쳣
    
    for(j=pos;j<=plist->len;j++)
	{
		plist->data[j-1] = plist->data[j];
	}
	plist->len--;
	return true;
}

int search(sqlist *plist, ElemType key)//9.�ҵ�Ԫ��Ϊkey
{
	int i=0;
	while(i<=plist->len && plist->data[i] != key)
	  i++;

	if(i<=plist->len)
		return i;
	else
   return -1;
}

void show(sqlist *plist)//10.��ӡ˳����Ԫ��
{
	assert(plist != NULL);

	for(int i=0;i < plist->len;i++)
	{
	  printf("%d  ",plist->data[i]);
	}
}

bool get_elem(list *plist, ElemType pos, ElemType *e)//11.���˳���� pos ��λ�õ�Ԫ�ط��ظ� e
{
	if(plist->len == 0 || pos>plist->len || pos<1)  
	return false;  //�׳��쳣

	if(pos<=plist->len)
	*e = plist->data[pos-1];
	return true;
}
