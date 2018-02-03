#include"linkstack.h"
#include<stdlib.h>
#include<assert.h>
#include"stack.h"
#include<stdio.h>

//¡¥’ª
void init_linkstack(linkstack *s)
{
	s->top=NULL;
}

bool is_empty(linkstack *s)
{
	if(s->top == NULL)
		return true;
	else
		return false;
}

bool is_full(linkstack *s)
{
    return false; 
}
void Push_Stack(linkstack *S,stackElemType value)  
{  
    linkstack *p;  
    int i;  
  
    S = (linkstack *) malloc( sizeof(linkstack) );  
    S->top = NULL;  
      
	for(i=0; i<len; i++)  
    {  
        p = (linkstack *) malloc( sizeof(linkstack) );  
		value = p->data;  
        p->top = S->top;  
        S->top = p;  
    }   
}  

bool pop(linkstack *S,stackElemType *value)
{
	if(is_empty(S))
		return false;
	linkstack *newvalue;
	newvalue = S->top;

	S->top = newvalue->top;
	*value = newvalue->data;
	free(newvalue);
	return true;
}

//¿®∫≈∆•≈‰
void init_stack(seqstack *s)
{
  s->top = 0;
}

bool push(seqstack *s,stackElemType value)
{
	if( s->data[stack_SIZE] == -1)
       return false;
	s->top ++;
    	s->data[s->top] = value;
	return true; 
}


bool pop(seqstack *s,stackElemType *value)
{
	if(s->top == 0)
		return false;
	else
	{
	  *value = s->data[s->top];
	  s->top--;
	  return true;
	}  
}

bool Gettop(seqstack *s,stackElemType *value)
{
  if(s->top == 0)
	  return false;
  else
  {
	  *value = s->data[s->top];
	  return true;
  }
}

bool is_empty(seqstack *s)
{
   return (s->top == 0);
}

bool match(stackElemType ch,stackElemType *str)
{
  if(*str == ch)
	  return true;
  else
	  return false;
}
void Bracket(char *str)
{
  seqstack s;
  int i;
  char ch;
  init_stack(&s);
  for(i = 0;str[i] != '\0';i++)
  {
    switch(str[i])
	{
	case'(':
	case'{':
	case'[':
		push(&s,str[i]);
		break;
	case')':
	case'}':
	case']':
		if(is_empty(&s))
		{
		  printf("\n”“¿®∫≈∂‡”‡");
		}
		else
		{
		  Gettop(&s,&ch);
		  if(match(ch,str[i]))
			  pop(&s,&ch);
		  else
		  {
		    printf("\n∂‘”¶µƒ¿®∫≈¿‡–Õ≤ª∑˚£°");
		  }
		}
	}
	if(is_empty(&s))
		printf("\n¿®∫≈∆•≈‰£°");
	else
	{
	  printf("◊Û¿®∫≈∂‡”‡£°");
	}
  }
}