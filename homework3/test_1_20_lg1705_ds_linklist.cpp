#include<stdio.h>
#include"linklist.h"


void main()
{
  node l;
  init_list(&l);
  
  insert_list(&l,1,15);
  insert_list(&l,2,16);
  show_list(&l);
  printf("\n");
  insert_head(&l,77);
  show_list(&l);
  printf("\n");
  insert_tail(&l,88);
  show_list(&l);
  printf("\n");
  //insert_list(&l,4,17);
  //insert_list(&l,5,18);
  delete_listvalue(&l,16);
 // printf("%d ", is_empty(&l));
  show_list(&l);
/*
 destory_list(&l);
 delete_listv(&l,13);

 delete_listp(&l,2);

 insert_list(&l,4,15);

 get_list(&l,5,16);

 delete_head(&l);

 delete_tail(&l); 
*/
 }