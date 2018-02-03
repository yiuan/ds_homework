#include"loopque.h"
#include<stdio.h>

void main()
{
  loop_que q;
  init_que(&q);
  en_queue(&q,10);
  en_queue(&q,20);
  en_queue(&q,30);
  en_queue(&q,40);
  /*  
  en_queue(&q,10);
  en_queue(&q,20);
  en_queue(&q,30);
  en_queue(&q,40);
  en_queue(&q,10);
  en_queue(&q,20);
  en_queue(&q,30);
  en_queue(&q,40);*/

 /* printf("%d\n",de_queue(&q));
    printf("%d\n",de_queue(&q));
	  printf("%d\n",de_queue(&q));*/
	    printf("%d\n",de_queue(&q));
printf("%d\n",get_head(&q));
}
  