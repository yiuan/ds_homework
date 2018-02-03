#include"list.h"
#include<assert.h>
#include<stdio.h>

void init_list(list *p)
{
   for(int i =0;i<MAXSIZE;i++)
    {
      p->data[i] = 0;
    }
   p->len=0;
}

bool insert(list *p, int pos, int value)//向某位置插入元素
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

bool delete_pos(list *plist, int pos)//8.根据位置删除某个元素
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

void mergelist(list *la,list *lb,list *lc)
{
  int i,j,k;
  i=0;j=0;k=0;
  while(i <= la->len && j <= lb->len)
	  if(la->data[i] <= lb->data[j])
	  {
		  lc->data[k] = la->data[i];
		  k++;i++;
	  }
	  else
	  {
		  lc->data[k] = lb->data[j];
		  k++;j++;
	  }
	  while(i <= la->len )
	  {
	     lc->data[k] = la->data[i];
		  k++;i++;
	  }
	  while(j <= lb->len)
	  {
	  
	   lc->data[k] = la->data[i];
		  k++;i++;
	  }
	  lc->len = la->len + lb->len + 1;
}

void delete_A_B(list *pa,list *pb)
{
  int i=0,j=0; 
  while(i <= pa->len && j<=pb->len)
  {    
	  if(pa->data[i] == pb->data[j])
		 delete_pos(pa,i); 
	  else		 
	  {
		  i++;
	      j++;
	  }	  
  }
}

void show(list *p)
{
	assert(p != NULL);
	int i;
	for(i=0;i<=p->len;i++)
	{
		printf("%d ",p->data[i]);
	}
}