#include"looplist.h"
#include<stdio.h>
void main()
{
  looplist ph;
  init_list(&ph);
  for(int i=4;i>=1;--i)
  {
    insert_head(&ph,i);
  }
  /*
  insert_head(&ph,7);
  insert_head(&ph,6);
  insert_head(&ph,5);
  insert_head(&ph,4);
  insert_head(&ph,3);
  insert_head(&ph,2);
  insert_head(&ph,1);*/
  show(&ph);
  printf("\n游戏结果是：");
  int elem=delete_number(&ph);
  printf("%d\n",elem);
}