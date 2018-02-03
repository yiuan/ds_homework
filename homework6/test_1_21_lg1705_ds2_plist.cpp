#include<stdio.h>
#include"plist.h"
void main()
{
  sqlist sq;
  int i;
  init_sqlist(&sq); //初始化测试 结构体的元素data，len，listsize均要初始化
  insert_tail(&sq,99);
  insert(&sq,1,33);
  insert(&sq,2,44);
  insert(&sq,3,55);

  insert(&sq,4,66);
  insert(&sq,5,77);

  insert(&sq,6,88);
 
  insert(&sq,10,99);
  
  show(&sq);
  delete_value(&sq,44);
  printf("%d\n",get_length(&sq));
  //destroy_sqlist(&sq);
  show(&sq);
  delete_pos(&sq,4);
  printf("\n");
  show(&sq);
}