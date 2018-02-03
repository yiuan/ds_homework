#include<stdio.h>
#include"linkstack.h"
#include"stack.h"
void main()
{
  
  char str[]="6+(3-1)*2+10/2";
  linkstack ls;
  int *p = NULL;
  init_linkstack(&ls);
  Push_Stack(&ls,22);
  Push_Stack(&ls,33);
  Push_Stack(&ls,44);
  Push_Stack(&ls,55);
   pop(&ls,p)£»
  //printf("%d\n",is_empty(&ls));
}