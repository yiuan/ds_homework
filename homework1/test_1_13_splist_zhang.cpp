#include<stdio.h>
#include "sqlist.h"

void main()
{
  list l;
  init_sqlist(&l);
  insert_head(&l,11);   //À≥–Ú±ÌÕ∑≤Â≤‚ ‘

  insert_tail(&l,77);   //À≥–Ú±ÌŒ≤≤Â≤‚ ‘

  insert(&l,3,88);     
  insert(&l,4,99);      //À≥–Ú±Ì∞¥Œª÷√≤Â»Î≤‚ ‘
  /*for(int i=1;i<10;i++)
  {
	 insert(&l,i,i); 
  }*/
  //delete_value(&l,33);
  
  show(&l);
  printf("\n");
  printf("%d",search(&l,88));
  //delete_pos(&l,2);
  //delete_value(&l,77);
  show(&l);
  printf("\n%d ",get_length(&l));
  //printf("%d",is_empty(&l));  //≈–∂œ «∑ÒŒ™ø’≤‚ ‘
  //clear_sqlist(&l);
  
}