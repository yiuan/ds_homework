#include<stdio.h>
#include"plist.h"
void main()
{
  sqlist sq;
  int i;
  init_sqlist(&sq); //��ʼ������ �ṹ���Ԫ��data��len��listsize��Ҫ��ʼ��
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