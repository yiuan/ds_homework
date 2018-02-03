#include<stdio.h>
#include"list.h"

void main()
{
  list a,b;
   
  init_list(&a);
  init_list(&b);
  insert(&a,1,11);
  insert(&a,1,22);
  insert(&a,1,33);
  insert(&a,1,44);
  insert(&b,1,44);
  insert(&b,1,55);
  insert(&b,1,66);
  insert(&b,1,77);
  delete_A_B(&a,&b);
  show(&a);
  show(&b);
}